#pragma once
#include <string>

namespace anyTopic
{
	enum themeSize
	{
		undefined = 0,
		basic_constructions = 342,
		OOP = 469,
		STL = 596,
		multithreading = 986
	};

	std::string correctAlpha(std::string str);
	int correctCount(int count);
	void displaySeparator();
}
