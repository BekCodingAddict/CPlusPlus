#ifndef HEAD.HH
#define HEAD.HH

#include <iostream>
#include <vector>
class Function {
private:
	std::vector<int> argm;

public:
	void MaxMinNum();
	int Factorial(int);
};


void Function::MaxMinNum() {
	int size, num = 0; int *max = 0,*min = 0;
	std::cout << "Enter array size>>" << std::endl;
	std::cin >> size;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter the number for array[" << i << "] index>>"
			<< std::endl;
		std::cin >> num; argm.push_back(num);
	}
	std::cout << "You entered these numbers>>";
	for (int x : argm) { std::cout << x << " ,"; } std::cout << "\n";
	for (int i = 0; i < size; i++) {
		max = &argm[0]; min =& argm[0];
		if (max < &argm[i]) {
			max = &argm[i];
		}if (min > &argm[i]) {
			min = &argm[i];
		}
	}
	std::cout << "Maximum number is >>" << max << " and Minimum number is >>"
		<< min << std::endl;
}

int Function::Factorial(int num) {
	return num < 1 ? 1 : num * Factorial((num - 1));
}





#endif