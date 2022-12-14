#include <iostream>
#include "Customer.h"
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std; 

CustomerDataStructure::CustomerDataStructure()
{
	head = NULL;
}

void CustomerDataStructure::addCustomer(int _id, string _name, string _address)
{
	node* newNode, *nodePtr;

	newNode = new node;
	newNode->_id = _id;  
	newNode->_name = _name;
	newNode->_address = _address;
	newNode->next = NULL;

	if (!head) {
		head = newNode;
	}
	else {
		nodePtr = head; 
		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode; 
	}


}

bool CustomerDataStructure::checkCustomerID(int ID) {
	bool found = false;

	node* nodePtr;

	if (!head) {
		std::cout << "Empty List" << std::endl;
	}
	else {
		nodePtr = head;
		while (nodePtr) {

			if (nodePtr->_id == ID)
				found = true;

			nodePtr = nodePtr->next;
		}
	}
	
	return found;
}