#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
#include "Inheritence_Concepts.h"


#define Show(x) std::cout<<x<<std::endl;
#define Get(y) std::cin>>y;num)

int main() {
	//Base obj;
	//obj.Show_Base();
	/*Derived objd;
	objd.Show_Base();*/

	//Derived1 d1; d1.Show_string(); 
	//d1.Show_dates();
	//std::cin.get();

	//using two level inherotence obj
	/*Second objs; objs.Show_Dates(); Frist* objt = new Thrid; objt->Show_Dates();
	Frist f; f.Input_Data(); objs.Input_Data(); objt->Input_Data();
	bool bola = f.get_num() > objs.get_num() ? true : false;
	Show(bola) 
	Thrid t; t.Show_string();*/

	/*A a; B b; C c(10, 20, 30);
	a.Show_data();
	b.Show_data();
	c.Show_data();*/

	//using virtual class
	//DD d; d.Show_str();

	//using constructor inh. and destructor
	//second* sec = new second();
	thrid* thr = new thrid(3.14, "Hello Guys", 2021);
	//con c; c.get_num(); c.Show_d();
}