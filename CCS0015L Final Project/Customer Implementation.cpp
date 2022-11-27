#include <iostream>
#include "Customer.h"
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std; 

CustomerDataStructure::CustomerDataStructure()
{
	if (head != NULL);
}

void addCustomer(int _id, string _name, string _address)
{
	



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