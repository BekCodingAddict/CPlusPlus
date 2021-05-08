#include <iostream>

int main() {
	//Bitwise test and
	int a = 2, b = 3, c;
	c = a & b; std::cout << "The Result of Bitwise And>>" << c << std::endl;
	//Bitwise test or 
	int a1 = 12, b1 = 7, c1;
	c1 = a | b; std::cout << "The Result of Bitwise Or>>" << c1 << std::endl;
	//Bitwise test Xor
	int a2 = 5, b2 = 6, c2;
	c2 = a2 ^ b2; std::cout << "The Result of Bitwise Xor>>" << c2 << std::endl;
	//Bitwise test ~ complement 
	int x = 5; std::cout << "The Result of Complement unary operator>>" << ~x << std::endl;
	//Right shift Operator test
	int x1 = 8, x2 = x1 >> 1; std::cout << "Rignh shirt operator>>" << x2 << std::endl;
	std::cin.get();
}