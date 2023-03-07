#include <stdio.h>

/*
Nama Program	: cekSegitiga.c
Deskripsi	: Mengeluarkan output jenis segitiga
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 7 Maret 2023
*/

/*
Kamus
	a = integer{sisi 1}
	b = integer{sisi 2}
	c = integer{sisi 3}
	
Algoritma
	input(a)
	input(b)
	input(c)
	if (a > 0 AND b > 0 AND c > 0) then
		if (a != b) then
			if (a != c) then
				if (b != c) then
					output("Segitiga Sembarang")
				else
					output("Segitiga Sama Kaki")
			else
				output("Segitiga Sama Kaki")
		else
			if (a != c) then
				output("Segitiga Sama kaki")
			else
				output("Segitiga Sama Sisi")
	else
		output("Terdapat nilai yang bukan sisi segitiga")
*/

int main(){
	int a; scanf("%d", &a);
	int b; scanf("%d", &b);
	int c; scanf("%d", &c);
	if (a > 0 && b > 0 && c > 0){
		if (a != b){
			if (a != c){
				if (b != c){
					printf("Segitiga Sembarang");
				}
				else{
					printf("Segitiga Sama Kaki");
				}
			}
			else {
				printf("Segitiga Sama Kaki");
			}
		}
		else{
			if (a != c){
				printf("Segitiga Sama Kaki");
			}
			else{
				printf("Segitiga Sama Sisi");
			}
		}
	}
	else{
		printf("Terdapat nilai yang bukan sisi segitiga");
	}	
	return 0;
}
