#include<stdio.h>

/*
Nama Program	: JumDeret.c
Deskripsi	: Mengeluarkan output berupa jumlah total deret bilangan
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 11 Maret 2023
*/

/*
Kamus
	N = integer{panjang deret bilangan}
	tot = integer{total deret bilangan}
	i = integer{counter}

Algoritma
	input(n)
	if (N > 0) then
		tot = 0
		i = 1
		while (i <= N) do
			tot = tot + i
			i++
		output(tot)
*/

int main(){
	int N; scanf("%d", &N);
	if (N > 0){
		int tot = 0;
		int i;
		for (i = 1; i <= N; i++){
			tot = tot + i;
		}
		printf("%d", tot);
	}
	
	return 0;
}
