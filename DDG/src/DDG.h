#pragma once

#include <QtWidgets/QWidget>
#include "ui_DDG.h"

class DDG : public QWidget
{
	Q_OBJECT

public:
	DDG(QWidget *parent = Q_NULLPTR);

private:
	Ui::DDGClass ui;
};
