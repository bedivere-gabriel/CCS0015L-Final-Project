#include <iostream>
#include "Video.h"
#include <string>
#include <iomanip>
#include <cstdlib>


using namespace std; 

VideoDataStructure::VideoDataStructure()
{
	head = NULL;
}

void VideoDataStructure::insertVideo(int id, string title, string genre, string production, string filename, int copies)
{
	node* newNode, * nodePtr, * previousNode;
	newNode = new struct node;
	newNode->_id = id;
	newNode->_title = title;
	newNode->_production = production;
	newNode->_genre = genre; 
	newNode->_copies = copies;
	newNode->_filename = filename;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		nodePtr = head; 
		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;
		
	}
	cout << "Video insertion is successful" << endl;
}

bool VideoDataStructure::checkVideo(int _id) {
	bool found = false; 

	node* nodePtr; 

	if (!head) {
		cout << " Video already exist!" << endl;
	}
	else {
		nodePtr = head; 
		while (nodePtr) {

			if (nodePtr->_id = _id) {
				found = true;

				nodePtr = nodePtr->next;
			}
		}
	}
	return found;
}

void VideoDataStructure::rentVideo(int id){
	node* nodePtr;
	nodePtr = head;

	if (!head) {
		cout << "Empty list" << endl;
	}

	else {
		while (nodePtr->next) {
			if (nodePtr->_id == id) {
				nodePtr->_copies--;
			}
			nodePtr->next;
		}
	}
}

void VideoDataStructure::returnVideo(int id){
	node* nodePtr;
	nodePtr = head;

	if (!head) {
		cout << "Empty list" << endl;
	}

	else {
		while (nodePtr->next) {
			if (nodePtr->_id == id) {
				nodePtr->_copies++;
			}
			nodePtr->next;
		}
	}
}

void VideoDataStructure::displayAllVideos()
{
	node* nodePtr; 

	if (head == NULL)
	{
		cout << "The List is Empty" << endl; 
	}
	else
	{
		nodePtr = head;
		while (nodePtr)
		{
			if (nodePtr->_id == id)
			{
				cout << "Video ID: "; cout << nodePtr->_id; cout << endl; 
				cout << "Title: "; cout << nodePtr->_filename; cout << endl;
				cout << "Production: "; cout << nodePtr->_production; cout << endl;
				cout << "Genre: "; cout << nodePtr->_genre; cout << endl; 
				cout << "Copies in stock: " << nodePtr->_copies; cout << endl; 
				cout << "Filename: " << nodePtr->_filename; cout << endl; 
			}
			nodePtr = nodePtr->next;
		}
	}
}
