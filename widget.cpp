#include "widget.h"
#include "ui_widget.h"
#include <QStack>
#include <QVector>
#include <iostream>
#include <QPainter>
#include <QStyleOption>

using namespace std;
struct up{
    double a;
    char b;
    int sign;
};
//如果直接入栈则输出0，若要去除栈内符号则输出1。特殊如果进栈右括号则为2
int fuhaobi(char zhaifu,char yuru){
    switch(zhaifu){
    case '+':
        if (yuru==')') return 2;
        else if(yuru=='+'||yuru=='-') return 1;
        else return 0;
    case '-':
        if (yuru==')') return 2;
        else if(yuru=='+'||yuru=='-') return 1;
        else return 0;
    case '*':
        if (yuru=='(') return 0;
        else if (yuru==')') return 2;
        else return 1;
    case '/':
        if (yuru=='(') return 0;
        else if (yuru==')') return 2;
        else return 1;
    case '(':return 0;
    default :return 3;
    };
}

std::vector<up> zhuanhuan(QString expressionchu) {
    std::string expression;
    for (int a=0;a<expressionchu.size();a++){
        expression+=expressionchu[a].toLatin1();
    }
    int init=0;
    QStack<char> zhai;
    vector<up> end;
    for (int n=0;n<expression.size();n++){
        if (init==0) {
            if (expression[n]>='0'&&expression[n]<='9') {
                int chun=n;
                double p=0;
                int signs[2]={0};
                int uu=0;
                int zheng[10]={0},xiaoshu[10]={0},z=0,x=0;
                while((expression[n]>='0'&&expression[n]<='9')||expression[n]=='.') {
                    signs[0]++;
                    if (expression[n] == '.') {
                        signs[1] = signs[0];
                        uu = 1;
                        n++;
                    }
                    if (uu == 0) {
                        zheng[z] = expression[n]-'0';
                        z++;
                    } else {
                        xiaoshu[x] = expression[n]-'0';
                        x++;
                    }
                    n++;
                }
                for (int a=0;a<z;a++){
                    p+=pow(10,z-a-1)*zheng[a];
                }
                for (int a=0;a<x;a++){
                    p+=pow(0.1,a+1)*xiaoshu[a];
                }
                n--;
                end.push_back({p,0,0});
            }
            else {
                init = 1;
                zhai.push(expression[n]);
            }
        }else {
            if (expression[n]>='0'&&expression[n]<='9') {
                int chun=n;
                double p=0;
                int signs[2]={0};
                int uu=0;
                int zheng[10]={0},xiaoshu[10]={0},z=0,x=0;
                while((expression[n]>='0'&&expression[n]<='9')||expression[n]=='.') {
                    signs[0]++;
                    if (expression[n] == '.') {
                        signs[1] = signs[0];
                        uu = 1;
                        n++;
                    }
                    if (uu == 0) {
                        zheng[z] = expression[n]-'0';
                        z++;
                    } else {
                        xiaoshu[x] = expression[n]-'0';
                        x++;
                    }
                    n++;
                }
                for (int a=0;a<z;a++){
                    p+=pow(10,z-a-1)*zheng[a];
                }
                for (int a=0;a<x;a++){
                    p+=pow(0.1,a+1)*xiaoshu[a];
                }
                n--;
                end.push_back({p,0,0});
            }
            else {
                if (fuhaobi(zhai.top(), expression[n]) == 0) {
                    zhai.push(expression[n]);
                } else if (fuhaobi(zhai.top(), expression[n]) == 1) {
                    while (fuhaobi(zhai.top(), expression[n]) == 1) {
                        end.push_back({0,zhai.top(),1});
                        zhai.pop();
                        if (zhai.size()==0) {
                            init=0;
                            break;
                        }
                    }
                    zhai.push(expression[n]);
                } else if (fuhaobi(zhai.top(), expression[n]) == 2) {
                    while (zhai.top() != '(') {
                        end.push_back({0,zhai.top(),1});
                        zhai.pop();
                    }
                    zhai.pop();
                    if (zhai.size()==0) init=0;
                }
            }
        }
    }
    while(zhai.size()!=0){
        end.push_back({0,zhai.top(),1});
        zhai.pop();
    }
    return end;
}

double jisuan(vector<up> houzhui){
    char fu;
    vector<struct up> temp;
    for (int n=0;n<houzhui.size();n++){
        if (houzhui[n].sign==1){
            temp.push_back({0,houzhui[n].b,1});
        }else {
            temp.push_back({houzhui[n].a,0,0});
        }
    }
    while(temp.size()>1) {
        for (int n = 0; n < temp.size(); n ++) {
            if (temp[n].sign==1) {
                fu = temp[n].b;
                switch (fu) {
                case '+':
                    temp[n-2].a+=temp[n-1].a;
                    break;
                case '-':
                    temp[n-2].a-=temp[n-1].a;
                    break;
                case '*':
                    temp[n-2].a*=temp[n-1].a;
                    break;
                case '/':
                    temp[n-2].a/=temp[n-1].a;
                    break;
                default:
                    break;
                }
                temp.erase(temp.begin() + n - 1);
                temp.erase(temp.begin() + n-1);
                break;
            }
        }
    }
    return temp[0].a;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
}


Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent * event)
{
    QStyleOption opt;
    opt.initFrom(this);
    //opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void Widget::on_yi_clicked()
{
    pression+="1";
    ui->shuru->setText(pression);
}


void Widget::on_er_clicked()
{
    pression+="2";
    ui->shuru->setText(pression);
}


void Widget::on_san_clicked()
{
    pression+="3";
    ui->shuru->setText(pression);
}


void Widget::on_si_clicked()
{
    pression+="4";
    ui->shuru->setText(pression);
}


void Widget::on_wu_clicked()
{
    pression+="5";
    ui->shuru->setText(pression);
}


void Widget::on_liu_clicked()
{
    pression+="6";
    ui->shuru->setText(pression);
}


void Widget::on_qi_clicked()
{
    pression+="7";
    ui->shuru->setText(pression);
}


void Widget::on_ba_clicked()
{
    pression+="8";
    ui->shuru->setText(pression);
}


void Widget::on_jiu_clicked()
{
    pression+="9";
    ui->shuru->setText(pression);
}


void Widget::on_jia_clicked()
{
    pression+="+";
    ui->shuru->setText(pression);
}


void Widget::on_jian_clicked()
{
    pression+="-";
    ui->shuru->setText(pression);
}


void Widget::on_cheng_clicked()
{
    pression+="*";
    ui->shuru->setText(pression);
}


void Widget::on_chu_clicked()
{
    pression+="/";
    ui->shuru->setText(pression);
}


void Widget::on_denghao_clicked()
{
    QString nums;
    vector<up> chu=zhuanhuan(pression);
    pression+="=";
    double result=jisuan(chu);
    nums+=to_string(result);
    int n=nums.size()-1;
    while(nums[n]=='0'){
        nums.erase(nums.begin()+n);
        n--;
    }
    if (nums[n]=='.') nums.erase(nums.begin()+n);
    pression+=nums;
    ui->shuru->setText(pression);
}


void Widget::on_zuokuohao_clicked()
{
    pression+="(";
    ui->shuru->setText(pression);
}


void Widget::on_ling_clicked()
{
    pression+="0";
    ui->shuru->setText(pression);
}


void Widget::on_youkuohao_clicked()
{
    pression+=")";
    ui->shuru->setText(pression);
}


void Widget::on_clear_clicked()
{
    pression.clear();
    ui->shuru->setText(pression);
}


void Widget::on_shanchu_clicked()
{
    pression.chop(1);
    ui->shuru->setText(pression);
}

