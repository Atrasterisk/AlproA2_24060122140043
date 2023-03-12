#include <stdio.h>

/*
Nama Program	: BilPrimaN.c
Deskripsi	: Mengeluarkan bilangan prima hingga N
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 12 Maret 2023
*/

/*
Kamus
	N : integer{input}
	i = integer{counter}
	j = integer{counter}

Algoritma
	input(N)
	if (N >= 2) then
		output("Bilangan primanya adalah 2")
			i = 3
			while (i <= N) do
				j = 2
				repeat
					if (j*j > i) then
						output(", j")
					j++
				until(i mod (j - 1) = 0 OR (j-1)*(j-1) >= N)
				i = i+1
*/

int main(){
	int N; scanf("%d", &N);
	if (N >= 2){
		printf("Bilangan primanya adalah 2");
		int i;
		for (i = 3; i <= N; i++){
			int j;
			for (j = 2; (j-1)*(j-1) < i; j++){
				if (j*j > i){
					printf(", %d", i);
				}
				else{
					if (i % j == 0){
						break;
					}
				}
			}
		}
	}
	return 0;
}
