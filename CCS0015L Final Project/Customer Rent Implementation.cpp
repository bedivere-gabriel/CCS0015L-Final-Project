#include "Customer Rent.h"
#include <iostream>
#include <string>

using namespace std;

void CustomerRentDataStructure::rentVideo(int customer_id, int *video_id) {
	Node* nodePtr, * newNode;
	bool found = false;
	int rentedVids = 0;

	nodePtr = head;

	for (int x = 0; x < 10; x++) {
		if (nodePtr->_id == customer_id) {
			found = true;
			break;
		}
		nodePtr = nodePtr->next;
	}

	if (found) {
		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				rentedVids++;
			}
		}

		if (rentedVids < 10) {
			for (int x = 0; x < 10; x++) {
				if (nodePtr->_videoID[x] == 0) {
					nodePtr->_videoID[x] = *video_id;
					break;
				}
			}
		}
	}

	else {
		newNode = new Node;
		newNode->_id = customer_id;
		newNode->_videoID[10] = *video_id;
		newNode->next = NULL;

		nodePtr = head;

		while (nodePtr) {
			nodePtr = nodePtr->next;
		}
		nodePtr = newNode;

		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				rentedVids++;
			}
		}

		if (rentedVids < 10) {
			for (int x = 0; x < 10; x++) {
				if (nodePtr->_videoID[x] == 0) {
					nodePtr->_videoID[x] = *video_id;
					break;
				}
			}
		}
	}
}


void CustomerRentDataStructure::returnVideo(int customer_id, int *video_id) {
	Node* nodePtr, * newNode;
	bool found = false;
	int returnedVids = 0;

	nodePtr = head;

	for (int x = 0; x < 10; x++) {
		if (nodePtr->_id == customer_id) {
			found = true;
			break;
		}
		nodePtr = nodePtr->next;
	}

	if (found) {
		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				returnedVids--;
			}
		}

		if (returnedVids < 10) {
			for (int x = 0; x < 10; x++) {
				if (nodePtr->_videoID[x] == 0) {
					nodePtr->_videoID[x] = *video_id;
					break;
				}
			}
		}
	}

	else {
		newNode = new Node;
		newNode->_id = customer_id;
		newNode->_videoID[10] = *video_id;
		newNode->next = NULL;

		nodePtr = head;

		while (nodePtr) {
			nodePtr = nodePtr->next;
		}
		nodePtr = newNode;

		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				returnedVids--;
			}
		}

		if (returnedVids < 10) {
			for (int x = 0; x < 10; x++) {
				if (nodePtr->_videoID[x] == 0) {
					nodePtr->_videoID[x] = *video_id;
					break;
				}
			}
		}
	}
}



void CustomerRentDataStructure::showRentedVideoList(int customer_id) {
	Node* nodePtr;

	if (head == NULL) {
		cout << "Empty list" << endl;
	}

	else {
		nodePtr = head;
		while (nodePtr) {
			if (nodePtr->_id = customer_id) {
				cout << nodePtr->_videoID;
			}
			nodePtr->next;
		}
	}
	//not sure yet here lmao
}
