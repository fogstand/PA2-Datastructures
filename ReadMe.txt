*******************************************************
* Name      : Ravisher Singh
* Student ID: 101844874
* Class     :  CSC 2421
* HW#       :  02
* Due Date  :  August 28, 2020
*******************************************************
Read Me

********************************************************

Description of the program

*******************************************************

The program  uses the findMax routine mentioned in main.cpp
and creates an array of Rectangle and finds the largest Rectangle
first on the basis of area and then on the basis of perimeter.
******************************************************** 
 Source files
*******************************************************
Name:  main.cpp
Main program. This file has generic FindMax function that  returns the Rectangle object in the array having maximum Area / Perimeter.
Name:  Rectangle.cpp
This file contains the defination of Rectangle class methods and constructors
Name: Rectangle.h
This file contains declaration of 1. Rectangle class 2.methods 3. Private members
Name: RectangleAreaComparator.h
Comparator class to compare the area.We need to tell the class only how to compare two Rectangle objects.
Name: RectanglePerimeterComparator.h
Comparator class to compare the Perimeter.We need to tell the class only how to compare two Rectangle objects.
********************************************************
  Circumstances of programs
*******************************************************
The program runs successfully.The program was developed and tested on gnu g++ 4.4.2.  It was compiled, run, and tested on gcc ouray.cudenver.edu.
********************************************************  
How to build and run the program
*******************************************************
1.  Uncompress the homework.  The homework file is compressed.To uncompress it use the following commands% unzip [1234HW1]
Now you should see a directory named homework with the files:
main.cpp
Rectangle.cpp
Rectangle.h
RectangleAreaComparator.h
RectanglePerimeterComparator.h
makefile
Readme.txt
2.  Build the program.
Change to the directory that contains the file by:% cd [SINGHRAVISHER_HW2]
Compile the program by:% make
3.  Run the program by:% ./[matrix]
4.  Delete the obj files, executables, and core dump by%./make clean