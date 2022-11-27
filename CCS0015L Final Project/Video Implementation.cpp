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
	node* newNode, * nodePtr, * previousNode;
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

void VideoDataStructure::rentVideo(int id, int copies){
	node* nodePtr;
	nodePtr = head;

	if (!head) {
		cout << "Empty list" << endl;
	}

	else {
		while (nodePtr->next) {
			if (nodePtr->_id == id) {
				nodePtr->_copies--;
				copies--;
			}
			nodePtr->next;
		}
	}
}

void VideoDataStructure::returnVideo(int id, int copies){
	node* nodePtr;
	nodePtr = head;

	if (!head) {
		cout << "Empty list" << endl;
	}

	else {
		while (nodePtr->next) {
			if (nodePtr->_id == id) {
				nodePtr->_copies++;
				copies++;
			}
			nodePtr->next;
		}
	}
}

void VideoDataStructure::displayAllVideos(int id)
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
