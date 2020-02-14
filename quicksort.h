/*****************************************
* quicksort.h *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#pragma once
class quicksort
{
	long long int sayac = 0;
	long long int comparesayac = 0;
public:
	//yapici fonsiyon
	quicksort();
	//sayac 0 atama
	void setsayac();
	//quick sort siralama
	int quicksortsiralama(int dizi[], int, int);
	//swap sayac dondurme
	long long int getsayac();
	// compare sayac dodnurme
	long long int getcomparesayac();
	//yikici fonsiyon
	~quicksort();
};

