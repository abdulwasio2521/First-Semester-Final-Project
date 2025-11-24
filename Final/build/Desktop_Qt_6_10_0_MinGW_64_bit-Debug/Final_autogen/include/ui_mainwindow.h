/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *gif;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_3;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame_7;
    QLineEdit *roll_no;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *fname;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *caste;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *district;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *gpa;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QFrame *frame_5;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(809, 594);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background -color: white;"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: white;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        gif = new QLabel(frame);
        gif->setObjectName("gif");

        gridLayout_3->addWidget(gif, 1, 0, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);


        gridLayout_2->addWidget(frame, 0, 2, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_10->addWidget(frame_3);

        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_10->addWidget(frame_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #FDCB50;"));

        verticalLayout->addWidget(label);

        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout->addWidget(name);


        verticalLayout_9->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: #FDCB50;"));

        verticalLayout_2->addWidget(label_2);

        frame_7 = new QFrame(centralwidget);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_2->addWidget(frame_7);

        roll_no = new QLineEdit(centralwidget);
        roll_no->setObjectName("roll_no");
        sizePolicy1.setHeightForWidth(roll_no->sizePolicy().hasHeightForWidth());
        roll_no->setSizePolicy(sizePolicy1);
        roll_no->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout_2->addWidget(roll_no);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #FDCB50;"));

        verticalLayout_3->addWidget(label_3);

        fname = new QLineEdit(centralwidget);
        fname->setObjectName("fname");
        sizePolicy1.setHeightForWidth(fname->sizePolicy().hasHeightForWidth());
        fname->setSizePolicy(sizePolicy1);
        fname->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout_3->addWidget(fname);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #FDCB50;"));

        verticalLayout_4->addWidget(label_4);

        caste = new QLineEdit(centralwidget);
        caste->setObjectName("caste");
        sizePolicy1.setHeightForWidth(caste->sizePolicy().hasHeightForWidth());
        caste->setSizePolicy(sizePolicy1);
        caste->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout_4->addWidget(caste);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: #FDCB50;"));

        verticalLayout_5->addWidget(label_5);

        district = new QLineEdit(centralwidget);
        district->setObjectName("district");
        sizePolicy1.setHeightForWidth(district->sizePolicy().hasHeightForWidth());
        district->setSizePolicy(sizePolicy1);
        district->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout_5->addWidget(district);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: #FDCB50;"));

        verticalLayout_6->addWidget(label_6);

        gpa = new QLineEdit(centralwidget);
        gpa->setObjectName("gpa");
        sizePolicy1.setHeightForWidth(gpa->sizePolicy().hasHeightForWidth());
        gpa->setSizePolicy(sizePolicy1);
        gpa->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout_6->addWidget(gpa);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #FDCB50;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #FDCB50;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #FDCB50;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #FDCB50;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_7);


        verticalLayout_10->addLayout(verticalLayout_9);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #FDCB50;\n"
"color: black;\n"
"border: 1px solid #FDCB50;\n"
"border-radius: 5px; \n"
"padding: 4px;  "));

        verticalLayout_10->addWidget(pushButton_5);

        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_10->addWidget(frame_5);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_10->addWidget(frame_4);


        gridLayout_2->addLayout(verticalLayout_10, 0, 1, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");

        verticalLayout_11->addWidget(label_11);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");

        verticalLayout_11->addWidget(label_10);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        verticalLayout_11->addWidget(label_7);


        gridLayout_2->addLayout(verticalLayout_11, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 809, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QString());
        gif->setText(QString());
        label_9->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Roll Number", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Father's Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Caste", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "District", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "GPA", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "View Record", nullptr));
        label_11->setText(QString());
        label_10->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
