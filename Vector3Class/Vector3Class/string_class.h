#ifndef  _STRING_CLASS_
#define _STRING_CLASS_

#include <iostream>

class String
{
public:

	char* data;
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
String String::operator= (const String s)
{
	if (this == &s) return *this;

	delete data;
	length = s.len();
	data = new char[length];
	for (int j = 0; j < length; j++)
		data[j] = s[j];
	return *this;

}

char String::operator[] (unsigned j) const
{
	if (j >= length) throw 1;
	return data[j];
}


#endif // ! _STRING_CLASS_

