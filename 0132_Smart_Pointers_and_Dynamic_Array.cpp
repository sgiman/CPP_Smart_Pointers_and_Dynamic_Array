//**************************************************************************
// Динамический массив и умные указатели. | C++ для начинающих | Урок #132
// С++ | Visual Studio 2019 
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022 @ sgiman
//**************************************************************************

#include <iostream>
#include "utils.h" 

using namespace std;

/*--------------------------------
    smart poniters
    умные указатели на массив
---------------------------------*/

/*********************************
              M A I N
*********************************/
int main()
{
	setlocale(LC_ALL, "ru");

	int SIZE;
	cout << "Введите размер масcива: ";
	cin >> SIZE;
	
	// int *arr = new int[SIZE] { 1, 6, 44, 9, 8 };			// динамический массив с выделением динамической памяти 

	// shared_ptr<int[]> ptr(new int[SIZE] { 1, 6, 44, 9, 8 });	// умный указатель на дин. массив 
	
	shared_ptr<int[]> ptr(new int[SIZE] {});			// умный указатель на дин. массив 

	for (size_t i = 0; i < SIZE; i++)				// вывод дин. массива с умным указателем "shared_ptr"
	{
		ptr[i] = rand() % 100;					// random int: 1..100 ( постоянно одинаково без srand() ) 
		cout << " ptr[" << i << "]\t" << ptr[i] << endl;
	}

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
