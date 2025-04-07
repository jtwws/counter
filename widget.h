#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <string>
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();

private slots:
    void paintEvent(QPaintEvent* event);
    void on_yi_clicked();

    void on_er_clicked();

    void on_san_clicked();

    void on_si_clicked();

    void on_wu_clicked();

    void on_liu_clicked();

    void on_qi_clicked();

    void on_ba_clicked();

    void on_jiu_clicked();

    void on_jia_clicked();

    void on_jian_clicked();

    void on_cheng_clicked();

    void on_chu_clicked();

    void on_denghao_clicked();

    void on_zuokuohao_clicked();

    void on_ling_clicked();

    void on_youkuohao_clicked();

    void on_clear_clicked();

    void on_shanchu_clicked();

private:
    Ui::Widget *ui;
    QString pression;
};
#endif // WIDGET_H
