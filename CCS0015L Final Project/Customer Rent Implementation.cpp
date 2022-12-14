#include "Customer Rent.h"
#include <iostream>
#include <string>

using namespace std;

void CustomerRentDataStructure::rentVideo(int customer_id, int video_id) {
	Node* nodePtr, * newNode;
	int counter = 0;
	bool found = false;

	if (!head) {
		newNode = new Node;
		newNode->_id = customer_id;
		newNode->next = NULL;
		head = newNode;
	}
	else {
		nodePtr = head;

		while (nodePtr) {
			if (nodePtr->_id == customer_id) {

			}
		}
	}








	for (int x = 0; x < 10; x++) { //when customer id is found
		if (nodePtr->_id == customer_id) {
			found = true;
			break;
		}
		nodePtr = nodePtr->next;
	}

	if (found = true) { 
		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				nodePtr->_videoID[x]++;
			}

			if (nodePtr->_videoID[x] < 10) {
				for (int n = 0; x < 10; x++) {
					if (nodePtr->_videoID[n] == 0) {
						nodePtr->_videoID[n] = video_id;
						break;
					}
				}
			}
		}
	}

	else { //if customer id not found
		newNode = new Node;
		newNode->_id = customer_id;
		newNode->next = NULL;

		nodePtr = head;

		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}
		nodePtr = newNode;

		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				nodePtr->_videoID[x]++;
			}

			if (nodePtr->_videoID[x] < 10) {
				for (int n = 0; x < 10; x++) {
					if (nodePtr->_videoID[n] == 0) {
						nodePtr->_videoID[n] = *video_id;
						break;
					}
				}
			}
		}

	}
}


void CustomerRentDataStructure::returnVideo(int customer_id, int video_id) {
	//remove video id from list
	Node* nodePtr;
	bool found = false;

	nodePtr = head;

	for (int x = 0; x < 10; x++) {
		if (nodePtr->_id == customer_id) {
			found = true;
			break;
		}
		nodePtr = nodePtr->next;
	}

	if (found = true) {
		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				nodePtr->_videoID[x]--;
			}

			if (nodePtr->_videoID[x] < 10) {
				for (int n = 0; x < 10; x++) {
					if (nodePtr->_videoID[n] == 0) {
						nodePtr->_videoID[n] = *video_id;
						break;
					}
				}
			}
		}
	}
}



void CustomerRentDataStructure::showRentedVideoList(int customer_id) {
	Node* nodePtr;
	nodePtr = head;

	if (head == NULL) {
		cout << "Empty list" << endl;
	}

	else {
		cout << nodePtr->_id << endl;
		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				cout << nodePtr->_videoID[x] << endl;
			}
		}
	}
}
