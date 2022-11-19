#pragma once
#include <iostream>

using namespace std;

class Customer {
protected:
	struct node {
		int ID;
		string name;
		string address;
		node* next;
		//node* left;
		//node* right;
	};
	node* head;
public:
	Customer() {
		head = NULL;
	}

	void insert(int _ID, string _name, string _address) {
		node* newNode, * nodePtr;

		newNode = new node;
		newNode->next = NULL;
		newNode->ID = _ID;
		newNode->name = _name;
		newNode->address = _address;

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
			cout << " - - - - - - - - - - - - - - - - - - - " << endl;
			nodePtr = nodePtr->next;
		}
	}

};