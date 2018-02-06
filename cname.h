// =====================================================================
// File: cname.h
// =====================================================================

#ifndef CNAME_HEADER
#define CNAME_HEADER

#include <iostream>
#include <cstring>
using namepsace std;

// constants
const int NAMELEN = 256;

// class declaration
class CName
{
	public:
		CName();
		CName(const char* first, const char* last);
		void WriteFullName() const;
		friend istream& operator>>(istream &inStream, CName &rhs);
		friend ostream& operator<<(ostream &outStream, const CName &rhs);
		
	private:
		char m_first[NAMELEN];
		char m_last[NAMELEN];
};

#endif //CNAME_HEADER
