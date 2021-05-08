#pragma once

#include <iostream>
#include <iomanip>
class Manipulators {
public:
	void Display_charact() {
		for (char ch = 65; ch < 91; ch++) {
			std::cout << int(ch) << "-->";
			std::cout.put(ch); ch++; std::cout << "\t";
			std::cout << int(ch) << "-->";
			std::cout.put(ch) << std::endl;
		}
	}

	void using_put_back() {
		char ch;
		std::cout << "Enter a string>>"; ch = std::cin.get();
		while (ch != '\0') {
			if (ch == '$') {
				//std::cin.putback('&');
				std::cin.ignore(2, '$#');
				ch = std::cin.peek();
			}
			std::cout.put(ch);
			ch = std::cin.get();
		}
		std::cout << std::endl;

	}

	//using manipulator
	void using_setw_and_setfill() {
		std::cout << std::setw(5) << 345 << std::endl;
		std::cout << std::setw(5) << 45 << std::endl;
		std::cout << 5 << std::endl;
		std::cout << std::setfill('%') << std::setw(10) << "Hello"
			<< std::setw(10) << 345.567 << std::endl;
	}
	void cout_dec_oc_hex() {
		int dec, oc, hex;
		std::cout << "Enter decimal num>>"; std::cin >> dec;
		std::cout << "Enter octal number >>"; std::cin >> oc;
		std::cout << "Enter hexedecimal number>>"; std::cin >> hex;

		std::cout << "Decimal>>" << std::dec << dec << std::endl;
		std::cout << "Octal>>" << std::oct << oc << std::endl;
		std::cout << "Hexadecimal>>" << std::hex << hex << std::endl;
	}
	void cin_dec_oc_hex(){
		int dec;
		std::cout << "Enter decimal num>>"; std::cin >>std::hex>> dec;

		std::cout << "Decimal>>" << std::dec << dec << std::endl;
		std::cout << "Octal>>" << std::oct <<dec<< std::endl;
		std::cout << "Hexadecimal>>" << std::hex <<dec << std::endl;
	}
};
