#pragma once

#include <iostream>
#include <string>

class CustomerDataStructure {
protected:
	struct node {
		int _id;
		std::string _name, _address;
		node* next;
	};
	node* head;
public:
	CustomerDataStructure() {
		head = NULL;
	}
	void addCustomer();
	void showCustomerDetails();
	void displayAllCustomer();
	int generateID();
	bool checkCustomerID(int ID);
};