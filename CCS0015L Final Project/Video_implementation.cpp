#include <iostream>
#include <ctime>
#include <string>
#include "Video.h"

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;

int Video_list::generateID() {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int currentYear = 1900 + ltm->tm_year;
	string prefixID = to_string(currentYear);
	string suffixID, conID;

	node* nodePtr;

	nodePtr = head;

	if (!nodePtr) {
		suffixID = to_string(++nextID);
		conID = prefixID + suffixID;
		finalID = stoi(conID);
	}

	else {
		while (nodePtr) {

			if (nodePtr->_id == finalID) {
				suffixID = to_string(++nextID);
				conID = prefixID + suffixID;
				finalID = stoi(conID);
				nodePtr = head;
			}

			nodePtr = nodePtr->next;
		}
	}

	return finalID;
}

void Video_list::insert(string title, string genre, string production, int noCopies, string imageFileName) {
	node* newNode, * nodePtr;

	newNode = new node;
	newNode->next = NULL;
	newNode->_id = generateID();
	newNode->_title = title;
	newNode->_genre = genre;
	newNode->_production = production;
	newNode->_noCopies = noCopies;
	newNode->_imageFileName = imageFileName;

	if (!head)
		head = newNode;
	else {
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
}

void Video_list::remove(string title) {
	/*
	* Removing a video via title
	*/
	node* nodePtr;

	nodePtr = head;

	while (nodePtr) {

		if (nodePtr->_title == title) {

			if (nodePtr->_noCopies == 0) {
				cout << "No more copies available" << endl;
				break;
			}

			else {
				nodePtr->_noCopies -= 1;
				break;
			}

		}

		nodePtr = nodePtr->next;

	}

}

void Video_list::remove(int id) {
	/*
	* Removing a video via id
	*/
	node* nodePtr;

	nodePtr = head;

	while (nodePtr) {

		if (nodePtr->_id == id) {

			if (nodePtr->_noCopies == 0) {
				cout << "No more copies available" << endl;
				break;
			}

			else {
				nodePtr->_noCopies -= 1;
				break;
			}

		}

		nodePtr = nodePtr->next;

	}
}

void Video_list::add(string title) {
	/*
	* Removing a video via title
	*/
	node* nodePtr;
	bool videoFound = false;

	nodePtr = head;

	while (nodePtr) {

		if (nodePtr->_title == title) {
			nodePtr->_noCopies += 1;
			videoFound = true;
			break;
		}

		nodePtr = nodePtr->next;

	}

	if (videoFound)
		cout << "Return Success" << endl;
	else
		cout << "Video not Found" << endl;
}

void Video_list::add(int id) {
	/*
	* Removing a video via id
	*/
	node* nodePtr;
	bool videoFound = false;

	nodePtr = head;

	while (nodePtr) {

		if (nodePtr->_id == id) {
			nodePtr->_noCopies += 1;
			videoFound = true;
			break;
		}

		nodePtr = nodePtr->next;

	}

	if (videoFound)
		cout << "Return Success" << endl;
	else
		cout << "Video not Found" << endl;
}

void Video_list::showDetails(string title) {
	node* nodePtr;

	nodePtr = head;

	while (nodePtr) {
		if (nodePtr->_title == title) {
			displayVideo(nodePtr->_id, nodePtr->_title, nodePtr->_genre, nodePtr->_production, nodePtr->_noCopies, nodePtr->_imageFileName);
		}
		nodePtr = nodePtr->next;
	}
}

void Video_list::showDetails(int id) {
	node* nodePtr;

	nodePtr = head;

	while (nodePtr) {
		if (nodePtr->_id == id) {
			displayVideo(nodePtr->_id, nodePtr->_title, nodePtr->_genre, nodePtr->_production, nodePtr->_noCopies, nodePtr->_imageFileName);
		}
		nodePtr = nodePtr->next;
	}
}

void Video_list::displayList() {
	node* nodePtr;

	nodePtr = head;

	while (nodePtr) {
		displayVideo(nodePtr->_id, nodePtr->_title, nodePtr->_genre, nodePtr->_production, nodePtr->_noCopies, nodePtr->_imageFileName);
		nodePtr = nodePtr->next;
	}
}

bool Video_list::checkList(int id) {
	//code here
	return true;
}

bool Video_list::checkList(string title) {
	//code here
	return true;
}

void Video_list::displayVideo(int id, string title, string genre, string production, int noCopies, string imageFileName) {
	cout << "=========================" << endl;
	cout << id << endl;
	cout << title << endl;
	cout << genre << endl;
	cout << production << endl;
	cout << noCopies << endl;
	cout << imageFileName << endl;
	cout << "=========================" << endl << endl;
}

Video_list::~Video_list() {
	//code here
}