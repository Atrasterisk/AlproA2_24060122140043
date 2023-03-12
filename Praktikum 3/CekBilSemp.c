#include <stdio.h>

/*
Nama Program	: CekBilSemp.c
Deskripsi	: Mengecek bilangan sempurna
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 11 Maret 2023
*/

/*
Kamus
	N = integer{input}
	tot = integer{total}
	i = integer{counter}
	
Algoritma
	input(N)
	if (N > 0) then
		i = 0
		tot = 0
		repeat
			if ((i+1) = N AND tot = N) then
				output("Bilangan Sempurna")
			else
				if (N mod i = 0) then
					tot = tot + i
					if (tot > N) then
						output("Bukan Bilangan Sempurna")
			i++
		until(i = N OR tot > N)
		if (tot < N) then
			output("Bukan Bilangan Prima")
*/

int main(){
	int n; scanf("%d",&n);
	if (n > 0){
		if (n == 1){
			printf("Bukan Bilangan Sempurna");
		}
		else{
			int tot = 0;
			int i;
			for (i = 1; i < n; i++){
				if ((i + 1) == n && tot == n){
					printf("Bilangan Sempurna");
				}
				else{
					if (n % i == 0){
						tot = tot + i;
						if (tot > n){
							printf("Bukan Bilangan Sempurna");
							break;
						}
					}
				}
			}
			if (tot < n){
				printf("Bukan Bilangan Sempurna");
			}
		}
	}
	return 0;
}
