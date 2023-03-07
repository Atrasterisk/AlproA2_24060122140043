#include <stdio.h>

/*
Nama Program	: kallSS.c
Deskripsi	: Mengeluarkan output berupa operasi bilangan dari input
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 7 Maret 2023
*/

/*
Kamus
	iA = integer{bilangan A}
	iB = integer{bilangan B}
	ch = character{operasi bilangan}
	
Algoritma
	input(iA)
	input(iB)
	input(ch)
	if (ch = "A" OR ch = "B" OR ch = "c" or ch = "d" OR ch = "e" OR ch = "f") then
		if (ch = "a" then)
			output(iA + iB)
		else if (ch = "b") then
			output(iA - iB)
		else if (ch = "c") then
			output(iA * iB)
		else if (ch = "d") then
			output(iA / iB)
		else if (ch = "e") then
			output(iA div iB)
		else
			output(iA mod iB)
	else
		output("Bukan pilihan menu yang benar")
*/

int main(){
	char ch; scanf("%c", &ch);
	int iA; scanf("%d", &iA);
	int iB; scanf("%d", &iB);
	if ((ch == 'a') || (ch == 'b') || (ch == 'c') || (ch == 'd') || (ch == 'e')|| (ch == 'f')){
		if (ch == 'a'){
			printf("%d", iA + iB);
		}
		else if (ch == 'b'){
			printf("%d", iA - iB);
		}
		else if (ch == 'c'){
			printf("%d", iA * iB);
		}
		else if (ch == 'd'){
			printf("%f", (float)(iA) / (float)(iB));
		}
		else if (ch == 'e'){
			printf("%d", iA / iB);
		}
		else {
			printf("%d", iA % iB);
		}
	}
	else{
		printf("Bukan pilihan menu yang benar");
	}
}
