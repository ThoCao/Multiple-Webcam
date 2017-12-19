#pragma once

#include <QDialog>
#include "ui_SingleCam.h"

class SingleCam : public QDialog
{
	Q_OBJECT

public:
	SingleCam(QWidget *parent = Q_NULLPTR);
	~SingleCam();

private:
	Ui::SingleCam ui;
};
