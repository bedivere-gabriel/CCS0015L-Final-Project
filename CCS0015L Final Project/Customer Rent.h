#pragma once
#include <iostream>
#include "Customer.h"

using namespace std;

class CustomerRent : Customer {
protected:
	struct node {
		int ID;
		string name;
		string address;
		int videoID;
		node* next;
	};
	node* head;

public:
	CustomerRent() {
		head = NULL;
	}

	void insert(int _ID, string _name, string _address, int _videoID) {
		node* newNode, * nodePtr;

		newNode = new node;
		newNode->next = NULL;
		newNode->ID = _ID;
		newNode->name = _name;
		newNode->address = _address;
		newNode->videoID = _videoID;

		if (!head)
			head = newNode;
		else {
			nodePtr = head;

			while (nodePtr->next)
				nodePtr = nodePtr->next;

			nodePtr->next = newNode;
		}
	};

	void display() {
		node* nodePtr;

		nodePtr = head;

		while (nodePtr) {
			cout << "Name: " << nodePtr->name << endl;
			cout << "Address: " << nodePtr->address << endl;
			cout << "video ID: " << nodePtr->videoID << endl;
			cout << " - - - - - - - - - - - - - - - - - - - " << endl;
			nodePtr = nodePtr->next;
		}
	};
};