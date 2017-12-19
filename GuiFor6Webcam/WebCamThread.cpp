#include "WebCamThread.h"

WebCamThread::WebCamThread(QObject *parent)
	: QObject(parent)
{
	mIsStopThread = false;
	mIsWebCamConnected = false;
}

WebCamThread::~WebCamThread()
{
	this->mIsStopThread = true;
}

void WebCamThread::RUNNING(QString name){
	/* Main Procesing */
	mIsStopThread = false;
	while (true){
		if (mIsStopThread == true) return;

		if (mIsWebCamConnected == true) {
			for (int id = 0; id < mNumberOfWebcam; id++) {
				cap[id] >> mFrame;
				if (!mFrame.empty()) {
					emit on_send_image(id, mFrame);
				}
				// wait
				cv::waitKey(30);
			}
			
		}
	}
}

void WebCamThread::openWebcam(){

	if (mNumberOfWebcam <= 0) return;

	for (int id = 0; id < mNumberOfWebcam; id++) {
		cap[id].open(id);
		if (!cap[id].isOpened()) {
			this->mIsWebCamConnected = false;
			break;
		}
	}
	
	this->mIsWebCamConnected = true;
}

void WebCamThread::setIndexWebcam(int _id){

	this->mIndex = _id;
}

void WebCamThread::setNumberOfwebcam(int _num){
	this->mNumberOfWebcam = _num;
}

void WebCamThread::stopWebcamThread(){
	this->mIsStopThread = true;
}
