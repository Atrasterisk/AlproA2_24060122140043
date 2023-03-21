#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: NilMax2Tabel.c
Deskripsi	: Mengeluarkan output berupa nilai max ke 2 dari sebuah tabel
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 16 Maret 2023
*/

/*
Kamus Lokal
	T = array [1..N] of integer {array T isi integer}
	i = integer {counter}
	N = integer {jumlah data}
	x = integer {input anggota}
	max = integer {nilai max}
	max_2 = integer {nilai max 2}

Algoritma
	input(N)
	i traversal [0..(N-1)]
		input(x)
		Ti <- x
	max <- T0
	max_2 <- 0
	i traversal [0..(N-1)]
		if (max < Ti) then
			max <- Ti
	i traversal [0..(N-1)]
		if (max_2 < Ti) then
			if (Ti < max) then
				max_2 <- Ti
	output(max_2)
*/

int main(){
	int *T;
	int i; int max; int max_2;
	int N; scanf("%d", &N);
	
	T = (int*)malloc(N*sizeof(int));
	for (i = 0; i < N; i++){
		scanf("%d", &T[i]);
	}
	max = T[0];
	max_2 = 0;
	for (i = 0; i < N; i++){
		if (max < T[i]){
			max = T[i];
		}
	}
	for (i = 0; i < N; i++){
		if (max_2 < T[i]){
			if (T[i] < max){
				max_2 = T[i];
			}
		}
	}
	printf("%d", max_2);
	return 0;
}
