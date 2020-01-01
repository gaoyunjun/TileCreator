#include "tilecreator.h"
#include <QtWidgets/QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QDir::setCurrent(QCoreApplication::applicationDirPath());

	TileCreator w;
	w.show();
	return a.exec();
}
