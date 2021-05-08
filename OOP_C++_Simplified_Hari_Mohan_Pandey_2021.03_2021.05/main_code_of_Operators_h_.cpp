#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Operators.h"
#define Show(x) std::cout<<x<<std::endl;
int main() {
	//built in type to class convention
	//Type_con_f obj = 45.56;
	//std::cout << "Integer part>>" << obj.Get_int() << std::endl;
	//std::cout << "Real part>>" << obj.Real_Part() << std::endl;

	//type convension class to built in type int
	//int n; std::cout<< "Enter integer>>"; std::cin >> n;
	//Type_con_class obj(n);
	//int newnum = obj;
	//std::cout << "convension result>>" << newnum << "\n";

    //Type convension class to char
	/*Class_to_char obj3(n);
	char ch = obj3;
	switch (ch) {
	case 'P':
		std::cout << "Positive number !" << std::endl; break;
	case 'N':
		std::cout << "Negative number !" << std::endl; break;
	case 'Z':
		std::cout << "Zero number !" << std::endl; break;
	}*/

	//type convension class to char string
	/*Class_to_char_str obj4;
	char* newstr = obj4;
	std::cout << "Restult newstr>>" << newstr << std::endl;*/
	//TC_Frist f(30); TC_Second s(20);
	//std::cout << "Before conversation!" << "\n";
	//f.Show_Frist(); s.Show_Second();
	//f = s;
	//std:: cout << "After the Conversation!" << "\n";
	//f.Show_Frist(); s.Show_Second();

    //using class type convension without operator function
	//TC_Second s1(20); TC_Frist f1(30);
	//std::cout << "Before conversation!" << "\n";
	//s1.Show_Second(); f1.Show_Frist();
	//s1 = f1;
	//std::cout << "After the Conversation!" << "\n";
 //   s1.Show_Second();  f1.Show_Frist();

	//Type conversion with class
	//TC_Hour hh(5);
	//TC_Min_Sec sm;
	//sm = hh;
	//hh.Show_Hour();
	//sm.Show_Data();

//exercises
#define Size 10
	class Base {
		char str[Size];
	public:
		void Imput() {
			std::cout << "Enter string>>"; std::cin >>str;
		}
		char* Get_str() {
			return str;
		}
		void Show_str() {
			std::cout << str << std::endl;
		}
		void operator==(Base& bb) {
			if (str == bb.Get_str())
				std::cout << "The same string !";
			else
				std::cout << "the diffrend string!";
		}
	};
	Base obj;
	obj.Imput();
	obj.Show_str();
	Base obj2;
	obj2.Imput();
	obj2.Show_str();
	obj == obj2;
	return 0;
}