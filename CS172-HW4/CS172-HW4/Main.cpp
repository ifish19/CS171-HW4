//////////////////////////////
// Ian Fish
// CS172
///////////////////////////

#include<iostream>
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

}