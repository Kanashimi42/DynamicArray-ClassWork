#pragma once
#include "DynamicArray.h"



DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
void main()
{
	system("chcp 1251");
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();
	a.ReSize(10);
	a.Sort();
	a.Output();
	int search = 1;
	int searchRez = a.Search(search);
	if (searchRez != -1) {
		cout << "Element " << search << " found at " << searchRez + 1 << endl;
	}
	else {
		cout << "Element " << search << " not found!" << endl;
	}

	a.Reverse();
	a.Output();
	DynamicArray rezult = GetObj();

	system("pause");
}