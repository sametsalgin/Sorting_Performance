/*****************************************
* Main1.cpp *
*****************************************
* IDE : Visual Studio 2017 *
* Author : Samet SALGIN -152120151070*
* Experiment 7: –Siralama Algoritmalari  *
*created on =23 ARALIK 2018 *
*****************************************/
#include<iostream>
#include<iomanip>
#include<time.h>
#include"bubblesort.h"
#include"insertionsort.h"
#include"quicksort.h"
#include"radixsort.h"

clock_t timestart, timeend;
using namespace std;

int main()
{
	int dizi1[1000], dizi11[1000];
	int dizi2[10000], dizi22[10000];
	int dizi3[100000], dizi33[100000];
	bubblesort bubblesort1;
	insertionsort insertionsort1;
	quicksort quicksort1;
	radixsort radixsort1;
	int boyut1 = 1000, boyut2 = 10000, boyut3 = 100000;
	double calismasure = 0;
	srand(time(NULL));
	for (int i = 0; i < boyut3; i++)//dizilere rastgele atama yapar ve kopyalarýný alir
	{
		if (i < boyut1)
		{
			dizi1[i] = rand();
			dizi11[i] = dizi1[i];
		}
		if (i < boyut2)
		{
			dizi2[i] = rand();
			dizi22[i] = dizi2[i];
		}
		dizi3[i] = rand();
		dizi33[i] = dizi3[i];
	}

	cout << setw(35) << "N=" << boyut1;
	cout << setw(50) << "N=" << boyut2;
	cout << setw(50) << "N=" << boyut3 << endl;
	//////////////////////////bubblesort////////////////////////////////
	cout << endl << setw(15) << "Bubble Sort";
	timestart = clock();
	bubblesort1.bubblesortsirala(dizi1, boyut1);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(10) << calismasure << " sec.| " << bubblesort1.getcomparesayac() << " cmp.| " << bubblesort1.getsayac() << " swap| ";

	timestart = clock();
	bubblesort1.bubblesortsirala(dizi2, boyut2);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(15) << calismasure << " sec.| " << bubblesort1.getcomparesayac() << "cmp.| " << bubblesort1.getsayac() << "swap|";

	timestart = clock();
	bubblesort1.bubblesortsirala(dizi3, boyut3);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(17) << calismasure << " sec.| " << bubblesort1.getcomparesayac() << " cmp.| " << bubblesort1.getsayac() << " swap|";
	for (int i = 0; i < boyut3; i++)
	{
		if (i < boyut1)
			dizi1[i] = dizi11[i];
		if (i < boyut2)
			dizi2[i] = dizi22[i];
		dizi3[i] = dizi33[i];
	}
	/////////////////////insertion sort////////////////////////
	cout << endl << setw(16) << "Insertion Sort";
	timestart = clock();
	insertionsort1.insertionsortsiralama(dizi1, boyut1);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(9) << calismasure << " sec.| " << insertionsort1.getcomparesayac() << " cmp.| " << insertionsort1.getsayac() << " swap|";;

	timestart = clock();
	insertionsort1.insertionsortsiralama(dizi2, boyut2);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(16) << calismasure << " sec.| " << insertionsort1.getcomparesayac() << " cmp.|" << insertionsort1.getsayac() << " swap|";

	timestart = clock();
	insertionsort1.insertionsortsiralama(dizi3, boyut3);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(15) << calismasure << " sec.| " << insertionsort1.getcomparesayac() << " cmp.| " << insertionsort1.getsayac() << " swap|";

	for (int i = 0; i < boyut3; i++)
	{
		if (i < boyut1)
			dizi1[i] = dizi11[i];
		if (i < boyut2)
			dizi2[i] = dizi22[i];
		dizi3[i] = dizi33[i];
	}

	/////////////////////////////quýcksort////////////////////////////////
	cout << endl << setw(16) << "Quick Sort";
	quicksort1.setsayac();
	timestart = clock();
	quicksort1.quicksortsiralama(dizi1, 0, boyut1 - 1);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(9) << calismasure << " sec. | " << quicksort1.getcomparesayac() << " cmp.| " << quicksort1.getsayac() << " swap| ";

	quicksort1.setsayac();
	timestart = clock();
	quicksort1.quicksortsiralama(dizi2, 0, boyut2 - 1);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(17) << calismasure << " sec.| " << quicksort1.getcomparesayac() << " cmp.| " << quicksort1.getsayac() << " swap| ";

	quicksort1.setsayac();
	timestart = clock();
	quicksort1.quicksortsiralama(dizi3, 0, boyut3 - 1);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(20) << calismasure << " sec.| " << quicksort1.getcomparesayac() << " cmp.| " << quicksort1.getsayac() << " swap| ";

	for (int i = 0; i < boyut3; i++)
	{
		if (i < boyut1)
			dizi1[i] = dizi11[i];
		if (i < boyut2)
			dizi2[i] = dizi22[i];
		dizi3[i] = dizi33[i];
	}
	/////////////////////////////radixsort////////////////////////////////
	cout << endl << setw(16) << "Radix Sort";
	int n = sizeof(dizi1) / sizeof(dizi1[0]);
	timestart = clock();
	radixsort1.radixsortsiralama(dizi1, n);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(9) << calismasure << " sec. | " << radixsort1.getcomparesayac() << " cmp.| " << radixsort1.getsayac() << " swap|";

	radixsort1.setsayac();
	n = sizeof(dizi2) / sizeof(dizi2[0]);
	timestart = clock();
	radixsort1.radixsortsiralama(dizi2, n);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(18) << calismasure << " sec.| " << radixsort1.getcomparesayac() << " cmp.| " << radixsort1.getsayac() << " swap|";

	radixsort1.setsayac();
	n = sizeof(dizi3) / sizeof(dizi3[0]);
	timestart = clock();
	radixsort1.radixsortsiralama(dizi3, n);//diziyi siralamaya gonderir
	timeend = clock();
	calismasure = (double)(timeend - timestart) / CLOCKS_PER_SEC;//zaman farkini verir
	cout << setw(20) << calismasure << " sec.| " << radixsort1.getcomparesayac() << " cmp.| " << radixsort1.getsayac() << " swap|"<<endl;

	system("pause");
}