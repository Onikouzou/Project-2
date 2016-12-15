/********************************************************************************
** Form generated from reading UI file 'existinglanguage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXISTINGLANGUAGE_H
#define UI_EXISTINGLANGUAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExistingLanguage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblName;
    QLabel *lblSounds;
    QVBoxLayout *verticalLayout;
    QPushButton *btnChooseSounds;
    QPushButton *btnChooseStructure;
    QPushButton *btnChooseWords;
    QPushButton *btnSearchDictionary;
    QPushButton *btnReturn;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *ExistingLanguage)
    {
        if (ExistingLanguage->objectName().isEmpty())
            ExistingLanguage->setObjectName(QStringLiteral("ExistingLanguage"));
        ExistingLanguage->resize(947, 581);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExistingLanguage->sizePolicy().hasHeightForWidth());
        ExistingLanguage->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ExistingLanguage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblName = new QLabel(centralwidget);
        lblName->setObjectName(QStringLiteral("lblName"));
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        lblName->setFont(font);
        lblName->setLayoutDirection(Qt::LeftToRight);
        lblName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblName);

        lblSounds = new QLabel(centralwidget);
        lblSounds->setObjectName(QStringLiteral("lblSounds"));
        lblSounds->setLayoutDirection(Qt::LeftToRight);
        lblSounds->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblSounds);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnChooseSounds = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(ExistingLanguage);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(btnChooseSounds);
        btnChooseSounds->setObjectName(QStringLiteral("btnChooseSounds"));
        sizePolicy.setHeightForWidth(btnChooseSounds->sizePolicy().hasHeightForWidth());
        btnChooseSounds->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Franklin Gothic Heavy"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btnChooseSounds->setFont(font1);

        verticalLayout->addWidget(btnChooseSounds);

        btnChooseStructure = new QPushButton(centralwidget);
        buttonGroup->addButton(btnChooseStructure);
        btnChooseStructure->setObjectName(QStringLiteral("btnChooseStructure"));
        sizePolicy.setHeightForWidth(btnChooseStructure->sizePolicy().hasHeightForWidth());
        btnChooseStructure->setSizePolicy(sizePolicy);
        btnChooseStructure->setFont(font1);

        verticalLayout->addWidget(btnChooseStructure);

        btnChooseWords = new QPushButton(centralwidget);
        buttonGroup->addButton(btnChooseWords);
        btnChooseWords->setObjectName(QStringLiteral("btnChooseWords"));
        sizePolicy.setHeightForWidth(btnChooseWords->sizePolicy().hasHeightForWidth());
        btnChooseWords->setSizePolicy(sizePolicy);
        btnChooseWords->setFont(font1);

        verticalLayout->addWidget(btnChooseWords);

        btnSearchDictionary = new QPushButton(centralwidget);
        buttonGroup->addButton(btnSearchDictionary);
        btnSearchDictionary->setObjectName(QStringLiteral("btnSearchDictionary"));
        sizePolicy.setHeightForWidth(btnSearchDictionary->sizePolicy().hasHeightForWidth());
        btnSearchDictionary->setSizePolicy(sizePolicy);
        btnSearchDictionary->setFont(font1);

        verticalLayout->addWidget(btnSearchDictionary);

        btnReturn = new QPushButton(centralwidget);
        buttonGroup->addButton(btnReturn);
        btnReturn->setObjectName(QStringLiteral("btnReturn"));
        sizePolicy.setHeightForWidth(btnReturn->sizePolicy().hasHeightForWidth());
        btnReturn->setSizePolicy(sizePolicy);
        btnReturn->setFont(font1);
        btnReturn->setCheckable(false);

        verticalLayout->addWidget(btnReturn);


        verticalLayout_2->addLayout(verticalLayout);

        ExistingLanguage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExistingLanguage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 947, 21));
        ExistingLanguage->setMenuBar(menubar);
        statusbar = new QStatusBar(ExistingLanguage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ExistingLanguage->setStatusBar(statusbar);

        retranslateUi(ExistingLanguage);
        QObject::connect(btnReturn, SIGNAL(clicked()), ExistingLanguage, SLOT(close()));

        QMetaObject::connectSlotsByName(ExistingLanguage);
    } // setupUi

    void retranslateUi(QMainWindow *ExistingLanguage)
    {
        ExistingLanguage->setWindowTitle(QApplication::translate("ExistingLanguage", "Language Creation Tool", 0));
        lblName->setText(QApplication::translate("ExistingLanguage", "Existing Language", 0));
        lblSounds->setText(QApplication::translate("ExistingLanguage", "SoundsTemp", 0));
        btnChooseSounds->setText(QApplication::translate("ExistingLanguage", "Choose Sounds", 0));
        btnChooseStructure->setText(QApplication::translate("ExistingLanguage", "Choose Structure", 0));
        btnChooseWords->setText(QApplication::translate("ExistingLanguage", "Choose Words", 0));
        btnSearchDictionary->setText(QApplication::translate("ExistingLanguage", "Search Dictionary", 0));
        btnReturn->setText(QApplication::translate("ExistingLanguage", "Return", 0));
    } // retranslateUi

};

namespace Ui {
    class ExistingLanguage: public Ui_ExistingLanguage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXISTINGLANGUAGE_H
