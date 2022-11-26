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

	void insert(string _name, string _address) {
		node* newNode, * nodePtr;

		newNode = new node;
		newNode->next = NULL;
		newNode->name = _name;
		newNode->address = _address;

		if (!head) {
			newNode->ID = generateID();
			head = newNode;
		}
		else {
			nodePtr = head;
			int _ID = generateID() + 1;

			while (nodePtr->next) {
				_ID += 1;
				nodePtr = nodePtr->next;
			}

			newNode->ID = _ID;
			nodePtr->next = newNode;
		}
	};

	bool checkID(int membershipID) {
		node* nodePtr;
		nodePtr = head;
		bool exists = false;

		while (nodePtr) {
			if (nodePtr->ID == membershipID)
				exists = true;
			nodePtr = nodePtr->next;
		}

		return exists;
	}

	void display() {
		node* nodePtr;

		nodePtr = head;

		while (nodePtr) {
			cout << "Name: " << nodePtr->name << endl;
			cout << "Address: " << nodePtr->address << endl;
			cout << "ID: " << nodePtr->ID << endl;
			cout << " - - - - - - - - - - - - - - - - - - - " << endl;
			nodePtr = nodePtr->next;
			cout << endl;
		}
	}

	int generateID() {
		int ID;
			ID = 20221; //base ID
		return ID;
	}

};