#include <iostream>
#include "Video.h"
#include <string>

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

	}
}