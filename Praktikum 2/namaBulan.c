#include <stdio.h>

/*
Nama Program	: namaBulan.c
Deskripsi	: Mengeluarkan output nama bulan
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 6 Maret 2023
*/

/*
Kamus
	n = integer{input nomor bulan}

Algoritma
	input(n)
	if (n >= 1 AND n <= 12) then
		depend on i
			n = 1 : output("Januari")
			n = 2 : output("Februari")
			n = 3 : output("Maret")
			n = 4 : output("April")
			n = 5 : output("Mei")
			n = 6 : output("Juni")
			n = 7 : output("Juli")
			n = 8 : output("Agustus")
			n = 9 : output("September")
			n = 10 : output("Oktober")
			n = 11 : output("November")
			n = 12 : output("Desemeber")
	else
		output("Masukan nomor bulan tidak tepat")
*/

int main(){
	int n; scanf("%d", &n);
	if (n >= 1 && n <= 12){
		if (n == 1){
			printf("Januari");
		}
		else if (n == 2){
			printf("Februari");
		}
		else if (n == 3){
			printf("Maret");
		}
		else if (n == 4){
			printf("April");
		}
		else if (n == 5){
			printf("Mei");
		}
		else if (n == 6){
			printf("Juni");
		}
		else if (n == 7){
			printf("Juli");
		}
		else if (n == 8){
			printf("Agustus");
		}
		else if (n == 9){
			printf("September");
		}
		else if (n == 10){
			printf("Oktober");
		}
		else if (n == 11){
			printf("November");
		}
		else{
			printf("Desember");
		}
	} else {
		printf("Masukan nomor bulan tidak tepat");
	}
	return 0;
}
