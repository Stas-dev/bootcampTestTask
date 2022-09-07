#pragma once
#include <fstream>
#include <iostream>
#include "Info.h"
#include <vector>
#include <sstream>

class Reader {
public:
        Info a;
	void Read() {
		
        std::cout << "Name" << std::endl;
        a.SetName();
        std::cout << "Surname" << std::endl;
        a.SetSurname();
        std::cout << "Day" << std::endl;
        a.SetDay();
        std::cout << "Month" << std::endl;
        a.SetMonth();
        std::cout << "Year" << std::endl;
        a.SetYear();
        std::cout << "WorkingHours" << std::endl;
        a.SetWorkingHours();
        std::cout << "Information was succesfully added" << std::endl;

       

	}
    void FileWriter() {
        
        std::fstream fout;
        fout.open("reportcard.csv", std::ios::out | std::ios::app);
        fout << a.getName() << ", " << a.getSurname() << ", " << a.getYear() << ", " << a.getMonth() << ", " << a.getDay() << ", " << a.getWorkingHours() << "\n";
    }

};