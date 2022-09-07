#pragma once
#include <iostream>
#include"FileHandler.h"

class MenuHandler {
public:
	
	void MenuPrinter() {
		std::cout << "Welcome to my test task program!\n";
		std::cout << "The main goal to write my programm is to make time-report application\n";
		std::cout << "To continue press any key\n";
		std::getchar();
	}
	int UserChoiceController(){
		std::system("CLS");
		std::cout << "Now, choice one of four option - why are you here\n";
		std::cout << "\t1. Insert data into system \n";
		std::cout << "\t2. Make a  report for all workers in CSV file \n";
		std::cout << "\t3. Add information to the current file\n";
		short user_choice = 0;
		Reader r;
		std::cin >> user_choice;
			if (user_choice>0&&user_choice<4) {
		switch(user_choice)
		{

		case 1:
			std::cout << "Option 1 have been choosed succesfully choosed\n";
			r.Read();
		case 2:
			std::cout << "Option 2 have been choosed succesfully choosed\n";
			r.FileWriter();
		case 3:
			std::cout << "Option 3 have been choosed succesfully choosed\n";
			r.Read();
			}
		}
			else {
				std::system("CLS");
				std::cout << "Sorry, there`s no such option, try again";
				UserChoiceController();
			}
			return 0;
	}

};