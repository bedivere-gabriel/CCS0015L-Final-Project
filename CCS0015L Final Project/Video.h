#pragma once
#include <iostream>

using namespace std;

static int nextID = 0;

class Video_list {
private:
	struct node {
		/*
		* Attributes
		*/
		int _id;
		string _title;
		string _genre;
		string _production;
		int _noCopies;
		string _imageFileName;

		node* next;
	};
	node* head;
	int finalID;

public:
	Video_list() {
		head = NULL;
	}
	int generateID(); //auto generation of ID for Videos
	void insert(string title, string genre, string production, int noCopies, string imageFileName); //insert a new video
	void remove(string title); //renting a video via title
	void remove(int id); //renting a video via id
	void add(string title); //returning a video via title
	void add(int id); //returning a video via id
	void showDetails(int id); //show video details via id
	void showDetails(string title); //show video details via title
	void displayList(); //display the whole video list
	bool checkList(int id); //check if video exists in the list via id
	bool checkList(string title); //check if video exists in the list via title
	void displayVideo(int id, string title, string genre, string production, int noCopies, string imageFileName); //the display format
	~Video_list();
};