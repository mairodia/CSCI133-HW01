// ===========================================================================================
// File: cname.cpp (Spring 2018)
// ===========================================================================================
// Programmer: Jennifer King
// Professor: Scott Edwards
// Date: 2/5/2018
// Class: CSCI 133F | T/R 9:30AM
// Description:
// 		This program displays nameOne, nameTwo, and nameThree. It then recieves a name as
// 		input and displays that name. nameThree is assigned a value, and the contents of the
// 		name.dat file are displayed.
// ===========================================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <csting>
#include "cname.h"
using namespace std;

CName::CName() //constructor
{
	for(int i=0; i < NAMELEN; i++)
	{
		m_first[i] = '\0'
		m_last[i] = '\0'
	}
}

CName::CName(const char* first, const char* last) //constructor
{
	strcpy(m_first, first);
	strcpy(m_last, last);
}

// == WriteFullName =========================================================================
// This function outputs the first and last names.
//
// Input:
// 		N/A
//
// Output:
// 		void
// ==========================================================================================
void CName::WriteFullName() const
{
	for(int i=0; i < NAMELEN; i++)
	{
		cout << m_first[i];
	}
	cout << " ";
	for(int x=0; x < NAMELEN; x++)
	{
		cout << m_last[x];
	}
	cout << endl;
}
// == istream ==============================================================================
// Overloads the >> operator
//
// Input:
// 	inStream [IN/OUT] -- input stream
//	ths [IN] -- CName object
//
// Output:
//	inStream
// ==========================================================================================
istream& operator>>(istream &inStream, CName &rhs)
{
	inStream >> rhs.m_first >> rhs.m_last;
	return inStream;
}

// == ostream ===============================================================================
// Overloads the << operator
//
// Input:
//	outStream [IN/OUT] -- output stream
//	rhs [IN] -- CName object
//
// Output:
// 	outStream
// ==========================================================================================
ostream& operator<<(ostream &outStream, const CName &rhs)
{
	outStream << rhs.m_first << " " << rhs.m_last;
	return outStream;
}
