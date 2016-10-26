//////////////////////////////
// Ian Fish
// CS172
///////////////////////////

#include<iostream>
#include "Course.h"
#include "Rectangle2D.h"
using namespace std;

//////////////////////////////////////////

// EX04_01
void array_size(int* size) {
	cout << "How many numbers will you enter? ";
	cin >> *size;
}

int * initialize_array(int size) {
	// Allocate
	int* pintarray = new int[size];
	// Initialize
	for (int i = 0; i < size; i++) 
		pintarray[i] = NULL;
	
	// Return pointer
	return pintarray;
}

void populate_array(int* numbers, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
}

double computeAvg(int* numbers, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += numbers[i];
	 }

	return total / size;
}

int computeAboveAvg(int* numbers, int size) {
	int aboveAvg = 0;
	for (int i = 0; i < size; i++) {
		if (numbers[i] > computeAvg(numbers, size))
			aboveAvg++;
	}

	return aboveAvg;
}

/////////////////////////////////////////////////////////

// EX04_02
int* doubleCapacity(const int* list, int size) {
	int* newList = new int[2 * size];
	for (int i = 0; i < size; i++) {
		newList[i] = list[i];
	}
	delete [] list;

	return newList;
}

/////////////////////////////////////////////////////

int main() {

	// EX04_01
	int num;

	array_size(&num);
	int* numbers = initialize_array(num);
	populate_array(numbers, num);
	
	cout << "The average of the entered numbers is " << computeAvg(numbers, num) << ".\n";
	cout << "There are " << computeAboveAvg(numbers, num) << " numbers above the average.\n";

	// EX04_02
	int list[] = {5, 2, 7, 3};

	doubleCapacity(list, 4);

	// EX04_03
	double x = 5.3;
	double y = 4.3;
	double width = 4.1;
	double height = 7.8;
	Rectangle2D r1(x, y, width, height);
	
	cout << "r1 area: " << r1.getArea() << endl;
	cout << "r1 perimeter: " << r1.getPerimeter() << endl;

	double x2 = 6.6;
	double y2 = 8.43;
	double w2 = 3.33333;
	double h2 = 4.0;
	Rectangle2D r2(x2, y2, w2, h2);

	cout << "r1 contains r2: " << r1.contains(r2) << endl;
	cout << "r1 overlaps r2: " << r1.overlaps(r2) << endl;

	// EX04_04
	Course c1("CS172", 30);
	c1.addStudent("Joe");
	c1.addStudent("Sue");
	c1.addStudent("Alex");
	c1.dropStudent("Alex");

	cout << c1.getStudents() << endl;
}