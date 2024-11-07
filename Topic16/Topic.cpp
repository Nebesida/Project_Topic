#include "Topic.h"

//конструкторы
Topic::Topic() {
	this->_courseName = "undefined";
	this->_topicName = "undefined";
	this->_lectsCount = 0;
	this->_tasksCount = 0;
	this->_topicSize = 0;
}

//список инициализации
Topic::Topic(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize) : 
	_courseName(correctAlpha(courseName)), _topicName(correctAlpha(topicName)), _lectsCount(correctCount(lectsCount)), 
	_tasksCount(correctCount(tasksCount)), _topicSize(correctCount(topicSize)) {}

//делегирование конструкторов
Topic::Topic(std::string courseName, std::string topicName, int lectsCount, int tasksCount) :
	Topic(courseName, topicName, lectsCount, tasksCount, 0) {}
Topic::Topic(std::string courseName, std::string topicName, int lectsCount) : Topic(courseName, topicName, lectsCount, 0, 0) {}
Topic::Topic(std::string courseName, std::string topicName) : Topic(courseName, topicName, 0, 0, 0) {}
Topic::Topic(std::string courseName) : Topic(courseName, "undefined", 0, 0, 0) {}

//деструктор
Topic::~Topic() {}

//перегруженные операторы
Topic Topic::operator++()
{
	++_topicSize;
	return *this;
}

Topic Topic::operator--()
{
	setlocale(LC_ALL, "");
	if (_topicSize > 0)
	{
		--_topicSize;
		return *this;
	}
	else
	{
		std::cout << "Количество страниц темы меньше 0!" << std::endl;
		return *this;
	}
}

Topic Topic::operator++(int)
{
	Topic t(*this);
	++(*this);
	return t;
}

Topic Topic::operator--(int)
{
	Topic t(*this);
	--(*this);
	return t;
}

bool Topic::operator< (Topic other)
{
	return this->_topicSize < other._topicSize;
}

bool Topic::operator> (Topic other)
{
	return this->_topicSize > other._topicSize;
}

std::ostream& operator<<(std::ostream& output, Topic t)
{
	setlocale(LC_ALL, "");
	output << "Название курса: " << t._courseName << std::endl
		<< "Название темы: " << t._topicName << std::endl
		<< "Количество лекций в теме: " << t._lectsCount << std::endl
		<< "Количество задач в теме: " << t._tasksCount << std::endl
		<< "Размер темы в страницах: " << t._topicSize << std::endl
		<< "_____________________________________________" << std::endl;
	return output;
}

//геттеры и сеттеры

void Topic::setCourseName(std::string courseName)
{
	this->_courseName = correctAlpha(courseName);
}

std::string Topic::getCourseName()
{
	return _courseName;
}

void Topic::setTopicName(std::string topicName)
{
	this->_topicName = correctAlpha(topicName);
}

std::string Topic::getTopicName()
{
	return _topicName;
}

void Topic::setLectsCount(int lectsCount)
{
	this->_lectsCount = correctCount(lectsCount);
}

int Topic::getLectsCount()
{
	return _lectsCount;
}

void Topic::setTasksCount(int tasksCount)
{
	this->_tasksCount = correctCount(tasksCount);
}

int Topic::getTasksCount()
{
	return _tasksCount;
}

void Topic::setTopicSize(int topicSize)
{
	this->_topicSize = correctCount(topicSize);
}

int Topic::getTopicSize()
{
	return _topicSize;
}

//методы

void Topic::displayTopic()
{
	setlocale(LC_ALL, "");
	std::cout << "Название курса: " << _courseName << std::endl;
	std::cout << "Название темы: " << _topicName << std::endl;
	std::cout << "Количество лекций в теме: " << _lectsCount << std::endl;
	std::cout << "Количество задач в теме: " << _tasksCount << std::endl;
	std::cout << "Размер темы в страницах: " << _topicSize << std::endl;
}