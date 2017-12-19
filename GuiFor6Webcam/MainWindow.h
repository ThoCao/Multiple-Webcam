#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <qdatetime.h>
#include <QtConcurrent>
#include "opencv2\opencv.hpp"
#include "ListWebcam.h"
#include <map>
#include <algorithm>
#include "WebCamThread.h"

using namespace std;
using namespace cv;

#define NUMs 10;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

signals:
	void on_stopThread();
	
public slots:
	void on_btn_run_clicked(void);
	void on_btn_stop_clicked(void);


	void RUN(int id, cv:: Mat frame);
	
	
private:
	void addContacts(string contactName);
	int extractContacts(string contactName);
private:
	Ui::MainWindowClass ui;
	map<string, int> contactMap;
	ListWebcam listWebcam;
	
	int numberOfWebcam = 0;
	
	WebCamThread mThread;

};
