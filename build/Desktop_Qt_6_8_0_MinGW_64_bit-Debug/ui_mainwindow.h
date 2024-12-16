/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_X;
    QAction *action_A;
    QAction *action_S;
    QAction *action_X_2;
    QAction *action_U;
    QAction *action_T;
    QAction *action_C;
    QAction *action_A_2;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 599);
        action_N = new QAction(MainWindow);
        action_N->setObjectName("action_N");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_N->setIcon(icon);
        action_O = new QAction(MainWindow);
        action_O->setObjectName("action_O");
        action_X = new QAction(MainWindow);
        action_X->setObjectName("action_X");
        action_A = new QAction(MainWindow);
        action_A->setObjectName("action_A");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/asave.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_A->setIcon(icon1);
        action_S = new QAction(MainWindow);
        action_S->setObjectName("action_S");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_S->setIcon(icon2);
        action_X_2 = new QAction(MainWindow);
        action_X_2->setObjectName("action_X_2");
        action_U = new QAction(MainWindow);
        action_U->setObjectName("action_U");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_U->setIcon(icon3);
        action_T = new QAction(MainWindow);
        action_T->setObjectName("action_T");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_T->setIcon(icon4);
        action_C = new QAction(MainWindow);
        action_C->setObjectName("action_C");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_C->setIcon(icon5);
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName("action_A_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menu_F->addAction(action_N);
        menu_F->addAction(action_O);
        menu_F->addAction(action_X);
        menu_F->addSeparator();
        menu_F->addAction(action_A);
        menu_F->addAction(action_S);
        menu_F->addSeparator();
        menu_F->addAction(action_X_2);
        menu_E->addAction(action_U);
        menu_E->addAction(action_T);
        menu_E->addAction(action_C);
        menu_E->addAction(action_A_2);
        toolBar->addAction(action_O);
        toolBar->addAction(action_X);
        toolBar_2->addAction(action_A);
        toolBar_2->addAction(action_S);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_N->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236(N)", nullptr));
        action_O->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237(O)", nullptr));
        action_X->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(X)", nullptr));
        action_A->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230(A)", nullptr));
        action_S->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(S)", nullptr));
        action_X_2->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(X)", nullptr));
        action_U->setText(QCoreApplication::translate("MainWindow", "\351\202\204\345\216\237(U)", nullptr));
        action_T->setText(QCoreApplication::translate("MainWindow", "\345\211\252\344\270\213(T)", nullptr));
        action_C->setText(QCoreApplication::translate("MainWindow", "\350\244\207\350\243\275(C)", nullptr));
        action_A_2->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\201\270(A)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210(F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257(E)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
