#include "anyTopic.h"
#include <iostream>


std::string anyTopic::correctAlpha(std::string str)
{
	setlocale(LC_ALL, "");
	for (int i = 0; i < str.length(); ++i)
	{
		if (!isalpha(str.at(i)) && !ispunct(str.at(i)))
		{
			std::cout << "Некорректный ввод данных в поле" << std::endl
				<< "_____________" << std::endl;
			return "undefined";
		}
	}
	return (str == "undefined") ? "undefined" : str;
}

int anyTopic::correctCount(int count)
{
	setlocale(LC_ALL, "");
	if (count >= 0) return count;
	else
	{
		std::cout << "Некорректный ввод данных в поле" << std::endl << "_____________" << std::endl;
		return 0;
	}
}

void anyTopic::displaySeparator()
{
	std::cout << "___________________________________________" << std::endl;
}
