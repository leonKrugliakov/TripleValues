//****************************************************************************************************
//
//      File:                TripleValues.h
//
//      Student:             Leon Krugliakov
//
//      Assignment:          Program #1 part 2
//
//      Course Name:         Data Structures I
//
//      Course Number:       COSC 3050 - 10
//
//      Due:                 August 31, 2020
//
//
//      This program creates objects with three member variables of the same data
//		types and then appleis different funtions on it. Such as summing up the
//		values or returning which value is the lowest one.
//
//      Other files required:
//		    1.    TripleValuesDriver.cpp - The main function as well as the display function.
//
//****************************************************************************************************

#ifndef TRIPLEVALUES_H
#define TRIPLEVALUES_H

//****************************************************************************************************

template <typename T>
class ThreeValues 
{
private:
	T val1,
		val2,
		val3;
public:
	ThreeValues();
	ThreeValues(const T& val1, const T& val2, const T& val3);
	void setFirst(const T& arg);
	void setSecond(const T& args);
	void setThird(const T& args);
	void const getAll(T & first, T & second, T & third);
	T const getMin();
	T const calcSum();
};

//****************************************************************************************************

template <typename T>
ThreeValues<T>::ThreeValues() 
{
	val1 = 0,
	val2 = 0,
	val3 = 0;
}

//****************************************************************************************************

template <typename T>
ThreeValues<T>::ThreeValues(const T& value1, const T& value2, const T& value3)
{
	this->val1 = value1,
	this->val2 = value2,
	this->val3 = value3;
}

//****************************************************************************************************

template <typename T>
void ThreeValues<T>::setFirst(const T& args) 
{
	val1 = args;
}

//****************************************************************************************************

template <typename T>
void ThreeValues<T>::setSecond(const T&  args) 
{
	this->val2 = args;
}

//****************************************************************************************************

template <typename T>
void ThreeValues<T>::setThird(const T&  args) 
{
	this->val3 = args;
}

//****************************************************************************************************

template <typename T>
void const ThreeValues<T>::getAll(T & first, T & second,T & third) 
{
	first = val1;
	second = val2;
	third = val3;
}

//****************************************************************************************************

template <typename T>
T const ThreeValues<T>::getMin() 
{
	T minimum;
	if (val1 <= val2 && val1 <= val3) 
	{
		minimum = val1;
	}
	else if (val2 <= val1 && val2 <= val3) 
	{
		minimum = val2;
	}
	else if (val3 <= val1 && val3 <= val2) 
	{
		minimum = val3;
	}
	return minimum;
}

//****************************************************************************************************

template <typename T>
T const ThreeValues<T>::calcSum() 
{
	T sum = val1 + val2 + val3;
	return sum;
}

//****************************************************************************************************

char const ThreeValues<char>::calcSum() 
{
	char sum = val1 + val2 + val3;
	return (char)sum;
}

//****************************************************************************************************

#endif
