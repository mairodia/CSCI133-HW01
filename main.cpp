// ========================================================================
// File: main.cpp
// ========================================================================
// Programmer: Jennifer King
// Professor: Scott Edwards
// Class: CSCI 133F | T/R 9:30AM
// ========================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "cname.h"
using namespace std;
// == main ==================================================================
//
// ============================================================================
int     main()
{
	// test the constructors
	CName nameOne("Robert", "Bresson");
	const CName nameTwo = nameOne;
	CName nameThree;
	
	//display the contents of each newly-constructed object...
	//should see "Robert Bresson"
	cout << "nameOne = ";
	nameONe.WriteFullName();
	cout << endl;
	
	// should see "Robert Bresson" again
	cout << "nameTwo = ";
	nameTwo.WriteFullName();
	cout << endl;
	
	// should see nothing
	cout << "nameThree = ";
	nameThree.WriteFullName();
	cout << endl;
	
	// try the read function
	cout << "Enter a first name and a last name seperated by a space: ";
	cin >> nameThree;
	cout << "The name is: " << nameThree << endl << endl;
	
	//try the assignment operator
	nameOne = nameThree = nameTwol
	cout << "Testing the assignment operator..." << endl;
	cout << "nameOne == " << nameOne << endl;
	cout << "nameTwo == " << nameTwo << endl;
	cout << "namethree == " << nameThree << endl;
	
	// open the name data file	ifstream
	ifstream nameFile("names.dat);
	if (nameFile.fail())
	    {
		cerr << "Error opening the input file..." << endl;
        exit(EXIT_FAILURE);
        }
    	// use the object to display the contents of the name data file	cout << "Here are the contents of the name file: " << endl;	
		while (nameFile >> nameThree)
			{
			cout << nameThree << endl;
			}
		// close the file stream and return
		nameFile.close();
		return EXIT_SUCCESS;
}
// end of "main"
