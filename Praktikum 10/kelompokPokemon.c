#include <stdio.h>
#include <string.h>

typedef struct {
	char namaPokemon [255][255];
	int power;
} pokemon;

// Program Utama
int main(){
	pokemon PKM;
	int retval;
	
	FILE *FileBaca, *sFile, *aFile;
	
	FileBaca = fopen ("ListPokemon.txt", "r"); // r untuk baca
	sFile = fopen ("PokemonSclass.txt", "w"); // w untuk baca
	aFile = fopen ("PokemonAclass.txt", "w");
	
	retval = fscanf (FileBaca, "%s %d", &PKM.namaPokemon, &PKM.power); // Baca 1 line dari txt
		while (retval != EOF){ // EOF dibiarin kosong variabelnya, biar kalo ga kosong, whilenya tetep lanjut
			if (PKM.power >= 800){
				fprintf (sFile, "%s %d\n", PKM.namaPokemon, PKM.power);
			} else {
				fprintf (aFile, "%s %d\n", PKM.namaPokemon, PKM.power);
			}
			retval = fscanf (FileBaca, "%s %d", &PKM.namaPokemon, &PKM.power); // Baca line selanjutnya dari txt
		}
	return 0;
}
