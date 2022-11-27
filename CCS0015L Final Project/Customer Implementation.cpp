#include <iostream>
#include "Customer.h"


void addCustomer()
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