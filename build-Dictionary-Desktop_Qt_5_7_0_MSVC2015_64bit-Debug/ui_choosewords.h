/********************************************************************************
** Form generated from reading UI file 'choosewords.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWORDS_H
#define UI_CHOOSEWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_chooseWords
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWords;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *chooseWords)
    {
        if (chooseWords->objectName().isEmpty())
            chooseWords->setObjectName(QStringLiteral("chooseWords"));
        chooseWords->resize(400, 300);
        verticalLayout = new QVBoxLayout(chooseWords);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        listWords = new QListWidget(chooseWords);
        listWords->setObjectName(QStringLiteral("listWords"));

        verticalLayout_2->addWidget(listWords);

        buttonBox = new QDialogButtonBox(chooseWords);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(chooseWords);
        QObject::connect(buttonBox, SIGNAL(accepted()), chooseWords, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), chooseWords, SLOT(reject()));

        QMetaObject::connectSlotsByName(chooseWords);
    } // setupUi

    void retranslateUi(QDialog *chooseWords)
    {
        chooseWords->setWindowTitle(QApplication::translate("chooseWords", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class chooseWords: public Ui_chooseWords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWORDS_H
