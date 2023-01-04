/*
This is the C++ Calibration project.
In it, I practice several coding fundamentals. It's a scale model for my future endeavors!
Fundamentals practiced:
Variable declaration / assignment
Swapping variable values
File input
Performing operations on variables
Console input and output
Typecasting

*/


//Published to GitHub!!!

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int LARGE = 2147483647;
const int SMALL = -2147483648;

int main() {
    int numbers[100];
    int size = 0;
    string filename;
    int total = 0;
    double average;
    int max = SMALL;
    int min = LARGE;


    // Select and open a file
    cout << "Enter the file to open: ";
    cin >> filename;

    cout << endl;

    ifstream fin(filename);


    // Check if the file opened
    if(fin.is_open()) {
        cout << "File opened successfully!" << endl;
    } else {
        cout << "Unable to open selected file." << endl;
        return 1;
    }

    // Coming soon: Write up to 100 numbers into the file using Srand()

    // Place numbers from the file into the array
    int i = 0;
    while(!fin.eof()) {
        fin >> numbers[i];
        size++;
        i++;
    }

    // Add up the numbers' total value
    for(int j = 0; j < size; j++) {
        total += numbers[j];
    }

    // Calculate average
    average = (double) total / (double) size;

    // Find minimum and maximum
    for(int j = 0; j < size; j++) {
        if(numbers[j] > max) {
            max = numbers[j];
        }
        if(numbers[j] < min) {
            min = numbers[j];
        }
    }

    // Output results
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    cout << endl;

    fin.close();
}