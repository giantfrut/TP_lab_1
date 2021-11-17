#include "helper.h"

bool checkStringToInt(std::string s)
{
	for (auto letter : s)
		if (letter < '0' || letter > '9')
			return false;
	return true;
}

bool isInt(const char ch) {
	return ch >= '0' && ch <= '9';
}

bool checkStringToLiveYears(std::string s) {
	return s.size() == 9 && isInt(s[0]) && isInt(s[1]) && isInt(s[2]) && isInt(s[3]) &&
		isInt(s[5]) && isInt(s[6]) && isInt(s[7]) && isInt(s[8]);
}

std::string inputLiveYears() {
	std::string years;
	while (true) {
		std::cin >> years;
		if (!checkStringToLiveYears(years))
			std::cout << "Неверный ввод.\nПовторите снова: " << std::endl;
		else
			return years;
	}
}