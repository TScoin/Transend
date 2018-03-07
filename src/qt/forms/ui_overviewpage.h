/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QSpacerItem *verticalSpacer_4;
    QFrame *frameHodgepodge;
    QPushButton *runAutoDenom;
    QFrame *line;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5z;
    QGridLayout *gridLayout_3;
    QFrame *lineSpendableBalance_3;
    QFrame *lineWatchBalance_3;
    QLabel *labelzBalancez;
    QLabel *labelTotalz;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelTotalTextz;
    QLabel *labelBalanceTextz;
    QLabel *labelBalancez;
    QLabel *labelzBalanceTextz;
    QLabel *labelzTSCPercent;
    QLabel *label100Percent;
    QLabel *labelLockedBalance;
    QLabel *labelLockedBalanceText;
    QLabel *labelUnLockedBalanceText;
    QLabel *labelUnLockedBalance;
    QLabel *labelTSCPercent;
    QSpacerItem *verticalSpacer;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5z_3;
    QGridLayout *gridLayout_5;
    QLabel *labelzBalanceMatureText;
    QFrame *lineSpendableBalance_5;
    QLabel *labelzBalance;
    QFrame *lineWatchBalance_5;
    QLabel *labelzBalanceText;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelzBalanceMature;
    QLabel *labelzBalanceUnconfirmedText;
    QLabel *labelzBalanceUnconfirmed;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelzBalanceImmatureText;
    QLabel *labelzBalanceImmature;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 615);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        verticalLayout_2->addWidget(frame);

        frameHodgepodge = new QFrame(OverviewPage);
        frameHodgepodge->setObjectName(QStringLiteral("frameHodgepodge"));
        frameHodgepodge->setMinimumSize(QSize(0, 350));
        frameHodgepodge->setLayoutDirection(Qt::LeftToRight);
        frameHodgepodge->setFrameShape(QFrame::StyledPanel);
        frameHodgepodge->setFrameShadow(QFrame::Raised);
        runAutoDenom = new QPushButton(frameHodgepodge);
        runAutoDenom->setObjectName(QStringLiteral("runAutoDenom"));
        runAutoDenom->setGeometry(QRect(251, 17, 1, 1));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 238, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 246, 246, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 119, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 159, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        runAutoDenom->setPalette(palette);
        runAutoDenom->setFocusPolicy(Qt::NoFocus);
        runAutoDenom->setAutoFillBackground(true);
        runAutoDenom->setFlat(true);
        line = new QFrame(frameHodgepodge);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(7, 10, 451, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_3 = new QFrame(frameHodgepodge);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 150, 465, 201));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5z = new QLabel(frame_3);
        label_5z->setObjectName(QStringLiteral("label_5z"));
        label_5z->setMaximumSize(QSize(16777215, 20));
        label_5z->setFont(font);

        horizontalLayout_5->addWidget(label_5z);


        verticalLayout_5->addLayout(horizontalLayout_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineSpendableBalance_3 = new QFrame(frame_3);
        lineSpendableBalance_3->setObjectName(QStringLiteral("lineSpendableBalance_3"));
        lineSpendableBalance_3->setFrameShape(QFrame::HLine);
        lineSpendableBalance_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(lineSpendableBalance_3, 7, 0, 1, 2);

        lineWatchBalance_3 = new QFrame(frame_3);
        lineWatchBalance_3->setObjectName(QStringLiteral("lineWatchBalance_3"));
        sizePolicy.setHeightForWidth(lineWatchBalance_3->sizePolicy().hasHeightForWidth());
        lineWatchBalance_3->setSizePolicy(sizePolicy);
        lineWatchBalance_3->setMinimumSize(QSize(140, 0));
        lineWatchBalance_3->setFrameShape(QFrame::HLine);
        lineWatchBalance_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(lineWatchBalance_3, 7, 2, 1, 1);

        labelzBalancez = new QLabel(frame_3);
        labelzBalancez->setObjectName(QStringLiteral("labelzBalancez"));
        labelzBalancez->setFont(font);
        labelzBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelzBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelzBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelzBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelzBalancez, 4, 1, 1, 1);

        labelTotalz = new QLabel(frame_3);
        labelTotalz->setObjectName(QStringLiteral("labelTotalz"));
        labelTotalz->setFont(font);
        labelTotalz->setCursor(QCursor(Qt::IBeamCursor));
        labelTotalz->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelTotalz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotalz->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelTotalz, 6, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 4, 3, 1, 1);

        labelTotalTextz = new QLabel(frame_3);
        labelTotalTextz->setObjectName(QStringLiteral("labelTotalTextz"));

        gridLayout_3->addWidget(labelTotalTextz, 6, 0, 1, 1);

        labelBalanceTextz = new QLabel(frame_3);
        labelBalanceTextz->setObjectName(QStringLiteral("labelBalanceTextz"));

        gridLayout_3->addWidget(labelBalanceTextz, 1, 0, 1, 1);

        labelBalancez = new QLabel(frame_3);
        labelBalancez->setObjectName(QStringLiteral("labelBalancez"));
        labelBalancez->setFont(font);
        labelBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelBalancez, 1, 1, 1, 1);

        labelzBalanceTextz = new QLabel(frame_3);
        labelzBalanceTextz->setObjectName(QStringLiteral("labelzBalanceTextz"));

        gridLayout_3->addWidget(labelzBalanceTextz, 4, 0, 1, 1);

        labelzTSCPercent = new QLabel(frame_3);
        labelzTSCPercent->setObjectName(QStringLiteral("labelzTSCPercent"));
        labelzTSCPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelzTSCPercent, 4, 2, 1, 1);

        label100Percent = new QLabel(frame_3);
        label100Percent->setObjectName(QStringLiteral("label100Percent"));
        label100Percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label100Percent, 6, 2, 1, 1);

        labelLockedBalance = new QLabel(frame_3);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelLockedBalance, 2, 1, 1, 1);

        labelLockedBalanceText = new QLabel(frame_3);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));

        gridLayout_3->addWidget(labelLockedBalanceText, 2, 0, 1, 1);

        labelUnLockedBalanceText = new QLabel(frame_3);
        labelUnLockedBalanceText->setObjectName(QStringLiteral("labelUnLockedBalanceText"));

        gridLayout_3->addWidget(labelUnLockedBalanceText, 3, 0, 1, 1);

        labelUnLockedBalance = new QLabel(frame_3);
        labelUnLockedBalance->setObjectName(QStringLiteral("labelUnLockedBalance"));
        labelUnLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelUnLockedBalance, 3, 1, 1, 1);

        labelTSCPercent = new QLabel(frame_3);
        labelTSCPercent->setObjectName(QStringLiteral("labelTSCPercent"));
        labelTSCPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelTSCPercent, 3, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        frame_4 = new QFrame(frameHodgepodge);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 465, 171));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5z_3 = new QLabel(frame_4);
        label_5z_3->setObjectName(QStringLiteral("label_5z_3"));
        label_5z_3->setMaximumSize(QSize(16777215, 20));
        label_5z_3->setFont(font);

        horizontalLayout_8->addWidget(label_5z_3);


        verticalLayout_7->addLayout(horizontalLayout_8);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(12);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelzBalanceMatureText = new QLabel(frame_4);
        labelzBalanceMatureText->setObjectName(QStringLiteral("labelzBalanceMatureText"));

        gridLayout_5->addWidget(labelzBalanceMatureText, 4, 0, 1, 1);

        lineSpendableBalance_5 = new QFrame(frame_4);
        lineSpendableBalance_5->setObjectName(QStringLiteral("lineSpendableBalance_5"));
        lineSpendableBalance_5->setFrameShape(QFrame::HLine);
        lineSpendableBalance_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(lineSpendableBalance_5, 5, 0, 1, 2);

        labelzBalance = new QLabel(frame_4);
        labelzBalance->setObjectName(QStringLiteral("labelzBalance"));
        labelzBalance->setFont(font);
        labelzBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelzBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 TSC"));
        labelzBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelzBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(labelzBalance, 1, 1, 1, 1);

        lineWatchBalance_5 = new QFrame(frame_4);
        lineWatchBalance_5->setObjectName(QStringLiteral("lineWatchBalance_5"));
        sizePolicy.setHeightForWidth(lineWatchBalance_5->sizePolicy().hasHeightForWidth());
        lineWatchBalance_5->setSizePolicy(sizePolicy);
        lineWatchBalance_5->setMinimumSize(QSize(140, 0));
        lineWatchBalance_5->setFrameShape(QFrame::HLine);
        lineWatchBalance_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(lineWatchBalance_5, 5, 2, 1, 1);

        labelzBalanceText = new QLabel(frame_4);
        labelzBalanceText->setObjectName(QStringLiteral("labelzBalanceText"));

        gridLayout_5->addWidget(labelzBalanceText, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        labelzBalanceMature = new QLabel(frame_4);
        labelzBalanceMature->setObjectName(QStringLiteral("labelzBalanceMature"));
        labelzBalanceMature->setFont(font);
        labelzBalanceMature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelzBalanceMature, 4, 1, 1, 1);

        labelzBalanceUnconfirmedText = new QLabel(frame_4);
        labelzBalanceUnconfirmedText->setObjectName(QStringLiteral("labelzBalanceUnconfirmedText"));

        gridLayout_5->addWidget(labelzBalanceUnconfirmedText, 2, 0, 1, 1);

        labelzBalanceUnconfirmed = new QLabel(frame_4);
        labelzBalanceUnconfirmed->setObjectName(QStringLiteral("labelzBalanceUnconfirmed"));
        labelzBalanceUnconfirmed->setFont(font);
        labelzBalanceUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelzBalanceUnconfirmed, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        labelzBalanceImmatureText = new QLabel(frame_4);
        labelzBalanceImmatureText->setObjectName(QStringLiteral("labelzBalanceImmatureText"));

        gridLayout_5->addWidget(labelzBalanceImmatureText, 3, 0, 1, 1);

        labelzBalanceImmature = new QLabel(frame_4);
        labelzBalanceImmature->setObjectName(QStringLiteral("labelzBalanceImmature"));
        labelzBalanceImmature->setFont(font);
        labelzBalanceImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelzBalanceImmature, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 3, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_5);


        verticalLayout_2->addWidget(frameHodgepodge);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 75, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("OverviewPage", "TSC Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Transend network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        runAutoDenom->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_5z->setToolTip(QApplication::translate("OverviewPage", "Combined Balances (including unconfirmed and immature coins)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5z->setText(QApplication::translate("OverviewPage", "<html><head/><body><p>Combined Balances</p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalancez->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotalz->setToolTip(QApplication::translate("OverviewPage", "Total Balance, including unconfirmed and immature coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalTextz->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
        labelBalanceTextz->setText(QApplication::translate("OverviewPage", "TSC:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalancez->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceTextz->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelzBalanceTextz->setText(QApplication::translate("OverviewPage", "zTSC:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzTSCPercent->setToolTip(QApplication::translate("OverviewPage", "Current percentage of zTSC.\n"
"If AutoMint is enabled this percentage will settle around the configured AutoMint percentage (default = 10%)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzTSCPercent->setText(QApplication::translate("OverviewPage", "0 %", Q_NULLPTR));
        label100Percent->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked TSC or Masternode collaterals. These are excluded from zTSC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalance->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 TSC", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked TSC or Masternode collaterals. These are excluded from zTSC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Unlocked TSCs. These can be used for zTSC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUnLockedBalanceText->setText(QApplication::translate("OverviewPage", "Unlocked:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Unlocked TSCs. These can be used for zTSC minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUnLockedBalance->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 TSC", Q_NULLPTR));
        labelTSCPercent->setText(QApplication::translate("OverviewPage", "0 %", Q_NULLPTR));
        label_5z_3->setText(QApplication::translate("OverviewPage", "Zerocoin Balance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalanceMatureText->setToolTip(QApplication::translate("OverviewPage", "Mature: more than 20 confirmation and more than 3 mints of the same denomination after it was minted.\n"
"These zTSC are spendable.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceMatureText->setText(QApplication::translate("OverviewPage", "Mature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalance->setToolTip(QApplication::translate("OverviewPage", "All available zTSC, unconfirmed and immature zTSC included.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceText->setToolTip(QApplication::translate("OverviewPage", "All available zTSC, unconfirmed and immature zTSC included.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalanceMature->setToolTip(QApplication::translate("OverviewPage", "Mature: more than 20 confirmation and more than 3 mints of the same denomination after it was minted.\n"
"These zTSC are spendable.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceMature->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 TSC", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalanceUnconfirmedText->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 3 mints of the same denomination after it was minted", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceUnconfirmedText->setText(QApplication::translate("OverviewPage", "Unconfirmed:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalanceUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 3 mints of the same denomination after it was minted", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceUnconfirmed->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 TSC", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalanceImmatureText->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 3 mints of the same denomination after it was minted", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelzBalanceImmature->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 3 mints of the same denomination after it was minted", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelzBalanceImmature->setText(QApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100 TSC", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Transend network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
