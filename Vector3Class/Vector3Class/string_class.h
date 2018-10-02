#ifndef  _STRING_CLASS_
#define _STRING_CLASS_

#include <iostream>
#include <string>

class String
{
public:

	char* data = nullptr;
	unsigned int length;
	
public:
	 // Constructors & Destructor
	String();
	String(char c);
	String(const char* c);

	~String();

	// Operators

	String operator= (const String s);
	String operator+= (const String s);
	String operator-= (const String s);
	String operator+ (const String ls, const String rs) const;
	String operator- (const String ls, const String rs) const;
	bool operator== (const String ls, const String rs) const;
	bool operator< (const String ls, const String rs) const;
	bool operator> (const String ls, const String rs) const;
	bool operator<= (const String ls, const String rs) const;
	bool operator>= (const String ls, const String rs) const;
	char  operator[] (unsigned j) const; // Access String character.

	//METHODS

	unsigned len() const;
	
	
};

unsigned String::len() const
{
	return length;
}


// OPERATOR =


char String::operator[] (unsigned j) const
{
	if (j >= length) throw 1;
	return data[j];
}

String String::operator+= (const String s)
{

}


#endif // ! _STRING_CLASS_

