#ifndef TILECREATOR_H
#define TILECREATOR_H

#include <QtWidgets/QMainWindow>
#include "ui_tilecreator.h"

class TileCreator : public QMainWindow
{
	Q_OBJECT

public:
	TileCreator(QWidget *parent = 0);
	~TileCreator();
	void addSubFolderFileImages(const QString &path, QStringList &list);
public slots:
	void slotopenfile();
	void slotsavefile();
	void slotbeginceator();
protected:
	bool init();
	int makeTMS();
private:
	Ui::TileCreatorClass ui;
	QString resFile;
	QString objFile;
	QStringList    fileNameList;
};

#endif // TILECREATOR_H
