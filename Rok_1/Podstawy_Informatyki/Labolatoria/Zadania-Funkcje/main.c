/*
 * Pawel Klimowicz
 * 23.11.2019
*/
#include<stdio.h>
#include<stdlib.h>
#define ROZMIAR 10

int tab1[ROZMIAR] = {10,-41,156,123,945,-1234,125,2452,-212,0};

void drukujTablice();
void wczytajTablice();
void wyszukajMinimum();
void wyszukajMaksimum();
void srednia();
void posortuj();
void sortowanieBabelkowe();
void mediana();


int main(void){

	system("clear");
	printf("\n\n");

	//wczytajTablice();
	drukujTablice();
	wyszukajMinimum();
	wyszukajMaksimum();
	srednia();
	sortowanieBabelkowe();
	//posortuj();
	drukujTablice();
	mediana();
	printf("\n\n");
	return 0;
}
void wczytajTablice(){
	for(int i=0;i<ROZMIAR;i++){
		printf("Podaj wartosc tab1[%d]: ",i);
		scanf("%d",&tab1[i]);
	 }
}

void drukujTablice(){
	for(int i=0;i<ROZMIAR;i++)
		printf("tab1[%d]: = %d\n",i,tab1[i]);
}

void wyszukajMinimum(){
	int minimum = tab1[0],indeks=0;
	for(int i=1;i<ROZMIAR;i++){
		if(tab1[i]<minimum){
			minimum = tab1[i];
			indeks=i;
		}
	}
	printf("Wartosc minimalna to: %d i jest pod indeksem %d\n",minimum,indeks);
}

void wyszukajMaksimum(){
	int maksimum = tab1[0],indeks=0;
	for(int i=1;i<ROZMIAR;i++){
		if(tab1[i]>maksimum){
			maksimum = tab1[i];
			indeks=i;
		}
	}
	printf("Wartosc maksymalna to: %d i jest pod indeksem %d\n",maksimum,indeks);
}

void srednia(){
	float suma=0;
	for(int i=0;i<ROZMIAR;i++)
		suma += tab1[i];
	printf("Srednia podanych liczb to: %.2f\n",suma/ROZMIAR);
}

void posortuj(){
	int minimum = tab1[0];
	int i,j=0,temp;
	int indeks;
	do{
		minimum=tab1[i-1];
		indeks = i-1;
		for(int i=j;i<ROZMIAR;i++){
			if(tab1[i]<minimum){
	minimum = tab1[i];
	indeks = i;
			}
		}
		temp = tab1[j];
		tab1[j]=minimum;
		tab1[indeks] = temp;
		j++;
	}while(j<ROZMIAR);
}

void mediana(){
    double suma;
	if(ROZMIAR%2){
        suma=tab1[(ROZMIAR-1)]*2;

	}else{
        suma=tab1[ROZMIAR/2-1]+tab1[ROZMIAR/2];
	}
	printf("Mediana podanych liczb to: %.2f\n",suma/2);
}

void sortowanieBabelkowe(){
    int temp,ilosczmian,przebieg=0,i;
    do{
        przebieg++;
        ilosczmian=0;
        for(i=0;i<ROZMIAR-przebieg;i++){
            if(tab1[i]>tab1[i+1]){
                ilosczmian++;
                temp=tab1[i];
                tab1[i]=tab1[i+1];
                tab1[i+1]=temp;
            }
        }
    }while(ilosczmian);
}
