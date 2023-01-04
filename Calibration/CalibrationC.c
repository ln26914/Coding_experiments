// This file serves the same purpose as CalibrationCpp.cpp, except written in C.
// Work in progress!

/*****************************************
 * ************** WARNING ****************
 * *****  CONTAINS SYNTAX ERRORS!    *****
 * *****  DO NOT ATTEMPT TO COMPILE! *****
 * ***************************************/

/* 
This is the C version of the C++ Calibration. 

To do:
Learn how to get file input in C
Rewrite the string storage


*/



#include <stdio.h>
#include <cstring>

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
    printf("Enter the file to open: ");
    scanf(filename);

    printf("\n");

    ifstream fin(filename);


    // Check if the file opened
    if(fin.is_open()) {
        printf("File opened successfully! \n");
    } else {
        printf("Unable to open selected file. \n");
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
    printf("Total: %d", total);
    printf("Average: %f", average);
    printf("Maximum: %d", max);
    printf("Minimum: %d",min);

    printf("\n");

    fin.close();
}