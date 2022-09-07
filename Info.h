#pragma once
#include <string>
#include <iostream>

  class  Info{
 public : 
	 void SetName() {
		 std::string Name;
		 std::cin >> Name;
		 name = Name;
	 }
	 void  SetSurname() {
		 std::string Surname;
		 std::cin >> Surname;
		 surname = Surname;
	 }
	 void SetDay( ) {
		 int Day;
		 std::cin >> Day;
		 if (Day > 0 && Day < 32) {
		 day = Day;
		 }
		 else {
			 std::cout << "There`s no such Day!!" << std::endl;
			 SetDay();
		 }
		 
	 }
	 void SetMonth(){
		 int Month;
		 std::cin >> Month;
		if(Month>0&&Month<13){
			month = Month;
		}
		else {
			std::cout << "There`s no such month!!" << std::endl;
			SetMonth();
		}
	 }
	 void SetYear(){
		 int Year;
		 std::cin >> Year;
		 year = Year;
	 }
	 void SetWorkingHours() {
		 int WorkingHours;
		 std::cin >> WorkingHours;
		 workingHours = WorkingHours;
	 }
	 std::string getName() {
		 return name;
	 }
	 std::string getSurname() {
		 return surname;
	 }
	int getDay() {
		 return day;
	 }
	int  getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}
	int getWorkingHours() {
		return workingHours;
	}

	 std::string getCurrentInfo() {
		 std::cout << name << std::endl;
		 std::cout << surname << std::endl;
		 std::cout << day << std::endl;
		 std::cout << month << std::endl;
		 std::cout << year << std::endl;
		 std::cout << workingHours << std::endl;
		 return "Good";
	 }
 private :
	 std::string name;
	 std::string surname;
	 int day;
	 int month;
	 int year;
	 int workingHours;
};