#include "Customer Rent.h"
#include <iostream>
#include <string>

using namespace std;

void CustomerRentDataStructure::rentVideo(int customer_id, int video_id[]) {
	//add to video id
	Node* nodePtr, * newNode;
	bool found = false;

	nodePtr = head;

	for (int x = 0; x < 10; x++) { //when customer id is found
		if (nodePtr->_id == customer_id) {
			found = true;
			break;
		}
		nodePtr = nodePtr->next;
	}

	if (found) { //if customer id not found
		for (int x = 0; x < 10; x++) {
			if (nodePtr->_videoID[x] != 0) {
				nodePtr->_videoID[x]++;
			}
		}
	}

	else {
		newNode = new Node;
		newNode->_id = customer_id;
		newNode->_videoID[9] = video_id[10];
		newNode->next = NULL;

		nodePtr = head;

		while (nodePtr) {
			nodePtr = nodePtr->next;
		}
		nodePtr = newNode;
	}
}


void CustomerRentDataStructure::returnVideo(int customer_id, int video_id[]) {
	//remove video id from list
	Node* nodePtr;
	bool found = false;

	nodePtr = head;

	for (int x = 0; x < 10; x++) {
		if (nodePtr->_id == customer_id) {
			found = true;
			nodePtr->_videoID[x]--;
			break;
		}
		nodePtr = nodePtr->next;
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
