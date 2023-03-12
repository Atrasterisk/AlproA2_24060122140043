/*
Nama Program	: CekBilPrima.c
Deskripsi	: Mengeluarkan output berupa jenis bilangan (prima / bukan)
Nama Pembuat	: Muhammad Farhan Hafiz Alkirami
NIM	: 24060122140043
Tanggal	: 11 Maret 2023
*/

/*
Kamus
	N = integer{input}
	i = integer{counter}
	
Algoritma
	input(N)
	depend on N
		N = 1 : output("Bukan Bilangan Prima")
		N = 2 : output("Bilangan Prima)
		N > 2 : i = 2
				repeat
					if (i * i > N) then
						output("Bilangan Prima")
					else
						if (N mod i = 0) then
							output("Bukan Bilangan Prima")
					i++
				until (N mod (i-1) = 0 OR (i-1)*(i-1) > N)
*/

int main(){
	int N; scanf("%d", &N);
	if (N > 0){
		if (N == 1){
			printf("Bukan Bilangan Prima");
		}
		else if (N == 2){
			printf("Bilangan Prima");
		}
		else{
			int i;
			for (i = 2; (i - 1) * (i - 1) < N; i++){
				if (i*i > N){
					printf("Bilangan Prima");
				}
				else{
					if (N % i == 0){
						printf("Bukan Bilangan Prima");
						break;
					}
				}
			}
		}
	}
	return 0;
}
