/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *denghao;
    QLineEdit *shuru;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *si;
    QPushButton *wu;
    QPushButton *liu;
    QPushButton *shanchu;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *zuokuohao;
    QPushButton *ling;
    QPushButton *youkuohao;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *jia;
    QPushButton *jian;
    QPushButton *cheng;
    QPushButton *chu;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *qi;
    QPushButton *ba;
    QPushButton *jiu;
    QPushButton *clear;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *yi;
    QPushButton *er;
    QPushButton *san;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(320, 486);
        Widget->setMinimumSize(QSize(320, 486));
        Widget->setMaximumSize(QSize(320, 486));
        Widget->setStyleSheet(QString::fromUtf8("#Widget{\n"
"border-image: url(:/06.jpg);\n"
"}\n"
"\n"
"\n"
""));
        denghao = new QPushButton(Widget);
        denghao->setObjectName("denghao");
        denghao->setGeometry(QRect(240, 320, 70, 150));
        denghao->setMinimumSize(QSize(70, 150));
        denghao->setMaximumSize(QSize(70, 150));
        QFont font;
        font.setPointSize(15);
        denghao->setFont(font);
        denghao->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        denghao->setAutoDefault(false);
        denghao->setFlat(true);
        shuru = new QLineEdit(Widget);
        shuru->setObjectName("shuru");
        shuru->setGeometry(QRect(10, 10, 301, 71));
        shuru->setMinimumSize(QSize(300, 60));
        shuru->setSizeIncrement(QSize(300, 60));
        QFont font1;
        font1.setPointSize(21);
        shuru->setFont(font1);
        shuru->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);\n"
"background-color:rgba(0,0,0,0);\n"
"border: 2px solid #177588;\n"
""));
        shuru->setClearButtonEnabled(false);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 239, 303, 72));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        si = new QPushButton(layoutWidget);
        si->setObjectName("si");
        si->setMinimumSize(QSize(70, 70));
        si->setMaximumSize(QSize(70, 70));
        si->setFont(font);
        si->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        si->setFlat(true);

        horizontalLayout_3->addWidget(si);

        wu = new QPushButton(layoutWidget);
        wu->setObjectName("wu");
        wu->setMinimumSize(QSize(70, 70));
        wu->setMaximumSize(QSize(70, 70));
        wu->setFont(font);
        wu->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        wu->setFlat(true);

        horizontalLayout_3->addWidget(wu);

        liu = new QPushButton(layoutWidget);
        liu->setObjectName("liu");
        liu->setMinimumSize(QSize(70, 70));
        liu->setMaximumSize(QSize(70, 70));
        liu->setFont(font);
        liu->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        liu->setFlat(true);

        horizontalLayout_3->addWidget(liu);

        shanchu = new QPushButton(layoutWidget);
        shanchu->setObjectName("shanchu");
        shanchu->setMinimumSize(QSize(70, 70));
        shanchu->setMaximumSize(QSize(70, 70));
        shanchu->setFont(font);
        shanchu->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        shanchu->setFlat(true);

        horizontalLayout_3->addWidget(shanchu);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 400, 231, 72));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        zuokuohao = new QPushButton(layoutWidget1);
        zuokuohao->setObjectName("zuokuohao");
        zuokuohao->setMinimumSize(QSize(70, 70));
        zuokuohao->setMaximumSize(QSize(70, 70));
        zuokuohao->setFont(font);
        zuokuohao->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        zuokuohao->setFlat(true);

        horizontalLayout_5->addWidget(zuokuohao);

        ling = new QPushButton(layoutWidget1);
        ling->setObjectName("ling");
        ling->setMinimumSize(QSize(70, 70));
        ling->setMaximumSize(QSize(70, 70));
        ling->setFont(font);
        ling->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        ling->setFlat(true);

        horizontalLayout_5->addWidget(ling);

        youkuohao = new QPushButton(layoutWidget1);
        youkuohao->setObjectName("youkuohao");
        youkuohao->setMinimumSize(QSize(70, 70));
        youkuohao->setMaximumSize(QSize(70, 70));
        youkuohao->setFont(font);
        youkuohao->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        youkuohao->setFlat(true);

        horizontalLayout_5->addWidget(youkuohao);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(11, 81, 303, 72));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        jia = new QPushButton(layoutWidget2);
        jia->setObjectName("jia");
        jia->setMinimumSize(QSize(70, 70));
        jia->setMaximumSize(QSize(70, 70));
        jia->setFont(font);
        jia->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        jia->setFlat(true);

        horizontalLayout->addWidget(jia);

        jian = new QPushButton(layoutWidget2);
        jian->setObjectName("jian");
        jian->setMinimumSize(QSize(70, 70));
        jian->setMaximumSize(QSize(70, 70));
        jian->setFont(font);
        jian->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        jian->setFlat(true);

        horizontalLayout->addWidget(jian);

        cheng = new QPushButton(layoutWidget2);
        cheng->setObjectName("cheng");
        cheng->setMinimumSize(QSize(70, 70));
        cheng->setMaximumSize(QSize(70, 70));
        cheng->setFont(font);
        cheng->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        cheng->setFlat(true);

        horizontalLayout->addWidget(cheng);

        chu = new QPushButton(layoutWidget2);
        chu->setObjectName("chu");
        chu->setMinimumSize(QSize(70, 70));
        chu->setMaximumSize(QSize(70, 70));
        chu->setFont(font);
        chu->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        chu->setFlat(true);

        horizontalLayout->addWidget(chu);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(11, 160, 303, 72));
        layoutWidget3->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        qi = new QPushButton(layoutWidget3);
        qi->setObjectName("qi");
        qi->setMinimumSize(QSize(70, 70));
        qi->setMaximumSize(QSize(70, 70));
        qi->setFont(font);
        qi->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        qi->setFlat(true);

        horizontalLayout_2->addWidget(qi);

        ba = new QPushButton(layoutWidget3);
        ba->setObjectName("ba");
        ba->setMinimumSize(QSize(70, 70));
        ba->setMaximumSize(QSize(70, 70));
        ba->setFont(font);
        ba->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        ba->setFlat(true);

        horizontalLayout_2->addWidget(ba);

        jiu = new QPushButton(layoutWidget3);
        jiu->setObjectName("jiu");
        jiu->setMinimumSize(QSize(70, 70));
        jiu->setMaximumSize(QSize(70, 70));
        jiu->setFont(font);
        jiu->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        jiu->setFlat(true);

        horizontalLayout_2->addWidget(jiu);

        clear = new QPushButton(layoutWidget3);
        clear->setObjectName("clear");
        clear->setMinimumSize(QSize(70, 70));
        clear->setMaximumSize(QSize(70, 70));
        clear->setFont(font);
        clear->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        clear->setFlat(true);

        horizontalLayout_2->addWidget(clear);

        layoutWidget4 = new QWidget(Widget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 320, 226, 72));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        yi = new QPushButton(layoutWidget4);
        yi->setObjectName("yi");
        yi->setMinimumSize(QSize(70, 70));
        yi->setMaximumSize(QSize(70, 70));
        yi->setFont(font);
        yi->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        yi->setFlat(true);

        horizontalLayout_4->addWidget(yi);

        er = new QPushButton(layoutWidget4);
        er->setObjectName("er");
        er->setMinimumSize(QSize(70, 70));
        er->setMaximumSize(QSize(70, 70));
        er->setFont(font);
        er->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        er->setFlat(true);

        horizontalLayout_4->addWidget(er);

        san = new QPushButton(layoutWidget4);
        san->setObjectName("san");
        san->setMinimumSize(QSize(70, 70));
        san->setMaximumSize(QSize(70, 70));
        san->setFont(font);
        san->setStyleSheet(QString::fromUtf8("color: rgb(62, 255, 226);"));
        san->setFlat(true);

        horizontalLayout_4->addWidget(san);


        retranslateUi(Widget);

        denghao->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        denghao->setText(QCoreApplication::translate("Widget", "=", nullptr));
        shuru->setText(QString());
        si->setText(QCoreApplication::translate("Widget", "4", nullptr));
        wu->setText(QCoreApplication::translate("Widget", "5", nullptr));
        liu->setText(QCoreApplication::translate("Widget", "6", nullptr));
        shanchu->setText(QCoreApplication::translate("Widget", "<-", nullptr));
        zuokuohao->setText(QCoreApplication::translate("Widget", "\357\274\210", nullptr));
        ling->setText(QCoreApplication::translate("Widget", "0", nullptr));
        youkuohao->setText(QCoreApplication::translate("Widget", "\357\274\211", nullptr));
        jia->setText(QCoreApplication::translate("Widget", "+", nullptr));
        jian->setText(QCoreApplication::translate("Widget", "-", nullptr));
        cheng->setText(QCoreApplication::translate("Widget", "*", nullptr));
        chu->setText(QCoreApplication::translate("Widget", "/", nullptr));
        qi->setText(QCoreApplication::translate("Widget", "7", nullptr));
        ba->setText(QCoreApplication::translate("Widget", "8", nullptr));
        jiu->setText(QCoreApplication::translate("Widget", "9", nullptr));
        clear->setText(QCoreApplication::translate("Widget", "C", nullptr));
        yi->setText(QCoreApplication::translate("Widget", "1", nullptr));
        er->setText(QCoreApplication::translate("Widget", "2", nullptr));
        san->setText(QCoreApplication::translate("Widget", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
