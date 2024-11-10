#include "Java.h"

Java::Java()
{
	setCourseName("undefined");
	setTopicName("undefined");
	setLectsCount(0);
	setTasksCount(0);
	setTopicSize(0);
	this->_frameworkName = "undefined";
}
Java::Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, std::string frameworkName) :
	Topic(courseName, topicName, lectsCount, tasksCount, topicSize), _frameworkName(correctAlpha(frameworkName)) {}

Java::Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize) :
	Topic(courseName, topicName, lectsCount, tasksCount, topicSize), _frameworkName("undefined") {}
Java::Java(std::string courseName, std::string topicName, int lectsCount, int tasksCount) : 
	Topic(courseName, topicName, lectsCount, tasksCount, 0), _frameworkName("undefined") {}
Java::Java(std::string courseName, std::string topicName, int lectsCount) : 
	Topic(courseName, topicName, lectsCount, 0, 0), _frameworkName("undefined") {}
Java::Java(std::string courseName, std::string topicName) : Topic(courseName, topicName, 0, 0, 0), _frameworkName("undefined") {}
Java::Java(std::string courseName) : Topic(courseName, "undefined", 0, 0, 0), _frameworkName("undefined") {}

void Java::setFrameworkName(std::string frameworkName)
{
	this->_frameworkName = correctAlpha(frameworkName);
}

std::string Java::getFrameworkName()
{
	return _frameworkName;
}

void Java::displayCourse()
{
	setlocale(LC_ALL, "");
	Topic::displayTopic();
	std::cout << "Используемый фреймворк Java: " << _frameworkName << std::endl;
}
