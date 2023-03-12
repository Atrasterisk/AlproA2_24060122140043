/*
Nama Program	: FaktorBil.c
Deskripsi	: Mengeluarkan output berupa faktor bilangan
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 11 Maret 2023
*/

/*
Kamus
	N = integer{input bilangan sembarang}
	i = integer{counter}

Algoritma
	input(N)
	if (N > 0) then
		output("Faktor bilangannya adalah 1")
		i = 2
		while (i <= N) do
			if (N mod i = 0) then
				output(" i")
*/

int main(){
	int N; scanf("%d", &N);
	if (N > 0){
		printf("Faktor bilangannya adalah 1");
		int i;
		for (i = 2; i <= N; i++){
			if (N % i == 0){
				printf(", %d", i);
			}
		}
	}
	return 0;
}
