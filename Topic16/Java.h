#pragma once
#include "Topic.h"
class Java : public Topic
{
public:
	Java();
	Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, std::string frameworkName);
	Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize);
	Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount);
	Java(std::string courseName, std::string topicName, int lectsCount);
	Java(std::string courseName, std::string topicName);
	Java(std::string courseName);

	void setFrameworkName(std::string frameworkName);
	std::string getFrameworkName();

	void displayCourse();

private:
	std::string _frameworkName;
};