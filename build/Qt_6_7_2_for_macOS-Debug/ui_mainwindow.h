/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Audio_File;
    QWidget *centralwidget;
    QLabel *label_File_Name;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QPushButton *pushButton_Seek_Back;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Pause;
    QPushButton *pushButton_Seek_Forward;
    QPushButton *pushButton_Volume;
    QLabel *label_Value_1;
    QLabel *label_Value_2;
    QMenuBar *menubar;
    QMenu *menuOpen;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(382, 272);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-color:rgb(52,51,64);\n"
"}"));
        actionOpen_Audio_File = new QAction(MainWindow);
        actionOpen_Audio_File->setObjectName("actionOpen_Audio_File");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_File_Name = new QLabel(centralwidget);
        label_File_Name->setObjectName("label_File_Name");
        label_File_Name->setGeometry(QRect(10, 6, 151, 20));
        label_File_Name->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:rgb(255,255,255);\n"
"	border:2px solid rgb(255,255,255);\n"
"}"));
        label_File_Name->setFrameShape(QFrame::Panel);
        label_File_Name->setLineWidth(2);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 40, 160, 25));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::grove:horizontal\n"
"{\n"
"	height:10px;\n"
"	width:460px;\n"
"	background:red;\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"	background:rgb(52,50,64);\n"
"	width:20px;\n"
"	height:20px;\n"
"	margin:-7px -7px;\n"
"	border-radius:10px;\n"
"}"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(90, 190, 160, 25));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("QSlider::grove:horizontal\n"
"{\n"
"	height:10px;\n"
"	width:460px;\n"
"	background:red;\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"	background:rgb(52,50,64);\n"
"	width:20px;\n"
"	height:20px;\n"
"	margin:-7px -7px;\n"
"	border-radius:10px;\n"
"}"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        pushButton_Seek_Back = new QPushButton(centralwidget);
        pushButton_Seek_Back->setObjectName("pushButton_Seek_Back");
        pushButton_Seek_Back->setGeometry(QRect(10, 110, 61, 41));
        pushButton_Seek_Back->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:50px;\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        pushButton_Stop = new QPushButton(centralwidget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setGeometry(QRect(80, 110, 61, 41));
        pushButton_Stop->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:50px;\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        pushButton_Play = new QPushButton(centralwidget);
        pushButton_Play->setObjectName("pushButton_Play");
        pushButton_Play->setGeometry(QRect(150, 110, 61, 41));
        pushButton_Play->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:50px;\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        pushButton_Pause = new QPushButton(centralwidget);
        pushButton_Pause->setObjectName("pushButton_Pause");
        pushButton_Pause->setGeometry(QRect(220, 110, 61, 41));
        pushButton_Pause->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:50px;\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        pushButton_Seek_Forward = new QPushButton(centralwidget);
        pushButton_Seek_Forward->setObjectName("pushButton_Seek_Forward");
        pushButton_Seek_Forward->setGeometry(QRect(290, 110, 61, 41));
        pushButton_Seek_Forward->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:50px;\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        pushButton_Volume = new QPushButton(centralwidget);
        pushButton_Volume->setObjectName("pushButton_Volume");
        pushButton_Volume->setGeometry(QRect(10, 180, 61, 41));
        pushButton_Volume->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:50px;\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        label_Value_1 = new QLabel(centralwidget);
        label_Value_1->setObjectName("label_Value_1");
        label_Value_1->setGeometry(QRect(10, 70, 58, 16));
        label_Value_2 = new QLabel(centralwidget);
        label_Value_2->setObjectName("label_Value_2");
        label_Value_2->setGeometry(QRect(240, 70, 58, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 382, 24));
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionOpen_Audio_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Audio_File->setText(QCoreApplication::translate("MainWindow", "Open Audio File", nullptr));
        label_File_Name->setText(QCoreApplication::translate("MainWindow", "FILE NAME", nullptr));
        pushButton_Seek_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_Play->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        pushButton_Pause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        pushButton_Seek_Forward->setText(QCoreApplication::translate("MainWindow", "Forward", nullptr));
        pushButton_Volume->setText(QCoreApplication::translate("MainWindow", "Mute", nullptr));
        label_Value_1->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_Value_2->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
