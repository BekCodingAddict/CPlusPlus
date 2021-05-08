#pragma once
#include <iostream>
#include <vector>
#include <string>
class Dictonary {
private:
	std::vector<std::string> words;
	std::vector<std::string> definateions;
	std::string word, defination;
	int size;
public:
	void ImputData() {
		std::cout << "Enter the How many do you want to input words>>";
		std::cin >> size;
		for (int i = 0; i<size; i++) {
			std::cout << i  << ") Enter word >> "; std::cin >> word; words.push_back(word);
		}
		for (int i = 0; i <size; i++) {
			std::cout << "Enter the " << words[i] << " defination >> "; std::getline(std::cin, defination);
			definateions.push_back(defination);
		}
	}
	void ShowData() {
		for (int i = 0;i<words.size(); i++) {
			std::cout << i << ") " << words[i] << "   ---------------->>  " << definateions[i] << std::endl;
		}
	}
};
