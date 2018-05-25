#include "DDG.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DDG w;
	w.show();
	return a.exec();
}
