/*****************************************
* insertionsort.cpp *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#include "insertionsort.h"



insertionsort::insertionsort()
{
}
void insertionsort::insertionsortsiralama(int dizi[], int boyut)
{
		int  key, j;
		for (int i = 1; i < boyut; i++)
		{
			comparesayac++;
			key = dizi[i];
			j = i - 1;
			while (j >= 0 && dizi[j] > key)
			{
				comparesayac++;
				sayac++;
				dizi[j + 1] = dizi[j];
				j = j - 1;
			}
			dizi[j + 1] = key;
		}
}
long long int insertionsort::getsayac()
{
	return sayac;
}

long long int insertionsort::getcomparesayac()
{
	return comparesayac;
}
insertionsort::~insertionsort()
{
}
