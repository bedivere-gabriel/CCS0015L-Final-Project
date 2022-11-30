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
	void insertVideo(int id, std::string title, std::string genre, std::string production, std::string filename, int copies);
	void rentVideo(int id);
	void returnVideo(int id);
	void showVideoDetails();
	void displayAllVideos(); //traversal
	int generateID();
	bool checkVideo(int _id);
};