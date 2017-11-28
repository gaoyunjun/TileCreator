#include "tilecreator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TileCreator w;
	w.show();
	return a.exec();
}
