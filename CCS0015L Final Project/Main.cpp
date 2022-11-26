#include <iostream>
#include "Video.h"
#include "Customer Rent.h"
#include "Customer.h"
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	//start of the program while running.
	Customer customer;

	bool running = true;
	int choice = 0;
	int membershipID = 0;
	bool session = false;
	string currentCustomer, currentAddress;
	int currentID;

	while (running) {
		system("cls");
		choice = 0;
		membershipID = 0;
		cout << "Do you have a membership?" << endl;
		cout << "[1] Yes" << endl << "[2] No" << endl;
		cin >> choice;

	start:
		system("cls");
		switch (choice) {
		case 1:
			cout << "Enter your membership ID: ";
			cin >> membershipID;
			if (customer.checkID(membershipID)) {
				session = true;
			}
			else {
				session = false;
				cout << "[1] Try Again" << endl << "[2] Become a Member" << endl;
				cin >> choice;
			}
			break;
		case 2:
			cin.ignore();
			cin.clear();
			string name, address;
			cout << "Enter your name: ";
			getline(cin, name);
			cout << "Enter your address: ";
			getline(cin, address);
			session = true;
			customer.insert(name, address);
			system("cls");
			cout << "Successfuly Created" << endl;
			system("pause");
			break;
			
		}
		if (session) {
		
		}
		else if (!session) {
			goto start;
		}
			
	}
}

/*
* 
* 	//insert(string title, string genre, string production, int noCopies, string imageFileName);

	Video_list obj;

	cout << "inserting videos" << endl;
	obj.insert("Harry Potter", "Sci-fi", "Warner Brothers", 5, "HarryPotter");
	obj.insert("The Longest Ride", "Romance", "Unknown", 3, "TheLongestRide");
	obj.insert("Star Wars", "Sci-fi", "Lucas Films", 6, "StarWars");
	obj.insert("Diary of a Wimpy Kid", "Comedy", "Warner Brothers", 6, "DiaryofaWimyKid");

	cout << "displaying the list" << endl;
	obj.displayList();

	cout << "show Details via id" << endl;
	obj.showDetails(20221);

	cout << "removing a video via id" << endl;
	obj.remove(20221);

	cout << "removing a video via title" << endl;
	obj.remove("Harry Potter");

	cout << "show Details via title" << endl;
	obj.showDetails("Harry Potter");
* 
* 
* 
*/