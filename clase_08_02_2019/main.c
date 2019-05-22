#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


char* leer_frase(char* dest);
int extraer_num(const char* dest);
int leer_numero_matricula(char*dest);

int main() {
	/*char cadena1[] = "hola cmundo creeeel";
	char cadena2[] = "cruel";
	char* pChr = cadena1;
	puts(cadena1);
	pChr = strstr(cadena1, "c");
	for (int i = 0; i < (strlen(cadena2)); pChr++,i++) {
		*pChr = cadena2[i];
	}
	*pChr = '\0';
	puts(cadena1);*/

	//cadena:"los alumnosd del a309 sin 50" los alumnos son 50
	
	printf("%d", leer_numero_matricula("manuel_897"));

	return 0;
}
char* leer_frase(char* dest) {
	printf("introduzca una frase\n");
	scanf("%[^\n]", dest);
	return dest;
}	
int extraer_numero(const char* dest) {
	int num=0;
	char token[50];
	//sscanf(dest, "%*[^0123456789]%d", &num);
	return num;
}

int leer_numero_matricula(char*dest){
	int i = 0,num;
	char* pChr = dest;
	for (; i < *pChr != '\0'; pChr++) {
		if (isdigit(*pChr) {
			num=strtol(pChr,NULL,10);
		}
	}
	return num;
}
