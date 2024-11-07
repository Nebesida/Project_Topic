#include "Topic.h"
#include "CPP.h"
#include "Java.h"

int main()
{
	Java* sep = new Java("Java", "basic_construction", 10, 95, 342, "Spring");
	sep->displayCourse();
	anyTopic::displaySeparator();

	Java* oct = new Java("Java", "OOP", 30, 87, 342);
	oct->displayCourse();
	anyTopic::displaySeparator();

	Java* nov = new Java("Java", "STL", 30, 87);
	nov->displayCourse();
	anyTopic::displaySeparator();

	Java* dec = new Java("Java", "multithreading", 30);
	dec->displayCourse();
	anyTopic::displaySeparator();

	Java* jan = new Java("Java", "multithreading");
	jan->displayCourse();
	anyTopic::displaySeparator();

	Java* feb = new Java("Java");
	feb->displayCourse();
	anyTopic::displaySeparator();

	Java* mar = new Java();
	mar->displayCourse();
	anyTopic::displaySeparator();

	delete sep;
	delete oct;
	delete nov;
	delete dec;
	delete jan;
	delete feb;
	delete mar;

	return 0;
}