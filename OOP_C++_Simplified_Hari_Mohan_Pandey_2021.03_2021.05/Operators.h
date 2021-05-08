#ifndef Operators
#define Operators

#include <iostream>
#include <conio.h>
#include <string.h>

class Demo_opr {
	std::string str;
	int dx=0, dy = 0;
public:
	//Demo_opr(){}
	//overloading of function call() opreator
	void operator()(int, int);
};
void Demo_opr::operator()(int a,int b){
	dx = a; dy = b; 
	std::cout << "dx=" << dx << "\t" << "dy=" << dy;
}

//using type convension with class
//1) convention from built-in type to class type
class Type_con {
	int data = 0;
	char str[20];
public:
	Type_con(int x) {
		data = x;
		Show_Data();
	}
	Type_con(const char x[]) {
		strcpy_s(str, x);
	}
	int countV() {
		int i=0, count = 0; char ch;
		while (str[i] != 0) {
			ch = toupper(str[i]);
			switch (ch) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': count++;
			}
			i++;
		}
		return count;
	}
	void Show_Data() { std::cout << "data=" << data << std::endl; }
};

//float type convension
class Type_con_f {
	float num;
public:
	Type_con_f(float x) { num = x; }
	int Get_int() { return int(num); }
	float Real_Part() { return (num - (Get_int())); }
};

//Convention class to built in type 
class Type_con_class {
	int num;
public:
	Type_con_class(int x) { num = x; }
	operator int() { return num * num; }

};
//convension class to char type
class Class_to_char {
	int num;
public:
	Class_to_char(int n) { num = n; }
	operator char() {
		if (num < 0)
			return 'N';//N =Negative
		else if (num == 0)
			return 'Z';//z =Zero
		else return 'P';// P=positive
	}
};
//convension class to char string
class Class_to_char_str {
	char str[25];
public:
	Class_to_char_str() {
		std::cout << "Enter a string >>" << std::endl;
		std::cin.getline(str, 25);
	}
	operator char* () {
		static char s[25];
		strcpy_s(s, _strrev(str));
		return s;
	}
};

//type convension class to another 
class TC_Second;
class TC_Frist {
	int num = 0;
public:
	TC_Frist(){}
	TC_Frist(int x) { num = x; }
	//TC_Frist(TC_Second obj) { num = obj.Get_num() * obj.Get_num(); }
	int& Get_num() { return num;}
	void Show_Frist() { std::cout << "Frist_num=" << num << std::endl; }
};
class TC_Second{
	int S_num = 0;
public:
	TC_Second(){}
	TC_Second(int x) { S_num = x; }
	int& Get_num() { return S_num; }
	TC_Second(TC_Frist obj){ S_num = obj.Get_num() * obj.Get_num(); }
	operator TC_Frist() {
		TC_Frist temp;
		temp.Get_num() = S_num * S_num;
		return temp;
	}
	void Show_Second() { std::cout << "Second num=" << S_num << std::endl; }
};
class TC_Hour {
	unsigned int hour=0;
public:
	TC_Hour(){ }
	TC_Hour(unsigned int x) { hour = x; }
	int Get_hour() { return hour; }
	void Show_Hour() { std::cout << "Hour=" <<hour<< std::endl; }
};
class TC_Min_Sec {
	unsigned int sec=0, min = 0;
public:

	TC_Min_Sec(){}
	TC_Min_Sec(TC_Hour obj) {
		min = obj.Get_hour() * 60;
		sec = min * 60;
	}
	//int Get_hour() { TC_Hour obj; return obj.Get_hour(); }
	void Show_Data() {
		std::cout<<"Hour\\Min\\Sec"<<std::endl;
		std::cout <<":"<<min<<":"<<sec<< std::endl;
	}
};
#endif
