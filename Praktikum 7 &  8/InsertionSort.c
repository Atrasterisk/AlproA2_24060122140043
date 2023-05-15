#include <stdio.h>

/*
Nama Program	: InsertionSort.c
Deskripsi	: Mengeluarkan output berupa tabel yang telah di sorting secara ascending menggunakan insertion sort
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 15 Mei 2023
*/

void PrintArray (int T[], int N){
	int i;
	for (i = 0; i < N; i++){
		printf ("%d ", T[i]);
	}
}
void InsertionSort(int T[], int N){
	/*
	Kamus Lokal
		i = integer {index elemen} 
		j = integer {index tujuan elemen baru}
		temp = integer
	*/
	
	// Algoritma
	int i; int j; int temp;
	for (i = 1; i < N; i++){
		temp = T[i];
		j = i - 1;
		while (T[j] > temp && j >= 0){
			T[j + 1] = T[j];
			j--;
		}
		T[j + 1] = temp;
	}
}

int main(){
	int Tabel[7] = {8, 4, 5, 10, 12, 6, 3};
	InsertionSort(Tabel, 7);
	PrintArray(Tabel, 7);
}
