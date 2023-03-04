#include <stdio.h>

/*
Nama Program	: gayaSentr.c
Deskripsi		: Program untuk menentukan gaya sentripetal
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM				: 24060122140043
Tanggal			: 25 Februari 2023
*/

int main(){
	
	/* 
	Kamus
	m = real {massa}
	v = real {kecepatan}
	r = real {jari-jari)
	F = real {gaya sentripetal}
	
	Algoritma
	input(m)
	input(v)
	input(r)
	F <- m * (v^2/r)
	output(F)
	*/
	float m;
	scanf("%f", &m);
	float v;
	scanf("%f", &v);
	float r;
	scanf("%f", &r);
	
	float F = m * ((v*v) / r);
	
	printf("%f", F);
	return 0;
}
