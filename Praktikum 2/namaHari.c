#include <stdio.h>

/*
Nama Program	: namaHari.c
Deskripsi	: Mengeluarkan output nama hari
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 6 Maret 2023
*/

/*
Kamus
	n = integer{input nomor hari}

Algoritma
	input(n)
	if (n >= 1 AND n <= 7) then
		depend on i
			n = 1 : output("Senin")
			n = 2 : output("Selasa")
			n = 3 : output("Rabu")
			n = 4 : output("Kamis")
			n = 5 : output("Jum'at")
			n = 6 : output("Sabtu")
			n = 7 : output("Minggu")
	else
		output("Masukan nomor hari tidak tepat")
*/

int main(){
	int n; scanf("%d", &n);
	if (n >= 1 && n <= 7){
		if (n == 1){
			printf("Senin");
		}
		else if (n == 2){
			printf("Selasa");
		}
		else if (n == 3){
			printf("Rabu");
		}
		else if (n == 4){
			printf("Kamis");
		}
		else if (n == 5){
			printf("Jum'at");
		}
		else if (n == 6){
			printf("Sabtu");
		}
		else{
			printf("Minggu");
		}
	} 
	else {
		printf("Masukan nomor hari tidak tepat");
	}
	return 0;
}
