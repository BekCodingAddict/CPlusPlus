#pragma once
#include <iostream>
#define Show(x) std::cout<<x<<std::endl;
#define Get(x) std::cin>>x;
#define Endl std::cout<<std::endl;

class Base {
	int x, y;
protected:
	int num;
	int size;
	int arr[5];
	int arr2d[3][5];
	char str[10];
	//void input_data(int fx, int fy) {x = fx; y = fy;}
	//void show_data(){ Show(x) Show(y) }
};

class Factorial : public Base {
private:
	int factnum;
public:
	void GetFactorial() {
		short i; long int fact = 1;
		for (i = 1; i <= factnum; ++i) {
			fact = fact * i;
		}
		std::cout << "Factorial of " << factnum << " is " << fact << std::endl;
	}
};
//finding the reverse number 
class RevNumber : public Base {
private:
	int revnum;
public:
	void InputRevNum() {
		std::cout << "Enter the number for reverse>>" << std::endl;
		std::cin >>revnum;
	}
	int GetNum() { return revnum; }
	long int GetRevNum() {
		int save = revnum, r, rev = 0;
		while (save != 0) {
			r = save % 10;
			rev = rev * 10 + r;
			save = save / 10;
		}
		return rev;
	}
	void Display() {
		std::cout << "You Entered " << GetNum() << " number " <<
			" And Revers Number is >>" << GetRevNum() << std::endl;
	}
};
//Checking number is palindrome 
class Palindrome :public Base {
public:
	void InputNum() {
		std::cout << "Enter the Number for checking palindrome>>";
		std::cin >> num;
	}
	int GetNum() { return num; }
	int CheckPalin() {
		int save=num, r, rev = 0;
		while (save != 0) {
			r = save % 10;
			rev = rev * 10 + r;
			save = save / 10;
		}
		if (rev == num)
			return 1;
		else
			return 0;
	}
	void Display() {
		std::cout << "You entered " << GetNum() << " number and ";
		if (CheckPalin() == 1)
			std::cout << "This number is palindrome !!!" << std::endl;
		else 
			std::cout << "This number is not  palindrome !!!" << std::endl;
	}
};
//Checking number is Perfectness
class Perfectness :public Base {
public:
	void InputNum() {
		std::cout << "Enter the number for checking Perfectness>>";
		std::cin >> num;
	}
	void Check_Perf_Num() {
		if (num%2==0)
			std::cout << "Number " << num << " is Perfect number!" << std::endl;
		else
			std::cout << "Number " << num << " is  not  Perfect Number!" << std::endl;
	}
};
//Checking array is revers array or not
class ReverseArray : public Base {
private:
	int* arrp = nullptr; int size;
public:
	void InputData() {
		std::cout << "Enter array size>>"; std::cin >> size; arrp[size];
		for (int i = 0; i < size; i++) {
			std::cout << "Enter the number for array[ " << i << " ] index >>";
			std::cin >> num; arrp[i] = num;
		}
	}
	void ShowData(){ 
		for (int i = 0; i < size; i++)
			std::cout << arrp[i] << std::endl;
	}

};
//To check whether a  number is armstromng or not
#include <math.h>
class  Armstrong :public Base {
public:
	void InputNum() { std::cout << 
		"Enter number to check weather is armstrong or not>>"; Get(num) }
	void Check_Armstrong() {
		int save = num, count = 0, newnum = 0, remainder;
		//we can check the power of numthis way 
		while (num != 0) {
			num = num / 10;
			count++;
		}
		num = save;
		//we can identify the remainder of num and weather  armstrong or not
		while (save != 0) {
			remainder = save % 10;
			newnum = newnum + pow(remainder, count);
			save = save / 10;
		}
		if (newnum == num) 
			std::cout << "Number " << num << " is Armstrong! \n";
		else
			std::cout << "Number " << num << " is not Armstrong! \n";
	}
	// Develop this algoritm
	// write a code which can find every armstrong number 
	//inside index of  array from 100 to 10 000 
};
//Generation of Fibonaccin Series
class Fibonaccin : Base {
public:
	void Get_Size() { std::cout << 
		"Enter size of number of fibonaccin series can go>>"; Get(size)
	}
	void Start_Fibonaccin() {
		int sum, frist = 0, second = 1;
		std::cout << "Started Fibonaccin series on >> " << frist << " ";
		for (int i = 1; i <= size-2; i++) {
			sum = frist + second;
			frist = second;
			second = sum;
			std::cout << " ," << sum;
		}
		Endl
	}
};
//Sorting array elements using class object
class Array :public Base {
public:
	void InputIndex() {
		for (int i = 0; i < 5; i++) {
			std::cout << "Enter index for arr[" << i << "]  >>";
			Get(arr[i])
		}
	}
	void ShowData() {
		std::cout << "You entered these dates>>"<<std::endl;
		for (int x = 0; x < 5;x++) {
			std::cout << "arr[" << x
		<< "]=" << arr[x] << std::endl; } }

	void SortingArray() {

		int item;
		for (int i = 0; i < 5; i++) 
			for (int j = i + 1; j < 5; j++) 
				if (arr[i] > arr[j]) {
					item = arr[i];
					arr[i] = arr[j];
					arr[j] = item;
				}
		std::cout << "After the Task!" << std::endl;
		ShowData();
	}
	void Reversing_Array() {
		for (int i = 0; i < 5; i++) {
			for (int j = i+1; j < 5; j++) {
				this->arr[i] = this->arr[i] + this->arr[j];
				this->arr[j] = this->arr[i] - this->arr[j];
				this->arr[i] = this->arr[i] - this->arr[j];
			}
		}
		ShowData();
	}
};
//2d array 247 page
//sorting each of the row of 2D array with in class
class Sorting_2D_Array :public Base {
public:
	void ImputData() {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 5; j++) {
				std::cout << "Enter data for arr2d[" << i << "] [" << j << "] >>";
				Get(num) arr2d[i][j] = num;
			}
	}
	void ShowData() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				std::cout << "arr2d[" << i << "] [" << j << "]=" << arr2d[i][j] << "\t";
			}
			std::cout << "\n";
		}
	}
	void Sorting_2d_Array() {
		int i, j, k, t;
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 5; j++)
				for (k = j + 1; k < 2; k++)
					if (arr2d[i][j] > arr2d[i][k]) {
						t = arr2d[i][j];
						arr2d[i][j] = arr2d[i][k];
						arr2d[i][k] = t;
					}
		}
		std::cout << "After Sorthing!" << std::endl;
		ShowData();
	}

};
//String Class options with in class
class String : public Base {
#include <string.h>
#include <conio.h>
public:
	void InputString() {
		std::cout << "Enter some words>>"; std::cin.getline(str,10);
	}
	void find_Lenght() {
		int i = 0;
		while (str[i++] != 0)
			size = i;
	}
	void Show_String() {
		std::cout << "String>>" << str << std::endl;
		std::cout << "Lenght of String>>" <<size<< std::endl;
	}
	const char* Reverse_String() {
		int i, j; char *rev=new char[size-1];
		for (i = size - 1, j = 0; i >= 0&& j < size; i--,j++) {
			rev[j] = str[i];
		}
		return rev;
	}
	void Checking_Palindrome() {
		if (strcmp(Reverse_String(), str) == 0)
			std::cout << "String is Palindrome!" << std:: endl;
		else 
			std::cout << "String is not Palindrome!" << std:: endl;

	}

};