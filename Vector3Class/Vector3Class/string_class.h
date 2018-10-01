#ifndef  _STRING_CLASS_
#define _STRING_CLASS_

class String
{
public:

	char* data;
	unsigned int lenght;
	
public:
	 // Constructors & Destructor
	String();
	String(char c);

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
	
};






#endif // ! _STRING_CLASS_

