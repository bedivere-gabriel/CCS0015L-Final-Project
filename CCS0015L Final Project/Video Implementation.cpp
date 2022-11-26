#include <iostream>
#include "Video.h"
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std; 

VideoDataStructure::VideoDataStructure()
{
	if (head != NULL);
}

void VideoDataStructure::insertVideo(int id, string title, string genre, string production, string filename, int copies)
{
	struct node* newNode, * nodePtr, * previousNode;
	newNode = new struct node;
	newNode->_id = id;
	newNode->_copies = copies;
	newNode->_title = title;
	newNode->_genre = genre; 
	newNode->_production = production;
	newNode->_filename = filename;

	if (head)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else
	{
		nodePtr = head;
		previousNode = NULL;
		while (nodePtr != NULL && nodePtr->_id < id)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (previousNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr; 
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
	cout << "Video insertion is successful" << endl;
}

void VideoDataStructure::rentVideo(int id, int copies)
{
	struct node* nodePtr, * previousNode; 
	int found = 0; 

	if (!head)
	{
		cout << "The List is empty" << endl; 
		return;
	}
	if (head->_id == id)
	{
		head->_copies -= 1;
		if (head->_copies == 0)
		{
			nodePtr = head->next;
			delete head;
			head = nodePtr;
			found = 1;
		}
		found = 1;
	}
	else
	{
		nodePtr = head;
		previousNode = NULL; 
		while (nodePtr != NULL && nodePtr->_id != id)
		{
			previousNode = nodePtr; 
			nodePtr = nodePtr->next; 
		}
		if (nodePtr != NULL)
		{
			nodePtr->_copies -= 1; 
			found = 1; 
			cout << "Rent Successful" << endl; 
			if (nodePtr->_copies == 0)
			{
				previousNode->next = nodePtr->next;
				delete nodePtr; 
			}
		}
	}

	if (found == 0)
	{
		cout << "Rent Unsuccessful" << endl;
	}
}

void VideoDataStructure::returnVideo(int id)
{
	int added = 0; 
	struct node* newNode, * nodePtr;
	newNode = new struct node;
	newNode->_id = id;
	newNode->next = NULL; 

	if (!head)
	{
		head = newNode;
	}
	else
	{
		nodePtr = head;
		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
			if (nodePtr->_id = id)
			{
				nodePtr->_id += id;
				added = 1; 
				break;
			}
			if (added == 0)
			{
				nodePtr->next = newNode;
			}
		}
		cout << "Video returned successfully" << endl;
	}
}