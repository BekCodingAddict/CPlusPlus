#include <iostream>
#include <string>
#include <conio.h>
#include "Pointer_Objects_and_virtual_Function.h"

#define Show(x) std::cout<<x<<std::endl;
#define Get(y) std::cin>>y;


int main() {
	//Demo dd("Otabek");
	//Demo* d = new Demo("Jaloli");
	//d = &dd;
	//d->Show_();
	/*Demo* ptr = new Demo[2];
	std::string a=ptr[0].Get_str() = "Otabek";
	std::string b=ptr[1].Get_str() = "Jaloli";
	std::cout <<(a==b)<< std::endl;
	Show(a) Show(b)
	delete[] ptr;*/

	//Demo obj1("C++");
	//Demo obj2("Java ");
	//Show(&obj1) Show(&obj2) // you can check here this pointer adress is the same
	//	// with object address

	////comparision
	//Demo obj3(9500.0);  Demo obj4(14000.0);
	//Demo obj5 = obj3.Compare(obj4);
	//float sal; sal = obj5.Get_Salary();
 //   std:: cout <<sal << std::endl;

	//490 page using virtual function with calss
	//Frist* ptr = new Frist;Frist f;
	//Second s;
	//ptr = &f;
	//ptr->show();
	//ptr = &s;
	//ptr->show();
	//Thrid t;
	//ptr = &t;
	//ptr->show();
	//Interface* ptri = new Thrid;
	//ptri->show();
	//delete ptr;

	//B b; C c;
	////A* a[] = { &b,&c };
	////a[0]->Print(); a[1]->Print();
	//A& a1 = b;
	//A& a2 = c;
	//a1.Print();
	//a2.Print();

	//A aa(10, 20);
	//B bb(10, 20, 30);
	//aa = bb;
	//aa(30, 20, 10);


	//frist fr; 
	//second sc;
	//sc.~second();
	//frist* ptr = new second;
	//second* prte = new frist; this is not allowed!
	//delete ptr;

	std::cin.get();
}