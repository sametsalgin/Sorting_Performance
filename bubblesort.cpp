/*****************************************
* bubblesort.cpp *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#include "bubblesort.h"
#include<iostream>
using namespace std;
bubblesort::bubblesort()
{
}
void bubblesort::bubblesortsirala(int dizi[], int boyut)
{
	int temp;
	sayac = 0;
	for (int i = 0; i < boyut - 1; i++)
	{
		comparesayac++;
		for (int j = 0; j < boyut - i - 1; j++)
		{
			comparesayac++;
			if (dizi[j] > dizi[j + 1])
			{
				sayac++;
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
			}
		}
	}
}

long long int bubblesort::getsayac()
{
	return sayac;
}
long long int bubblesort::getcomparesayac()
{
	return comparesayac;
}
bubblesort::~bubblesort()
{
}
