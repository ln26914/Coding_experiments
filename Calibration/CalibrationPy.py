# This file serves the same purpose as CalibrationCpp.cpp, except this one is written in python.

#Declare variables
large = 2147483647
small = -2147483647
average = 0.0
total = 0
max = small
min = large
raw_numbers = []
size = 0

filename = " "

print("Enter the file to open: ")
#filename = input() #input() returns a string
filename = "Data.dat"

fin = open(filename,"r")

print("Opened %s" % (filename,))

"""
Problems below:
"""

buf = fin.readline()
raw_numbers = buf.split(' ') #buf is now a list. Python lets the coder set one list to another's value

size = len(raw_numbers)

#Set every entry in numbers[] to be an integer instead of a string

numbers = [0] * size
numbers = list(map(int,raw_numbers)) #Converts raw_numbers (a string array) to integers and stores the result in numbers


#Find average and total
for i in numbers:
    total += i

average = float(total) / float(size)

#Find maximum/minimum
for i in numbers:
    if i > max:
        max = i
    if i < min:
        min = i

print("Total: %d" % (total,))
print("Average: %f" % (average,))
print("Maximum: %d" % (max,))
print("Minimum: %d" % (min,))

fin.close()