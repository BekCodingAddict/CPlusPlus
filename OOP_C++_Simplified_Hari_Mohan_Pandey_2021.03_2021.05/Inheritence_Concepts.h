#pragma once
#include <iostream>
//demo single level inheritance
class Base {
	int num;
protected:
	std::string str1 = "C++ Programming!";
public:
	void input(int n) { num = n; }
	int& get_num() { return num; }
	void Show_data() { std::cout << "Num is class Base >>" << num << std::endl; }
	void Show_Base() { std::cout << "Hello from Base class" << "\n"; }
};

class Derived :public Base {
public:/*
	void Show_Base() {
		Base::Show_Base();
		std::cout << "Hello from Derivaed class!" << "\n"; }*/
};

class Derived1 :Base {
public:
	void Show_string() { std::cout << "Base class protected mode >>" << str1 
		<< std::endl; }
	void Show_dates() {
		input(5);
	std:: cout << "Num in class Derived is " << get_num() << std::endl;
	get_num() *= get_num();
	Show_data();
	}
};

//demo of using two level inheritance
class Frist {
	int num;
	std::string str = "C++ Programming!";
public:
	void Input_Data() { std::cout << "Enter the integer number >>"; std::cin >> num; }
	void Show_Dates() { std::cout << "Frist class str=" << str << std::endl; }
	int& get_num() { return num; }
};
class Second :public Frist {
	std::string str1 = "C++ is Awosome!";
public:

	virtual void Show_Dates() { std::cout << "Frist class str=" <<str1<< std::endl; }
};
class Thrid : public Second,public Derived1 {

};

class A {
protected:
	int num;
public:
	void Show_data() { std::cout << "num of the A class is >>" << num << std::endl; }
	int& get_num() { return num; }
};
class B {
protected:
	int num;
public:
	void Show_data() { std::cout << "num of the B class is >>" << num << std::endl; }
	int& get_num() { return num; }
};
class C :public A,public B{
	int num;
public:
	C(int a,int b,int c) {
		A::num = a;
		B::num = b;
		num = c;
	}
	void Show_data() { std::cout << "num of the C class is >>" << num << std::endl; }
	int& get_num() { return num; }
};

//using virual class 
class AA {
	std::string str = "C++ is Powerfull!";
public:
	void Show_str() { std::cout << " AA Class str>>" << str << std::endl; }
};
class BB :virtual public AA {

};
class CC :virtual public AA {

};
class DD :public BB, public CC {

};

//using destructor
class frist {
	std::string str;
public:
	frist(std::string s) :str(s) { std::cout << "frist class called!" << std::endl; }
	frist() { std::cout << "Hi from frist class!" << std::endl; }
	~frist() { std::cout << "Bye from frist class!" << std::endl; }
};
class second :public frist {
	std::string str;
	int num;
public:
	second(int data) : num(data) {
		std::cout <<
			"second class called!" << std::endl;
	}
	second() :frist() { std::cout << "Hi from second class!" << std::endl; }
    ~second() { std::cout << "Bye from second class!" << std::endl; }
	int& get_num() { return num; }
};
class thrid:public frist,public second{
	float money;
public:
	thrid(float m, std::string s, int n) :money(m), frist(s), second(n) {
		std::cout << "thrid class called!" << std::endl;
	}
};
/// this is cotainership has_a
class con {
	second sec;
public:
	int get_num() {
		return sec.get_num()=10;
	}
	void Show_d() { int r = get_num(); std::cout << "Result>>" << r; }
};








