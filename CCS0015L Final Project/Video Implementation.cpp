#include <iostream>
#include "Video.h"
#include <string>
#include <iomanip>
#include <cstdlib>


using namespace std; 


void VideoDataStructure::insertVideo(int id, string title, string genre, string production, string filename, int copies)
{
	node* newNode, * nodePtr;

	newNode = new node;
	newNode->_id = id;
	newNode->_title = title;
	newNode->_production = production;
	newNode->_genre = genre; 
	newNode->_copies = copies;
	newNode->_filename = filename;
	newNode->next = NULL;

	if (!head)
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
		cout << " List is empty" << endl;
	}
	else {
		nodePtr = head; 
		while (nodePtr) {

			if (nodePtr->_id == _id) {
				found = true;
				break;
			}
			nodePtr = nodePtr->next;
		}
	}
	return found;
}

void VideoDataStructure::rentVideo(int id){
	node* nodePtr;

	if (!head) {
		cout << "Empty list" << endl;
	}
	else {
		nodePtr = head;
		while (nodePtr) {
			if (nodePtr->_id == id) {
				nodePtr->_copies--;
				break;
			}
			nodePtr->next;
		}
	}
}

void VideoDataStructure::returnVideo(int id){
	node* nodePtr;

	if (!head) {
		cout << "Empty list" << endl;
	}

	else {
		nodePtr = head;
		
		while (nodePtr) {
			if (nodePtr->_id == id) {
				nodePtr->_copies++;
				break;
			}
			nodePtr->next;
		}
	}
}

void VideoDataStructure::displayAllVideos()
{
	node* nodePtr; 
	char block = 254;

	if (!head)
	{
		cout << "The List is Empty" << endl; 
	}
	else
	{
		nodePtr = head;

		while (nodePtr)
		{
			for (int x = 0; x < 40; x++)
				cout << block;
			cout << endl;
			cout << "Video ID: " << nodePtr->_id << endl; 
			cout << "Title: " << nodePtr->_title << endl;
			cout << "Production: " << nodePtr->_production << endl;
			cout << "Genre: " << nodePtr->_genre << endl; 
			cout << "Copies in stock: " << nodePtr->_copies << endl; 
			cout << "Filename: " << nodePtr->_filename << endl; 
			for (int x = 0; x < 40; x++)
				cout << block;
			cout << endl;

			nodePtr = nodePtr->next;
		}
	}
}
