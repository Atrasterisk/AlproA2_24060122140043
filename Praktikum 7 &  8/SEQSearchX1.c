#include <stdio.h>
/*
Nama Program	: SEQSearchX1.c
Deskripsi	: Mengeluarkan output berupa indeks dari elemen yang dicari
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 15 Mei 2023
*/

void SEQSearchX1(int T[], int N, int X){
	/*
	Kamus Lokal
		i = integer[1..Nmax] {index pencarian}
		iX = integer {index output}
	*/
	
	// Algoritma
	int iX; int i = 1;
	while ((i < N) && (T[i] != X)){
		i++;
	}
	if (T[i] != X){
		iX = 0;
	}
	else{
		iX = i;
	}
	printf("%d", iX);
}

int main(){
	int Tabel[7] = {2, 1, 5, 3, 4, 8, 10};
	SEQSearchX1(Tabel, 7, 5);
}
