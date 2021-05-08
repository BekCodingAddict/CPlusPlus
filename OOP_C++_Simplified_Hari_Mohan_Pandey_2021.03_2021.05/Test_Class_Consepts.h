#pragma once
#include <iostream>
#include <conio.h>
#include <string>

//using as the member enum in class
class Myclass {
	std::string name, job;
	int age;
public:
	enum month { Jan=1,Fev,Mar,Apr,May,Jiun,Jiul,Aug,Sen,Oct,Nov,Dec};
	struct { std::string sname, sjob; int sage; }Data;
	void InputData(std::string name_, int age_, std::string job_) {
		name = name_; age = age_; job = job_;
	}
	void ShowData() {
		std::cout << "Name>>" << name << std::endl;
		std::cout << "Age>>" << age << std::endl;
		std::cout << "Job>>" << job << std::endl;
		//struct display
		std::cout << "Name>>" << Data.sname << std::endl;
		std::cout << "Age>>" << Data.sage << std::endl;
		std::cout << "Job>>" << Data.sjob << std::endl;
	}
	void Copy_To_Struct() {
		Data.sage = age;
		Data.sjob = job;
		Data.sname = name;
	}
};

class Time {
	int hour;
	int minute;
	int secunde;
public:
	void InputTime() {
		std::cout << "Enter the hour>>"; std::cin >> hour;
		std::cout << "Enter the minute >>"; std::cin >> minute;
		std::cout << "Enter the Secunde >>"; std::cin >> secunde;
		void Show_Time();
	}
	void Show_Time() {
		std::cout << "Hour>>"<< hour << std::endl;
		std::cout << "Minute >>"<<minute << std::endl;
		std::cout << "Secunde >>" << secunde << std::endl;
	}
	Time Sum_time(Time A,Time B){
		int hh, mm, ss;
		Time temp;
		ss = A.secunde + B.secunde;
		mm = A.minute + B.minute + ss / 60;
		hh = A.hour + B.hour + mm / 60;
		temp.secunde = ss %60;
		temp.minute = mm % 60;
		temp.hour = hh;
		return temp;
	}
};
class Data {
private:
	friend bool Greater(Data d1, Data d2);
	int age{ 0 }, salary{ 0 };
	std::string name;
public:
	 
	void Imput_Data() {
		std::cout << "Enter your name >>"; std::cin >> name;
		std::cout << "Enter your age >>"; std::cin >> age;
		std::cout << "Enter your salary >>"; std::cin >> salary;
	}
	void Show_Data() {
		std::cout << "Name >>"<<name<<std::endl;
		std::cout << "Age >>"<<age<<std::endl;
		std::cout << "Salary >>" << salary <<"$"<< std::endl;
	}
	


};

bool Greater(Data d1, Data d2) {
	return d1.salary > d2.salary ? true : false;
}
// frend class in another class 
class Data_of_Job {
	std::string job;
	friend Data;
	Data obj;
	public:
		void Imput_Job() {
			obj.Imput_Data();
			std::cout << "Enter your Job >>" << std::endl;
			std::cin >> job;
		}
		void Show_Job() {
			obj.Show_Data();
			std::cout << "Job >>" << job << std::endl;
		}
};






































//Find greator number 
//void Function::Greater(int& x, int& y) {
//	int result = x > y ? x : y;
//	std::cout << "Gtreater number is>>" << result<< std::endl;
//}


























//
//template<typename T> class print {
//public:
//	template<typename T>
//	void out(T item1, T item2, T item3, T item4, T item5,
//		T item6, T item7, T item8, T item9, T item10) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << "Parametr5>>" << item5 << "Parametr6>>" << item6 <<
//			"Parametr7>>" << item7 << "Parametr8>>" << item8 << "Parametr9>>" << item9 <<
//			"Parametr10" >> item10 << std::endl;
//	}template<typename T>
//		void out(T item1, T item2, T item3, T item4, T item5,
//			T item6, T item7, T item8, T item9) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << "Parametr5>>" << item5 << "Parametr6>>" << item6 <<
//			"Parametr7>>" << item7 << "Parametr8>>" << item8 << "Parametr9>>" << item9 << std::endl;
//	}template<typename T>
//		void out(T item1, T item2, T item3, T item4, T item5,
//			T item6, T item7, T item8) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << "Parametr5>>" << item5 << "Parametr6>>" << item6 <<
//			"Parametr7>>" << item7 << "Parametr8>>" << item8 << std::endl;
//	}template<typename T>
//		void out(T item1, T item2, T item3, T item4, T item5,
//			T item6, T item7) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << "Parametr5>>" << item5 << "Parametr6>>" << item6 <<
//			"Parametr7>>" << item7 << std::endl;
//	}
//	template<typename T>
//	void out(T item1, T item2, T item3, T item4, T item5,
//		T item6) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << "Parametr5>>" << item5 << "Parametr6>>" << item6 << std::endl;
//	}template<typename T>
//		void out(T item1, T item2, T item3, T item4, T item5) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << "Parametr5>>" << item5 << std::endl;
//	}
//	template<typename T>
//	void out(T item1, T item2, T item3, T item4) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << "Parametr3>>" <<
//			"Parametr4>>" << item4 << std::endl;
//	}
//	template<typename T>
//	void out(T item1, T item2, T item3) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 <<
//			"Parametr3>>" << std::endl;
//	}
//	template<typename T>
//	void out(T item1, T item2) {
//		std::cout << "Parametr1>>" << item1 << "Parametr2" << item2 << std::endl;
//	}
//	template<typename T>
//	void out(T item1) {
//		std::cout << "Parametr1>>" << item1 << std::endl;
//	}
//};
//typedef class print;
