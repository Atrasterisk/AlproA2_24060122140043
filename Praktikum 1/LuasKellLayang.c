#include <stdio.h>

/*
Nama Program	: LuasKellLayang.c
Deskripsi		: Program untuk menentukan juas dan keliling layang-layang
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM				: 24060122140043
Tanggal			: 25 Februari 2023
*/

int main(){
	/*
	Kamus
	s1 = real {sisi 1}
	s2 = real {sisi 2}
	d1 = real {diagonal 1}
	d2 = real {diagonal 2}
	Lu = real {luas layang-layang}
	ke = real {keliling layang-layang}
	
	Algoritma
	input(s1)
	input(s2)
	input(d1)
	input(d2)
	Lu <- 1/2 * d1 * d2
	Ke <- 2*(s1 + s2)
	output(Lu)
	output(Ke)
	*/
	
	float s1;
	scanf("%f", &s1);
	float s2;
	scanf("%f", &s2);
	float d1;
	scanf("%f", &d1);
	float d2;
	scanf("%f", &d2);
	
	float Lu = d1 * d2 / 2;
	float Ke = 2 * (s1 + s2);
	
	printf("%f\n", Lu);
	printf("%f", Ke);
	return 0;
}
