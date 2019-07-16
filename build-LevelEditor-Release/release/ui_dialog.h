/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGraphicsView *graphicsView;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *grassButton;
    QPushButton *rockButton;
    QPushButton *empty_tile;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *saveButton;
    QPushButton *openButton;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(740, 478);
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(350, 240, 21, 21));
        centralWidget = new QWidget(Dialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(60, 70, 621, 381));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 351, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(7);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        grassButton = new QPushButton(centralWidget);
        grassButton->setObjectName(QString::fromUtf8("grassButton"));
        grassButton->setGeometry(QRect(410, 70, 61, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-QSceneView-Desktop_Qt_5_13_0_MinGW_64_bit-Debug/img/grass_tile.png"), QSize(), QIcon::Normal, QIcon::Off);
        grassButton->setIcon(icon);
        grassButton->setIconSize(QSize(64, 64));
        grassButton->setAutoRepeat(false);
        rockButton = new QPushButton(centralWidget);
        rockButton->setObjectName(QString::fromUtf8("rockButton"));
        rockButton->setGeometry(QRect(500, 70, 61, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../build-QSceneView-Desktop_Qt_5_13_0_MinGW_64_bit-Debug/img/rock_tile.png"), QSize(), QIcon::Normal, QIcon::Off);
        rockButton->setIcon(icon1);
        rockButton->setIconSize(QSize(64, 64));
        empty_tile = new QPushButton(centralWidget);
        empty_tile->setObjectName(QString::fromUtf8("empty_tile"));
        empty_tile->setGeometry(QRect(410, 160, 61, 61));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../build-QSceneView-Desktop_Qt_5_13_0_MinGW_64_bit-Debug/img/empty_tile.png"), QSize(), QIcon::Normal, QIcon::Off);
        empty_tile->setIcon(icon2);
        empty_tile->setIconSize(QSize(64, 64));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 160, 61, 61));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(410, 250, 61, 61));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 250, 61, 61));
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(400, 330, 80, 25));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(490, 330, 80, 25));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 30, 231, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        grassButton->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        rockButton->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        empty_tile->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        saveButton->setText(QCoreApplication::translate("Dialog", "SAVE", nullptr));
        openButton->setText(QCoreApplication::translate("Dialog", "OPEN", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "LEVEL EDITOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
