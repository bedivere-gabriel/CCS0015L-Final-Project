#pragma once

#include <iostream>
#include <string>
#include "Customer.h"

class CustomerRentDataStructure : CustomerDataStructure {
private:
	struct Node{
		int _id;
		int _videoID[10];
		Node* next;
	};
	Node* head;

public:
	CustomerRentDataStructure() {
		head = NULL;
	}
	void rentVideo(int customer_id, int *video_id);
	void returnVideo(int customer_id, int *video_id);
	void showRentedVideoList(int customer_id);
};