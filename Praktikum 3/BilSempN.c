#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: BilSempN.c
Deskripsi	: Mengeluarkan bilangan sempurna hingga N
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 12 Maret 2023
*/

/*
Kamus
	N : integer{input}
	tot :integer{total}
	i = integer{counter}
	j = integer{counter}
	
Algoritma
	input(N)
	if (N >= 6) then
		output("Bilangan sempurnanya adalah 6")
		i = 7
		while (i <= N) do
			j = 1
			tot = 0
			repeat
				if ((j+1) = i AND tot = i) then
					output ("J)
				else
					if (i mod j = 0) then
						tot = tot + j
				j++
			until (j = i OR tot > i)
		i++
*/

int main(){
	int N; scanf("%int", &N);
	int tot;
	if (N >= 6){
		printf("Bilangan sempurnanya adalah 6");
		int i;
		for (i = 7; i <= N; i++){
			tot = 0;
			int j;
			for (j = 1; j < i; j++){
				if ((j + 1) == i && tot == i){
					printf(", %d", i);
				}
				else{
					if (i % j == 0){
						tot = tot + j;
						if (tot > i){
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}
