#pragma once
#pragma once
#include<iostream> 
#include <conio.h>
class Object
{
public:
	char* data;
public:
	Object()
	{
		data = "";
	}
	Object(char* d)
	{
		data = d;
	}
	void setData(char *d)
	{
		data = d;
	}
	char* getData()
	{
		return data;
	}
	friend void operator >> (std::istream& input, Object& a)
	{
		input >> a.data;
	}
	friend std::ostream& operator << (std::ostream& out, Object& a)
	{
		out << a.data;
		return out;
	}

};