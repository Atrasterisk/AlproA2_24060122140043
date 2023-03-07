#include <stdio.h>

/*
Nama Program	: totalTahanan.c
Deskripsi	: Mengeluarkan output total tahanan
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 6 Maret 2023
*/

/*
Kamus
	x = integer{tahanan 1}
	y = integer{tahanan 2}
	z = integer{tahanan 3}
	
Algoritma
	input(x)
	input(y)
	input(z)
	if (x >= 0 AND y >= 0 AND z >= 0) then
		output(x+y+z)
	else
		output("Masukan tahanan tidak boleh negatif")
*/

int main(){
	int x; scanf("%d",&x);
	int y; scanf("%d",&y);
	int z; scanf("%d",&z);
	if (x >= 0 && y >= 0 && z >= 0){
		printf("%d", x+y+z);
	}
	else{
		printf("Masukan tahanan tidak boleh negatif");
	}
}
