#include <iostream>
#include "Video.h"
#include "Customer Rent.h"
#include "Customer.h"

using namespace std;

void mainMenu();
void customerMaintenanceMenu();




int main(int argc, char* argv[]) {

	
	VideoDataStructure videoObj;

	videoObj.insertVideo(123, "harry potter", "science fiction", "warner brothers", "hp.jpeg", 10);
	videoObj.insertVideo(124, "star wars", "science fiction", "lucas films", "sw.jpeg", 11);
	videoObj.insertVideo(125, "fairly odd parents", "cartoon", "nickelodeon", "fairly.jpeg", 12);
	videoObj.insertVideo(126, "amazing world of gumball", "cartoon", "cartoon network", "awg.jpeg", 13);
	videoObj.insertVideo(127, "phineas and ferb", "cartoon", "disney", "pf.jpeg", 14);
	videoObj.displayAllVideos();
	system("pause>0");
	system("cls");
	videoObj.rentVideo(123);
	videoObj.displayAllVideos();
	system("pause>0");
	system("cls");
	videoObj.returnVideo(123);
	videoObj.displayAllVideos();
	system("pause>0");

	//CustomerDataStructure customerObj;

	//customerObj.addCustomer(x, "John", "Bulacan");
	//customerObj.addCustomer(x, "Gab", "Manila");
	//customerObj.addCustomer(x, "Harv", "Manila Bay");
	//
	//20220003 ... 2022999


	/*bool running = true;
	int mainMenuChoice = 0, customerMaintenanceMenuChoice = 0;

	while (running) {
		mainMenu();
		cin >> mainMenuChoice;

		switch (mainMenuChoice) {

		case 1:
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			break;

		case 7:
			customerMaintenanceMenu();
			cin >> customerMaintenanceMenuChoice;

			switch (customerMaintenanceMenuChoice) {
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				default:
					break;
			}
			break;

		case 8:
			return 0;
			break;

		default:
			break;
		}
	}*/
	/*VideoDataStructure obj;
	obj.insertVideo(123, "HP", "dsgha", "hsadhas", "hjgdsh.png", 5);
	obj.insertVideo(124, "HP", "dsgha", "hsadhas", "hjgdsh.png", 5);
	obj.insertVideo(125, "HP", "dsgha", "hsadhas", "hjgdsh.png", 5);
	obj.insertVideo(126, "HP", "dsgha", "hsadhas", "hjgdsh.png", 5);
	obj.insertVideo(127, "HP", "dsgha", "hsadhas", "hjgdsh.png", 5);
	obj.displayAllVideos();
	cout << obj.checkVideo(128);*/
}

	

void mainMenu() {
	system("cls");
	cout << "[1] New Video" << endl;
	cout << "[2] Rent Video" << endl;
	cout << "[3] Return Video" << endl;
	cout << "[4] Show Video Details" << endl;
	cout << "[5] Display All Videos" << endl;
	cout << "[6] Check Video Avaiability" << endl;
	cout << "[7] Customer Maintenance" << endl;
	cout << "[8] Quit Program" << endl;
}

void customerMaintenanceMenu() {
	system("cls");
	cout << "[1] Add new Customer" << endl;
	cout << "[2] Show Customer Details" << endl;
	cout << "[3] List of Videos Rented by a customer" << endl;
	cout << "[4] Main Menu" << endl;
}