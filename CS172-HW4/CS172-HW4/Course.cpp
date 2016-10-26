#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete [] students;
}

string Course::getCourseName() const
{
	return courseName;
}

string* Course::doubleCapacity(const string* list, int size)
{
	string* newList = new string[2 * size ];
	for (int i = 0; i < size; i++) {
		newList[i] = list[i];
	}
	delete [] list;

	return newList;
}

void Course::addStudent(const string& name)
{
	if(numberOfStudents >= capacity)
	{
		students = doubleCapacity(students, capacity);
	}
	students[numberOfStudents] = name;
		numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	for(int i = 0; i < numberOfStudents; i++)
		if (students[i] == name)
		{
			students[i] = "";
			numberOfStudents--;
		}

}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

void Course::clear() const
{
	for(int i = 0; i < numberOfStudents; i++)
		students[i] = "";
}