#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: JumFrekNilTabel.c
Deskripsi	: Mengeluarkan output berupa hasil jumlah semua anggota yang frekuensinya lebih dari 1
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 16 Maret 2023
*/

/*
Kamus Lokal
	T = array [1..N] of integer {array T isi integer}
	i = integer {counter}
	j = integer {counter}
	tot = integer {total}
	frek = integer {frekuensi}
	N = integer {jumlah data}
	x = integer {input anggota}
	
Algoritma
	input(N)
	i traversal [0..(N-1)]
		input(x)
		Ti <- x
	tot <- 0
	i traversal [0..(N-1)]
		count <- 0
		j traversal [i+1..(N-1)]
			if (Ti = Tj) then
				frek++
			if (i = j) then
				frek = frek
		k traversal [0..(i-1)]
			if (Ti = Tk) then
				frek <- 0
		if (frek > 1) then
			tot <- tot + (Ti * (frek+1))
	output (tot)
*/

int main(){
	int *T;
	int i; int j; int k; int frek; int tot;
	int N; scanf ("%d", &N);
	
	T = (int*)malloc(N*sizeof(int));
	for (i = 0; i < N; i++){
		int x; scanf("%d", &T[i]);
	}
	tot = 0;
	for(i = 0; i < N ; i++){
		frek = 0;
		for (j = i+1; j < N; j++){
			if (T[i] == T[j]){
				frek++;
			}
			if (i == j){
				frek = frek;
			}
		}
		for (k = 0; k < i; k++){
			if (T[i] == T[k]){
				frek = 0;
			}
		}
		if (frek > 0){
			tot = tot + (T[i] * (frek + 1));
		}
	}
	printf("%d", tot);
	return 0;
}
