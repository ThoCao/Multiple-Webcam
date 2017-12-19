#include "opencv2/opencv.hpp"
#include "ListWebcam.h"
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
using namespace cv;

map<string, int> contactMap;

void addContacts(string contactName) {
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


int extractContacts(string contactName) {

	if (contactMap.find(contactName) != contactMap.end()) {// Emtry found
		map<string, int>::iterator contactsIter = contactMap.find(contactName);

		return contactsIter->second;
	}
	else {
		return 0;
	}
}

#define _wait(ms) cv::waitKey(ms);
#define T 100

int main(int, char**)
{
	ListWebcam listWebcam;

	for (auto s : listWebcam.List_of_Webcam_std) {
		// add to distionary map
		cout << s << endl;
		s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
		addContacts(s);
	}

	// display number of USB 2
    int numberOfWebCam = extractContacts("USB2.0");
	
	cout <<"Number of USB 2: " <<numberOfWebCam<< endl;
	

	VideoCapture  cap[5];  // open the default camera

	
	// open web cam
	for (int id = 0; id < numberOfWebCam; id++) {
		cap[id].open(id);
	}

	for (int id = 0; id < numberOfWebCam; id++) {
		if (!cap[id].isOpened())  // check if we succeeded
			return -1;
	}
	for (;;)
	{

		for (int id = 0; id < numberOfWebCam; id++) {
			Mat frame;
			cap[id] >> frame; // get a new frame from camera
			cv::imshow("cam " + to_string(id + 1), frame);
		}
	
	int key = _wait(100);
	if (key == 'q') break;
	}
	

	
	
	return 0;
}