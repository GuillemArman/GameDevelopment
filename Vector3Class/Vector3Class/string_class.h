#ifndef  _STRING_CLASS_
#define _STRING_CLASS_


#include <string>

class String
{
private:

	char* data = nullptr;
	unsigned int length = 0;
	
public:
	 // Constructors & Destructor
	String() {};
	String(const char* c) 
	{
		if (c != NULL)
		{
			length = strlen(c) + 1;
			data = new char[length];
			strcpy_s(data,length,c);
		}
	};

	String(const String &string)
	{
		if (string.data != NULL)
		{
			
			length = string.length;
			data = new char[length];
			strcpy_s(data, length, string.data);
		}

	}

	~String() 
	{
		if (data != NULL) 
		{
			delete[] data;
			length = 0;
		}
		
	};

	// Operators

	String operator= (const String &string);
	String operator+= (const String s);
	String operator-= (const String s);
//String operator+ (const String ls, const String rs) const;
//String operator- (const String ls, const String rs) const;
//bool operator== (const String ls, const String rs) const;
//bool operator< (const String ls, const String rs) const;
//bool operator> (const String ls, const String rs) const;
//bool operator<= (const String ls, const String rs) const;
//bool operator>= (const String ls, const String rs) const;
	char  operator[] (unsigned j) const; // Access String character.

	//METHODS

	unsigned len() const;
	unsigned size() const;
	
	
};

unsigned String::len() const
{
	return length;
}

unsigned String::size() const
{
	if (data != NULL)
	{
		return strlen(data);
	}
}




// OPERATOR =
String String::operator= (const String &string)
{

	delete[] data;
	if (string.len() != 0) {
		length = string.len();
		data = new char[length]; // no new
		for (int j = 0; j < length; j++)
			data[j] = string.data[j];
		return *this;
	}

}










String String::operator+= (const String s)
{

}


#endif // ! _STRING_CLASS_

