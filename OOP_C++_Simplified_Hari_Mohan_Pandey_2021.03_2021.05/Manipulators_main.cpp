#include <iostream>
#include <iomanip>
#include "Manipulators.h"

//creating my own mainipulator
std::ostream& print(std::ostream& mycout) {
	mycout << "--->";
	return mycout;
}
std::ostream& new_line(std::ostream& mycout) {
	mycout << "\n"; 
	return mycout;
}
std::ostream& tab(std::ostream& mycout) {
	mycout << "\t"; 
	return mycout;
}

int main() {
	//usnig manipulator
   //using_setw_and_setfill();
	char str1[] = "Hello my name is Otabek";
	int len = strlen(str1);
	std::cout << std::setfill('$') << std::setw(30) << str1
		<< std::endl;
	Manipulators obj;
	//obj.cout_dec_oc_hex();
	//obj.cin_dec_oc_hex();

	
	std::cout <<print << "Hello" << std::endl;
	std::cout << "HI I'm learning c++ manipulator function!" << new_line << "";
	std::cout << "C++ is not easy to learn"<<tab<<" but It's so interesting!"
		<< new_line;
	return 0;
}