#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output();// вывод на консоль
	int* GetPointer();
	int GetSize();

	//added
	void ReSize(int nsize);
	void Sort();
	int Search(int a);
	void Reverse();


	// реилизовать следующие методы
	//void ReSize(int size);// изменение размера массива
	//void Sort();// сортировка(любой алгоритм сортировки)
	//int Search(int a); // поиск элемента в массиве, возвращает индекс наиденного эл., либо -1.
	//void Reverse(); // перезаписывает последовательность элементов в обратном порядке, напрмер 12345 -> 54321



};

