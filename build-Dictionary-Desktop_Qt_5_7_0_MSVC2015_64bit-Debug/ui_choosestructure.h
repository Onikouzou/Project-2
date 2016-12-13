/********************************************************************************
** Form generated from reading UI file 'choosestructure.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSESTRUCTURE_H
#define UI_CHOOSESTRUCTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseStructure
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelStructure;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLowerC;
    QPushButton *btnUpperC;
    QPushButton *btnLowerV;
    QPushButton *btnUpperV;

    void setupUi(QDialog *chooseStructure)
    {
        if (chooseStructure->objectName().isEmpty())
            chooseStructure->setObjectName(QStringLiteral("chooseStructure"));
        chooseStructure->resize(421, 289);
        buttonBox = new QDialogButtonBox(chooseStructure);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        labelStructure = new QLabel(chooseStructure);
        labelStructure->setObjectName(QStringLiteral("labelStructure"));
        labelStructure->setGeometry(QRect(20, 30, 381, 53));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        labelStructure->setFont(font);
        labelStructure->setLayoutDirection(Qt::LeftToRight);
        labelStructure->setAlignment(Qt::AlignCenter);
        widget = new QWidget(chooseStructure);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 90, 378, 57));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnLowerC = new QPushButton(widget);
        btnLowerC->setObjectName(QStringLiteral("btnLowerC"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        btnLowerC->setFont(font1);

        horizontalLayout->addWidget(btnLowerC);

        btnUpperC = new QPushButton(widget);
        btnUpperC->setObjectName(QStringLiteral("btnUpperC"));
        btnUpperC->setFont(font1);

        horizontalLayout->addWidget(btnUpperC);

        btnLowerV = new QPushButton(widget);
        btnLowerV->setObjectName(QStringLiteral("btnLowerV"));
        btnLowerV->setFont(font1);

        horizontalLayout->addWidget(btnLowerV);

        btnUpperV = new QPushButton(widget);
        btnUpperV->setObjectName(QStringLiteral("btnUpperV"));
        btnUpperV->setFont(font1);

        horizontalLayout->addWidget(btnUpperV);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox->raise();
        btnUpperV->raise();
        btnLowerV->raise();
        btnLowerC->raise();
        btnUpperC->raise();
        btnUpperC->raise();
        btnLowerV->raise();
        btnUpperV->raise();
        btnLowerC->raise();
        labelStructure->raise();

        retranslateUi(chooseStructure);
        QObject::connect(buttonBox, SIGNAL(accepted()), chooseStructure, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), chooseStructure, SLOT(reject()));

        QMetaObject::connectSlotsByName(chooseStructure);
    } // setupUi

    void retranslateUi(QDialog *chooseStructure)
    {
        chooseStructure->setWindowTitle(QApplication::translate("chooseStructure", "Dialog", 0));
        labelStructure->setText(QApplication::translate("chooseStructure", "Structure", 0));
        btnLowerC->setText(QApplication::translate("chooseStructure", "c", 0));
        btnUpperC->setText(QApplication::translate("chooseStructure", "C", 0));
        btnLowerV->setText(QApplication::translate("chooseStructure", "v", 0));
        btnUpperV->setText(QApplication::translate("chooseStructure", "V", 0));
    } // retranslateUi

};

namespace Ui {
    class chooseStructure: public Ui_chooseStructure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESTRUCTURE_H
