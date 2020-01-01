/********************************************************************************
** Form generated from reading UI file 'tilecreator.ui'
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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TileCreatorClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbTileCreator;
    QComboBox *cmbTileflag;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ptnres;
    QLineEdit *ledresfile;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *xMinEdit;
    QLabel *label_5;
    QLineEdit *xMaxEdit;
    QLabel *label_6;
    QLineEdit *yMinEdit;
    QLabel *label_7;
    QLineEdit *yMaxEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *ledMaxlev;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ptnobj_2;
    QComboBox *cmbext;
    QPushButton *pushButton;
    QSpinBox *spinBox;
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
        TileCreatorClass->resize(560, 701);
        centralWidget = new QWidget(TileCreatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmbTileCreator = new QComboBox(centralWidget);
        cmbTileCreator->setObjectName(QStringLiteral("cmbTileCreator"));

        horizontalLayout->addWidget(cmbTileCreator);

        cmbTileflag = new QComboBox(centralWidget);
        cmbTileflag->setObjectName(QStringLiteral("cmbTileflag"));

        horizontalLayout->addWidget(cmbTileflag);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ptnres = new QPushButton(centralWidget);
        ptnres->setObjectName(QStringLiteral("ptnres"));

        horizontalLayout_2->addWidget(ptnres);

        ledresfile = new QLineEdit(centralWidget);
        ledresfile->setObjectName(QStringLiteral("ledresfile"));

        horizontalLayout_2->addWidget(ledresfile);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        xMinEdit = new QLineEdit(groupBox);
        xMinEdit->setObjectName(QStringLiteral("xMinEdit"));

        gridLayout->addWidget(xMinEdit, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 2);

        xMaxEdit = new QLineEdit(groupBox);
        xMaxEdit->setObjectName(QStringLiteral("xMaxEdit"));

        gridLayout->addWidget(xMaxEdit, 0, 4, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        yMinEdit = new QLineEdit(groupBox);
        yMinEdit->setObjectName(QStringLiteral("yMinEdit"));

        gridLayout->addWidget(yMinEdit, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        yMaxEdit = new QLineEdit(groupBox);
        yMaxEdit->setObjectName(QStringLiteral("yMaxEdit"));

        gridLayout->addWidget(yMaxEdit, 1, 3, 1, 2);


        verticalLayout->addWidget(groupBox);

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

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        ledMaxlev = new QLineEdit(centralWidget);
        ledMaxlev->setObjectName(QStringLiteral("ledMaxlev"));

        horizontalLayout_3->addWidget(ledMaxlev);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ptnobj_2 = new QPushButton(centralWidget);
        ptnobj_2->setObjectName(QStringLiteral("ptnobj_2"));

        horizontalLayout_4->addWidget(ptnobj_2);

        cmbext = new QComboBox(centralWidget);
        cmbext->setObjectName(QStringLiteral("cmbext"));

        horizontalLayout_4->addWidget(cmbext);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(20);

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ptnobj = new QPushButton(centralWidget);
        ptnobj->setObjectName(QStringLiteral("ptnobj"));

        horizontalLayout_5->addWidget(ptnobj);

        ledobjfile = new QLineEdit(centralWidget);
        ledobjfile->setObjectName(QStringLiteral("ledobjfile"));

        horizontalLayout_5->addWidget(ledobjfile);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        ptnbegin = new QPushButton(centralWidget);
        ptnbegin->setObjectName(QStringLiteral("ptnbegin"));

        horizontalLayout_6->addWidget(ptnbegin);

        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        TileCreatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TileCreatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 26));
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
        groupBox->setTitle(QApplication::translate("TileCreatorClass", "\350\214\203\345\233\264(\346\212\225\345\275\261\345\235\220\346\240\207\347\263\273\351\234\200\350\246\201\350\214\203\345\233\264)\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("TileCreatorClass", "xMin:", Q_NULLPTR));
        label_5->setText(QApplication::translate("TileCreatorClass", "xMax:", Q_NULLPTR));
        label_6->setText(QApplication::translate("TileCreatorClass", "yMin:", Q_NULLPTR));
        label_7->setText(QApplication::translate("TileCreatorClass", "yMax:", Q_NULLPTR));
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
        pushButton->setText(QApplication::translate("TileCreatorClass", "\347\272\277\347\250\213\346\225\260\357\274\232", Q_NULLPTR));
        ptnobj->setText(QApplication::translate("TileCreatorClass", "\347\223\246\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        ptnbegin->setText(QApplication::translate("TileCreatorClass", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TileCreatorClass: public Ui_TileCreatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILECREATOR_H
