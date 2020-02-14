/*****************************************
* quicksort.cpp *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#include "quicksort.h"
#include<iostream>
using namespace std;

quicksort::quicksort()
{
}
void quicksort::setsayac()
{
	sayac = 0;
	comparesayac = 0;
}
int quicksort::quicksortsiralama(int dizi[], int sol, int sag)
{
	int bas = sol, son = sag;
	int temp;
	int pivot = dizi[(sol + sag) / 2];
	while (bas <= son)
	{
		comparesayac++;
		while (dizi[bas] < pivot)
		{
			comparesayac++;
			bas++;
		}
		while (dizi[son] > pivot)
		{
			comparesayac++;
			son--;
		}
		if (bas <= son)
		{
			if (bas != son)
				sayac++;

			temp = dizi[bas];
			dizi[bas] = dizi[son];
			dizi[son] = temp;
			bas++;
			son--;
		}
	}
	if (sol < son)
		quicksortsiralama(dizi, sol, son);
	if (bas < sag)
		quicksortsiralama(dizi, bas, sag);
	return 0;
}
long long int quicksort::getsayac()
{
	return sayac;
}
long long int quicksort::getcomparesayac()
{
	return comparesayac;
}
quicksort::~quicksort()
{
}
