/*****************************************
* insertionsort.h *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#pragma once
class insertionsort
{
	long long int sayac = 0;
	long long int comparesayac = 0;
public:
	//yapici fonsiyon
	insertionsort();
	//insertion sort siralama
	void insertionsortsiralama(int [],int);
	//swap sayac dondurme
	long long int getsayac();
	//compare sayac dondurme
	long long int getcomparesayac();
	//yikici fonsiyon
	~insertionsort();
};

