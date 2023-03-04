#include <stdio.h>
#include <stdlib.h>

/*
Nama Program	: jarakGLBB.c
Deskripsi		: Program untuk menentukan jarak gerak lurus berubah beraturan
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM				: 24060122140043
Tanggal			: 24 Februari 2023
*/

// Kamus Lokal
/* Kamus lokal berisi tipe data yang ingin dimasukkan
	v0: double {kecepatan awal} 
	t: double {waktu}
	a: double {percepatan awal}
	S: double {JarakGLBB}
*/

// Algoritma
/* 
	input(v0)
	input(t)
	input(a)
	S = v0*t + (1/2)*(a*t^2)
	output(S)
*/

//Note: buat di notasi algoritmik, semua comment nantinya masuk dalam kurung kurawal
int main(){
	float v0;
	scanf("%f", &v0); /* untuk nyimpan value, pakai tanda dan (&)*/
	float t;
	scanf("%f", &t);
	float a;
	scanf("%f", &a);
	
	float S = (v0*t) + ((a*t*t)/2);
	
	printf("%f", S);
	return 0;
}
