#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	for (auto s : listWebcam.List_of_Webcam_std) {
		s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
		addContacts(s);
	}

	this->numberOfWebcam = this->extractContacts("USB2.0");
	this->numberOfWebcam += this->extractContacts("Log");
	

}

void MainWindow::on_btn_run_clicked(void){
	/* Checking Module */
	qRegisterMetaType<cv::Mat>("cv::Mat");
	
		
		mThread.setNumberOfwebcam(this->numberOfWebcam);
		mThread.openWebcam();
		
		connect(&mThread, &WebCamThread::on_send_image, this, &MainWindow::RUN);
		connect(this, &MainWindow::on_stopThread, &mThread, &WebCamThread::stopWebcamThread);

		// Making new Thread
		QFuture<void> newThread = QtConcurrent::run(&this->mThread, &WebCamThread::RUNNING,QString("Thread1"));

}

void MainWindow::on_btn_stop_clicked(void){
	
	emit on_stopThread();

}

void MainWindow::RUN(int id,Mat frame){

	if (!frame.empty()) {

		switch (id)
		{
		case 0:
			ui.cam1->setImage(frame);
			break;
		case 1:
			ui.cam2->setImage(frame);
			break;

		case 2:
			ui.cam3->setImage(frame);
			break;
		case 3:
			ui.cam4->setImage(frame);
			break;
		case 4:
			ui.cam5->setImage(frame);
			break;
		case 5:
			ui.cam6->setImage(frame);
			break;
		default:
			break;
		}
	}
	
	
}


void MainWindow::addContacts(string contactName){
	for (size_t i = 0; i <= contactName.size(); i++) {
		string subStr = contactName.substr(0, i);
		if (contactMap.find(subStr) != contactMap.end()){// Existing Entry
			contactMap[subStr] +=1;
		}
		else {
			contactMap[subStr] = 1; // New Entry
		}
	}
}

int MainWindow::extractContacts(string contactName){
	
	if (contactMap.find(contactName) != contactMap.end()) {// Emtry found
		map<string, int>::iterator contactsIter = contactMap.find(contactName);

		return contactsIter->second;
	}
	else {
		return 0;
	}
}
