#pragma once

#include <QObject>
#include <QtCore>
#include <opencv2\opencv.hpp>

class WebCamThread : public QObject
{
	Q_OBJECT

public:
	WebCamThread(QObject *parent =0);
	~WebCamThread();

	void RUNNING(QString name);
	void openWebcam();
	void setIndexWebcam(int _id);
	void setNumberOfwebcam(int _num);
signals:
	void on_send_image(int id, cv::Mat _image);

public slots:
	void stopWebcamThread();

private:
	int mIndex = 0;
	int mNumberOfWebcam = 0;

	bool mIsStopThread;
	bool mIsWebCamConnected;
	cv::VideoCapture cap[10];
	cv::Mat mFrame;
};
