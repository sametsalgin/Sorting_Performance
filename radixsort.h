/*****************************************
* radixsort.h *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#pragma once
class radixsort
{
	long long int sayac = 0;
	long long int comparesayac = 0;
public:
	//yapici fonsiyon
	radixsort();
	//sayclara 0 atama fonksiyonu
	void setsayac();
	//radixsort siralama
	void radixsortsiralama(int [], int );
	//sayi siralama
	void sayisiralama(int [], int , int );
	//max sayi bulma
	int getmax(int [], int);
	// swap sayac dondurme  
	long long int getsayac();
	//compare sayac dondurme
	long long int getcomparesayac();
	//yikici fonksiyon
	~radixsort();
};

