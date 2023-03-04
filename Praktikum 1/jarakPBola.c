#include <stdio.h>

/*
Nama Program	: jarakPBola.c
Deskripsi		: Program untuk menentukan jarak parabola
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM				: 24060122140043
Tanggal			: 25 Februari 2023
*/

int main(){
	
	/* 
	Kamus
	v0 = real {kecepatan awal}
	t = real {waktu}
	y = real {jarak}
	const g = 9.8 {konstanta gravitasi}
	
	Algoritma
	input(v0)
	input(t)
	y <- v0*t + 1/2*(gt^2)
	output(y)
	*/
	float v0;
	scanf("%f", &v0);
	float t;
	scanf("%f", &t);
	float g = 9.8;
	
	float y = (v0*t) + ((g*t*t)/2);
	
	printf("%f", y);
	return 0;
}
