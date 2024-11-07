#pragma once
#include <iostream>
#include <string>
#include "anyTopic.h"

using namespace anyTopic;

class Topic
{
public:
	//конструкторы
	Topic();
	Topic(std::string courseName, std::string topicName, int lectsCount, int tasksCount, int topicSize);
	Topic(std::string courseName, std::string topicName, int lectsCount, int tasksCount);
	Topic(std::string courseName, std::string topicName, int lectsCount);
	Topic(std::string courseName, std::string topicName);
	Topic(std::string courseName);

	//деструктор
	~Topic();

	//перегруженные операторы
	Topic operator++();
	Topic operator--();

	Topic operator++(int);
	Topic operator--(int);

	bool operator< (Topic other);
	bool operator> (Topic other);

	friend std::ostream& operator<< (std::ostream& output, Topic t);

	//геттеры и сеттеры
	void setCourseName(std::string courseName);
	std::string getCourseName();
	void setTopicName(std::string topicName);
	std::string getTopicName();
	void setLectsCount(int lectsCount);
	int getLectsCount();
	void setTasksCount(int tasksCount);
	int getTasksCount();
	void setTopicSize(int topicSize);
	int getTopicSize();

	//методы
	void displayTopic();

private:
	//поля
	std::string _courseName;
	std::string _topicName;
	int _lectsCount;
	int _tasksCount;
	int _topicSize;
};