#include <stdio.h>

/*
Nama Program	: cekBilangan.c
Deskripsi	: Mengeluarkan output jenis bilangan jika inputnya merupakan bilangan
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM		: 24060122140043
Tanggal	: 6 Maret 2023
*/

/*
Kamus
	i = integer{input}

Algoritma
input(i)
if (isDigit(i)) then
	depend on i
	i > 0 : output("Bilangan Bulat Positif")
	i = 0 : output("Nol")
	i < 0 : output("Bilangan Bulat Negatif")
else
	output("Bukan termasuk sebuah bilangan")

*/
int main(){
	int i;
	if (scanf("%d", &i)){ /* input bisa dimasukkan ke dalam kondisi if, buat ngecek tipe data dari input*/
		if (i > 0){
			printf("Bilangan bulat positif");
		} else if (i == 0){
			printf("Nol");
		} else if (i < 0){
			printf("Bilangan bulat negatif");
		}
	}
	else{
		printf("Bukan termasuk sebuah bilangan");
	}
	return 0;
}
