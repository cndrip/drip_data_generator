#include "About.h"

About::About(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(OnClosed()));
	
}

About::~About()
{
}
int About::OnClosed()
{
	reject();
	return 0;
}