#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: FrekNilTabel.c
Deskripsi	: Mengeluarkan output berupa anggota yang frekuensinya lebih dari 1 (tidak unik)
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 16 Maret 2023
*/

/*
Kamus Lokal
	T = array [1..N] of integer {array T isi integer}
	i = integer {counter}
	j = integer {counter}
	k = integer {counter}
	count = integer {counter}
	N = integer {jumlah data}
	x = integer {input anggota}
	
Algoritma
	input(N)
	i traversal [0..(N-1)]
		input(x)
		Ti <- x
	i traversal [0..(N-1)]
		count <- 0
		j traversal [i+1..(N-1)]
			if (Ti = Tj) then
				count++
			if (i = j) then
				count = count
		k traversal [0..(i-1)]
			if (Ti = Tk) then
				count <- 0
		if (count > 1) then
			output (Ti)
*/

int main(){
	int *T;
	int i; int j; int k; int count;
	int N; scanf ("%d", &N);
	
	T = (int*)malloc(N*sizeof(int));
	for (i = 0; i < N; i++){
		int x; scanf("%d", &T[i]);
	}
	for(i = 0; i < N; i++){
		count = 0;
		for (j = i+1; j < N; j++){
			if (T[i] == T[j]){
				count++;
			}
			if (i == j){
				count = count;
			}
		}
		for (k = 0; k < i; k++){
			if (T[i] == T[k]){
				count = 0;
			}
		}
		if (count > 0){
			printf("%d, ", T[i]);
		}
	}
	return 0;
}
