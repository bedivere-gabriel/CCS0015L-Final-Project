#include "Customer Rent.h"
#include <iostream>
#include <string>

using namespace std;

void CustomerRentDataStructure::rentVideo(int customer_id, int video_id) {
	if (!customer_id) {

	}
	else {
		
	}
}


void CustomerRentDataStructure::returnVideo(int customer_id, int video_id) {
	int x;
	for (x = 0; x < 10; x++) {
		if (customer_id == x) {
			
		}
	}
}



void CustomerRentDataStructure::showRentedVideoList(int customer_id) {
	Node* nodePtr;
	if (head == NULL) {
		cout << "ID doesn't exist";
	}
	else {
		nodePtr = head;
		while (nodePtr) {
			if (nodePtr->_id == customer_id) {
				//display info
			}
			nodePtr = nodePtr->next;
		}
	}
}
