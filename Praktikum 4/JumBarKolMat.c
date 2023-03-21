#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: JumBarKolMat.c
Deskripsi	: Mengeluarkan output berupa jumlah semua elemen pada baris dan kolomnya
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 20 Maret 2023
*/

/*
Kamus Lokal
	A = array [0..M][0..N] of integer {matrix ukuran M baris x N kolom}
	M = integer {jumlah baris}
	N = integer {jumlah kolom}
	totbar = integer {total penjumlahan pada baris}
	totkol = integer {total penjumlahan pada kolom}
	i = integer {counter}
	j = integer {counter}

Algoritma
	input(M)
	input(N)
	i traversal [0..(N-1)]
		j traversal [0..(M-1)]
			input(T[i][j])
			
	i traversal [0..(N-1)]
		totbar <- 0
		j traversal [0..(M-1)]
			totbar <- totbar + T[i][j]
		output ("Baris ke-i adalah totbar")
		output ("\n")
	
	j traversal [0..(M-1]
		totkol <- 0
		i traversal[0..(N-1)]
			totkol <- totkol + T[i][j]
		output ("Kolom ke-j adalah totkol")
		output ("\n")
*/

int main(){
	int **A;
	int totbar; int totkol; int i; int j;
	int M; scanf("%d", &M);
	int N; scanf("%d", &N);
	
	A = (int**)malloc(N*sizeof(int*));
	for (i = 0; i < N; i++){
		A[i] = (int*)malloc(M*sizeof(int));
	}
	
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < M; i++){
		totbar = 0;
		for (j = 0; j < N; j++){
			totbar = totbar + A[i][j];
		}
		printf("Baris ke-%d adalah %d", (i+1), totbar);
		printf("\n");
	}
	i = 0; j = 0;
	for (j = 0; j < N; j++){
		totkol = 0;
		for (i = 0; i < M; i++){
			totkol = totkol + A[i][j];
		}
		printf("Kolom ke-%d adalah %d", (j+1), totkol);
		printf("\n");
	}
	free(A);
	return 0;
}

