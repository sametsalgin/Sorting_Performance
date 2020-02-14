/*****************************************
* bubblesort.h *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#pragma once
class bubblesort
{
	long long  int sayac = 0;
	long long int comparesayac = 0;

public:
	//yapici fonsiyon
	bubblesort();
	//bubble sort siralama
	void bubblesortsirala( int [], int);
	//swap sayac dondurme
	long long int getsayac();
	//compare sayac dondurme
	long long int getcomparesayac();
	//yikici fonsiyon
	~bubblesort();
};

