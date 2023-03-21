#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: SimetriTabel.c
Deskripsi	: Mengeluarkan output berupa kesimetrian 2 tabel
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 16 Maret 2023
*/

/*
Kamus Lokal
	T1 = array [1..N] of integer {array T1 isi integer}
	T2 = array [1..M] of integer {array T2 isi integer}
	N = integer {jumlah data T1}
	M = integer {jumlah data T2}
	x = integer {input data}
	i = integer {counter}
	j = integer {counter}
	
Algoritma
	input(N)
	i traversal [0..(N-1)]
		input(x)
		T1i <- x
	input(M)
	i traversal [0..(M-1)
		input(x)
		T2i <- x
	if (N = M) then
		j <- 0
		repeat
			j++
		until (T1j != T2j OR j = N)
		if (j = N) then
			output("T1 dan T2 simetris")
		else
			output("T1 dan T2 tidak simetris")
	else
		output("T1 dan T2 tidak simetris")
*/

int main(){
	int *T1; int *T2;
	int i; int j;
	
	int N; scanf("%d", &N);
	T1 = (int*)malloc(N*sizeof(int));
	for (i = 0; i < N; i++){
		int x; scanf("%d", &T1[i]);
	}
	int M; scanf ("%d", &M);
	T2 = (int*)malloc(M*sizeof(int));
	for (i = 0; i < M; i++){
		int x; scanf("%d", &T2[i]);
	}
	
	if (N == M){
		for (j = 0; j < N; j++){
			if (T1[j] != T2[j]){
				break;
			}
		}
		if (j == N){
			printf("T1 dan T2 simetris");
		}
		else{
			printf("T1 dan T2 tidak simetris");
		}
	}
	else{
		printf("T1 dan T2 tidak simetris");
	}
	return 0;
}
