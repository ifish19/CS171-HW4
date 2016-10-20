#include<iostream>
using namespace std;

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

int main() {
	int num;

	array_size(&num);
	int* numbers = initialize_array(num);
	populate_array(numbers, num);
	
	cout << "The average of the entered numbers is " << computeAvg(numbers, num) << ".\n";
	cout << "There are " << computeAboveAvg(numbers, num) << " numbers above the average.\n";

}