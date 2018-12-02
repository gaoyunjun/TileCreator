/********************************************************************************
** Form generated from reading UI file 'TileCreator.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILECREATOR_H
#define UI_TILECREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TileCreatorClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbTileCreator;
    QComboBox *cmbTileflag;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ptnres;
    QLineEdit *ledresfile;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *ledMaxlev;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *ptnobj_2;
    QComboBox *cmbext;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *ptnobj;
    QLineEdit *ledobjfile;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ptnbegin;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TileCreatorClass)
    {
        if (TileCreatorClass->objectName().isEmpty())
            TileCreatorClass->setObjectName(QStringLiteral("TileCreatorClass"));
        TileCreatorClass->resize(974, 826);
        centralWidget = new QWidget(TileCreatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmbTileCreator = new QComboBox(centralWidget);
        cmbTileCreator->setObjectName(QStringLiteral("cmbTileCreator"));

        horizontalLayout->addWidget(cmbTileCreator);

        cmbTileflag = new QComboBox(centralWidget);
        cmbTileflag->setObjectName(QStringLiteral("cmbTileflag"));

        horizontalLayout->addWidget(cmbTileflag);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ptnres = new QPushButton(centralWidget);
        ptnres->setObjectName(QStringLiteral("ptnres"));

        horizontalLayout_2->addWidget(ptnres);

        ledresfile = new QLineEdit(centralWidget);
        ledresfile->setObjectName(QStringLiteral("ledresfile"));

        horizontalLayout_2->addWidget(ledresfile);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        ledMaxlev = new QLineEdit(centralWidget);
        ledMaxlev->setObjectName(QStringLiteral("ledMaxlev"));

        horizontalLayout_4->addWidget(ledMaxlev);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        ptnobj_2 = new QPushButton(centralWidget);
        ptnobj_2->setObjectName(QStringLiteral("ptnobj_2"));

        horizontalLayout_7->addWidget(ptnobj_2);

        cmbext = new QComboBox(centralWidget);
        cmbext->setObjectName(QStringLiteral("cmbext"));

        horizontalLayout_7->addWidget(cmbext);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ptnobj = new QPushButton(centralWidget);
        ptnobj->setObjectName(QStringLiteral("ptnobj"));

        horizontalLayout_5->addWidget(ptnobj);

        ledobjfile = new QLineEdit(centralWidget);
        ledobjfile->setObjectName(QStringLiteral("ledobjfile"));

        horizontalLayout_5->addWidget(ledobjfile);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        ptnbegin = new QPushButton(centralWidget);
        ptnbegin->setObjectName(QStringLiteral("ptnbegin"));

        horizontalLayout_6->addWidget(ptnbegin);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 7, 0, 1, 1);

        TileCreatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TileCreatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 974, 26));
        TileCreatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TileCreatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TileCreatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TileCreatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TileCreatorClass->setStatusBar(statusBar);

        retranslateUi(TileCreatorClass);

        QMetaObject::connectSlotsByName(TileCreatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *TileCreatorClass)
    {
        TileCreatorClass->setWindowTitle(QApplication::translate("TileCreatorClass", "TileCreator", Q_NULLPTR));
        cmbTileCreator->clear();
        cmbTileCreator->insertItems(0, QStringList()
         << QApplication::translate("TileCreatorClass", "\345\275\261\345\203\217\345\210\207\347\211\207", Q_NULLPTR)
         << QApplication::translate("TileCreatorClass", "\351\253\230\347\250\213\345\210\207\347\211\207", Q_NULLPTR)
         << QApplication::translate("TileCreatorClass", "\347\237\242\351\207\217\345\210\207\347\211\207", Q_NULLPTR)
        );
        cmbTileflag->clear();
        cmbTileflag->insertItems(0, QStringList()
         << QApplication::translate("TileCreatorClass", "\345\215\225\344\270\252\346\226\207\344\273\266", Q_NULLPTR)
         << QApplication::translate("TileCreatorClass", "\345\244\232\344\270\252\346\226\207\344\273\266", Q_NULLPTR)
        );
        ptnres->setText(QApplication::translate("TileCreatorClass", "\345\216\237\345\247\213\346\225\260\346\215\256\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("TileCreatorClass", "\347\223\246\347\211\207\346\234\200\345\260\217\347\272\247\345\210\253\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("TileCreatorClass", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("TileCreatorClass", "\347\223\246\347\211\207\346\234\200\345\244\247\347\272\247\345\210\253\357\274\232", Q_NULLPTR));
        ptnobj_2->setText(QApplication::translate("TileCreatorClass", "\347\223\246\347\211\207\346\211\251\345\261\225\345\220\215\357\274\232", Q_NULLPTR));
        cmbext->clear();
        cmbext->insertItems(0, QStringList()
         << QApplication::translate("TileCreatorClass", "png", Q_NULLPTR)
         << QApplication::translate("TileCreatorClass", "tif", Q_NULLPTR)
         << QApplication::translate("TileCreatorClass", "json", Q_NULLPTR)
        );
        ptnobj->setText(QApplication::translate("TileCreatorClass", "\347\223\246\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        ptnbegin->setText(QApplication::translate("TileCreatorClass", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TileCreatorClass: public Ui_TileCreatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILECREATOR_H
