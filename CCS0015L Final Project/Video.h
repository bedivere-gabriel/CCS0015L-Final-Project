#pragma once

#include <iostream>
#include <string>

class VideoDataStructure {
protected:
	struct node {
		int _id, _copies;
		std::string _title, _genre, _production, _filename;
		node* next;
	};
	node* head;
public:
	VideoDataStructure() {
		head = NULL;
	}
	void insertVideo();
	void rentVideo();
	void returnVideo();
	void showVideoDetails();
	void displayAllVideos();
	int generateID();
	bool checkVideo();
};