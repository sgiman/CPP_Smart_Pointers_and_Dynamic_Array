// ****************************** 
// utils.h
// —++ | Visual Studio 2019 
// ****************************** 
// Writing by sgiman @ 2022

#pragma once

#include <iostream>
#include <cmath>
#include <ctime>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

/*------------------
	   MyDate
-------------------*/

// For current Date
struct tm newtime;
__time32_t aclock;

void MyDate()
{
	// Time
	cout << "**************************************************************\n";
	time_t current_time;
	current_time = time(NULL);
	cout << current_time;
	cout << " seconds has passed since 00:00:00 GMT, Jan 1, 1970\n";

	// Current Date
	char buffer[32];
	errno_t errNum;
	_time32(&aclock);
	_localtime32_s(&newtime, &aclock);
	errNum = asctime_s(buffer, 32, &newtime);
	printf("Current date and time: %s", buffer);
	cout << "**************************************************************\n";
}


/***************************
 ѕ–ќ—“≈…Ў»… ”ћЌџ… ” ј«ј“≈Ћ№
****************************/
template <typename T>
class SmartPointer
{
public:
	SmartPointer(T* ptr)	// конструктор
	{
		this->ptr = ptr;	// запомнить прин¤тый адрес (указатель)
		cout << "=== Constructor (smart pointer) ===" << endl;

	}
	~SmartPointer()			// деструктор
	{
		delete ptr;			// освободить пам¤ть (при выходе из области видимости {} - функци¤/метод)
		cout << "=== Destructor (clear memory) ===" << endl;
	}

	T& operator *()			// ccылка (адрес) дл¤ указател¤ (дл¤ шаблона типов)
	{
		return *ptr;		// вернуть данные по указателю 
	}

private:
	T* ptr;					// обобщенный указатель
};
