#include <iostream>
class demo {
public:
	int num = 0;
	float fnum = 0.0;
	std::string str = "";
	int max(int num1, int num2) { return num1 > num2 ? num1: num2; }
};
int main(int args, char** argv) {
	std::cout << "Hello";

	// use pointer with class member 
	int demo::* ptr = &demo::num; demo d; d.num = 30;
	float demo::* fptr = &demo::fnum; d.fnum = 3.14f;
	std::string demo::* pstr = &demo::str; d.str = "Hello C++ Programmming!";

	std::cout << "demo num>>" << d.num << "\n";
	std::cout << "demo fnum>>" << d.fnum << "\n";
	std::cout << "demo str>>" << d.str << "\n";
    //another way
	std::cout << "demo num>>" << (&d)->num << "\n";
	std::cout << "demo fnum>>" << (&d)->fnum << "\n";
	std::cout << "demo str>>" << (&d)->str << "\n";
	//pointer accses
	demo* cptr = new demo; cptr = &d;
	std::cout << "demo num>>" << cptr->num << "\n";
	std::cout << "demo num>>" << (*cptr).num << "\n";
	std::cout << "demo num>>" << (*cptr).*ptr << "\n";
	//pointer function acsses 
	int (demo:: * pmax)(int, int) = &demo::max;
	int result = (d.*pmax)(10, 20); std::cout << "Pointer function result>>" 
		<<result << "\n";

	std::cin.get();
	return 0;
}