/*****************************************
* radixsort.cpp *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#include "radixsort.h"
#include<iostream>
using namespace std;
radixsort::radixsort()
{
}
void radixsort::setsayac()
{
	sayac = 0;
	comparesayac = 0;
}
void radixsort::radixsortsiralama(int dizi[], int n)
{
	int m = getmax(dizi, n);
	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		comparesayac++;
		sayisiralama(dizi, n, exp);
	}
}
void radixsort::sayisiralama(int dizi[], int n, int exp)
{
	int *sonuc;
	sonuc = (int*)malloc(sizeof(int) * n);
	int i, count[10] = { 0 };
	for (i = 0; i < n; i++)
	{
		comparesayac++;
		count[(dizi[i] / exp) % 10]++;
	}
	for (i = 1; i < 10; i++)
	{
		comparesayac++;
		count[i] += count[i - 1];

	}
	for (i = n - 1; i >= 0; i--)
	{
		comparesayac++;
		sonuc[count[(dizi[i] / exp) % 10] - 1] = dizi[i];
		count[(dizi[i] / exp) % 10]--;
	}
	for (i = 0; i < n; i++)
	{
		comparesayac++;
		sayac++;
		dizi[i] = sonuc[i];
	}
}
int radixsort::getmax(int dizi[], int n)
{
	int max = dizi[0];
	for (int i = 1; i < n; i++)
	{
		comparesayac++;
		if (dizi[i] > max)// max degeri bublur
			max = dizi[i];//degiskene atar
	}
	return max;
}
long long int radixsort::getsayac()
{
	return sayac;
}
long long int radixsort::getcomparesayac()
{
	return comparesayac;
}
radixsort::~radixsort()
{
}
