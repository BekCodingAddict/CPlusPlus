#include <iostream>

int yunion(int brithyear, int currentyear);

int main() {
	int brithyear, brithmonth, brithday, currentyear, currentmonth, currentday;
	int livetime, liveyear,livemonth, add_day;
	std::cout << "Enter your Birth dates (year\\month\\day) >>" << std::endl;
	std::cin >> brithyear >> brithmonth >> brithday;
	std::cout << "Enter Current dates (year\\monht\\day) >>" << std::endl;
	std::cin >> currentyear >> currentmonth >> currentday;

	liveyear = (currentyear-1)- brithyear; 
	livetime = liveyear * 365;
	livemonth = ((currentmonth - 1) * 30);
    livemonth+=(30*(12 - brithmonth));
	livetime +=(livemonth +currentday);
	add_day = yunion(brithyear, currentyear);
	livetime += add_day;

	std::cout << "Until now you lived " << livetime << "day!" << std::endl;

	return 0;
}

int yunion(int brithyear,int currentyear) {
	int addday = 0;
	for (int i = brithyear; i < currentyear; i++) {
		if ((brithyear % 4 == 0 && brithyear % 100 != 0) || brithyear % 400 == 0) {
			addday++;
		}
		brithyear++;
	}
	return addday;
}
