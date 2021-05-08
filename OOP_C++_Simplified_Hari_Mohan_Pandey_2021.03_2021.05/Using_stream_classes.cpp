#include <iostream>
#include <ios>
#include <iomanip>
#define Show(x) std::cout<<x<<std::endl;


int main() {

	//char x;  std::cin.get(x);
	//std::cout.put(x);
	//x = std::cin.get();
	////Show(x)

	//std::cin.getline(str, 20, '@').getline(str2, 15);
	//Show(str)Show(str2)
	//	std::cout.write(str, 5).write(str2, 8);

	//std::cin.putback(str[2]);
	//char s = std::cin.peek();
	//Show(s)
	//	std::cin.ignore(s);

	//Display_charact();
	

	//std::string str5 = "Hello c++";
	//std::cout.fill('3');
	//std::cout.width(10);
	//std::cout <<" HelloHey";
	//562 paje
	//using_put_back();
	/*char ch[] = "Hellooo hi";
	std::cout.fill('$');
	std::cout.setf(std::ios::right, std::ios::adjustfield);
	std::cout.width(10);
	std::cout <<ch<< std::endl;*/

	//usnig manipulator
	//using_setw_and_setfill();
	char str1[] = "Hello my name is Otabek";
	int len=strlen(str1);
	std::cout << std::setfill('$') << std::setw(30) << str1 
		<< std::endl;
	std::cin.get();
}