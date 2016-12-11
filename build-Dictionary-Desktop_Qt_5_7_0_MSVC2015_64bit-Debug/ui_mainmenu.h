/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCreateLanguage;
    QPushButton *btnLoadLanguage;
    QPushButton *btnExit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(947, 581);
        actionExit = new QAction(MainMenu);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnCreateLanguage = new QPushButton(centralWidget);
        btnCreateLanguage->setObjectName(QStringLiteral("btnCreateLanguage"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCreateLanguage->sizePolicy().hasHeightForWidth());
        btnCreateLanguage->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btnCreateLanguage->setFont(font1);
        btnCreateLanguage->setLayoutDirection(Qt::LeftToRight);
        btnCreateLanguage->setCheckable(false);

        verticalLayout->addWidget(btnCreateLanguage);

        btnLoadLanguage = new QPushButton(centralWidget);
        btnLoadLanguage->setObjectName(QStringLiteral("btnLoadLanguage"));
        sizePolicy.setHeightForWidth(btnLoadLanguage->sizePolicy().hasHeightForWidth());
        btnLoadLanguage->setSizePolicy(sizePolicy);
        btnLoadLanguage->setFont(font1);
        btnLoadLanguage->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(btnLoadLanguage);

        btnExit = new QPushButton(centralWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        sizePolicy.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy);
        btnExit->setFont(font1);
        btnExit->setLayoutDirection(Qt::LeftToRight);
        btnExit->setCheckable(false);

        verticalLayout->addWidget(btnExit);


        verticalLayout_2->addLayout(verticalLayout);

        MainMenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 947, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainMenu->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Language Creation Tool", 0));
        actionExit->setText(QApplication::translate("MainMenu", "Exit", 0));
        label->setText(QApplication::translate("MainMenu", "Language Creation Tool", 0));
        btnCreateLanguage->setText(QApplication::translate("MainMenu", "Create A New Language", 0));
        btnLoadLanguage->setText(QApplication::translate("MainMenu", "Load An Existing Language", 0));
        btnExit->setText(QApplication::translate("MainMenu", "Exit", 0));
        menuFile->setTitle(QApplication::translate("MainMenu", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
