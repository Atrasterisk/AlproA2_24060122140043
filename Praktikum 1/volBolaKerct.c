#include <stdio.h>

/*
Nama Program	: volBolaKerct.c
Deskripsi		: Program untuk menentukan volume bola dan kerucut
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM				: 24060122140043
Tanggal			: 25 Februari 2023
*/

int main(){
	/*
	Kamus
	r = real {jari-jari}
	Vb = real {volume bola}
	Vk = real {volume kerucut}
	const phi = 3.1415 {konstanta phi}
	
	Algoritma
	input(r)
	Vb <- 4/3 * phi * r^3
	Vk <- 1/2 * Vb
	output(Vb)
	output(Vk)
	*/
	
	float r;
	scanf("%f", &r);
	float phi = 3.1415;
	
	float Vb = 4 * phi * r * r * r / 3;
	float Vk = Vb/2;
	
	printf("%f\n", Vb);
	printf("%f", Vk);
	
	return 0;
}
