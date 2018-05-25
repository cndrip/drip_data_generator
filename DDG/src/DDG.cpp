#include <stdio.h>
#include "DDG.h"
#include "AfCd.h"

DDG::DDG(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	AfCd::cd();
	FILE *fp = fopen("123.txt", "wb");

	fwrite("hello", 1, 5, fp);
	fclose(fp);
	

}
