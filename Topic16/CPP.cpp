#include "CPP.h"

CPP::CPP()
{
	setCourseName("undefined");
	setTopicName("undefined");
	setLectsCount(0);
	setTasksCount(0);
	setTopicSize(0);
	this->_standart = 0;
}

CPP::CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize, int standart) : 
	Topic(courseName, topicName, lectsCount, tasksCount, topicSize), _standart(correctCount(standart)) {}

CPP::CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize) :
	Topic(courseName, topicName, lectsCount, tasksCount, topicSize), _standart(0) {}
CPP::CPP(std::string courseName, std::string topicName, int lectsCount, int tasksCount) : 
	Topic(courseName, topicName, lectsCount, tasksCount, 0), _standart(0) {}
CPP::CPP(std::string courseName, std::string topicName, int lectsCount) : 
	Topic(courseName, topicName, lectsCount, 0, 0), _standart(0) {}
CPP::CPP(std::string courseName, std::string topicName) : 
	Topic(courseName, topicName, 0, 0, 0), _standart(0) {}
CPP::CPP(std::string courseName) : 
	Topic(courseName, "undefined", 0, 0, 0), _standart(0) {}

void CPP::setStandart(int standart)
{
	this->_standart = correctCount(standart);
}

int CPP::getStandart()
{
	return _standart;
}

void CPP::displayCourse()
{
	setlocale(LC_ALL, "");
	Topic::displayTopic();
	std::cout << "Используемый стандарт С++: " << _standart << std::endl;
}