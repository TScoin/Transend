/********************************************************************************
** Form generated from reading UI file 'zxlrcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZXLRCONTROLDIALOG_H
#define UI_ZXLRCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZTSCControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZTSC;
    QLabel *labelZTSC_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZTSCControlDialog)
    {
        if (ZTSCControlDialog->objectName().isEmpty())
            ZTSCControlDialog->setObjectName(QStringLiteral("ZTSCControlDialog"));
        ZTSCControlDialog->resize(681, 384);
        ZTSCControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZTSCControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZTSCControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZTSCControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZTSC = new QLabel(ZTSCControlDialog);
        labelZTSC->setObjectName(QStringLiteral("labelZTSC"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZTSC);

        labelZTSC_int = new QLabel(ZTSCControlDialog);
        labelZTSC_int->setObjectName(QStringLiteral("labelZTSC_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZTSC_int);

        pushButtonAll = new QPushButton(ZTSCControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZTSCControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zTSC Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZTSCControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZTSCControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZTSCControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZTSCControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZTSCControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZTSCControlDialog)
    {
        ZTSCControlDialog->setWindowTitle(QApplication::translate("ZTSCControlDialog", "Select zTSC to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZTSCControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZTSCControlDialog", "0", Q_NULLPTR));
        labelZTSC->setText(QApplication::translate("ZTSCControlDialog", "zTSC", Q_NULLPTR));
        labelZTSC_int->setText(QApplication::translate("ZTSCControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZTSCControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZTSCControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZTSCControlDialog: public Ui_ZTSCControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZXLRCONTROLDIALOG_H
