#include <stdio.h>
#include <stdlib.h>

int main()
{

// Zadanie 1
    /*
        Napisz program, który przesuwa w prawo o jedną pozycję zawartość tablicy
        10-cio elementowej liczb całkowitych tzn. dla elementów i=0,..,8 t[i+1] po
        wykonaniu programu ma mieć wartość t[i], a element t[0] wartość t[9]. Program
        ma używać tylko jednej tablicy.
    */
        /*
        int tablica[10]={1,2,3,4,5,6,7,8,9,10};
        int pamiec,i;
        printf("Przed podmiana:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        printf("Po podmianie:\n");
        pamiec=tablica[0];
        for(i=0;i<9;i++){
            tablica[i]=tablica[i+1];
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        tablica[9]=pamiec;
        printf("tablica[9] = %d\n",tablica[9]);
        */

// Zadanie 2
    /*
        Napisz program, który przesuwa w lewo o jedną pozycję zawartość tablicy
        10-cio elementowej liczb całkowitych tzn. dla elementów i=0,..,8 t[i] po
        wykonaniu programu ma mieć wartość t[i+1], a element t[9] wartość t[0].
        Program ma używać tylko jednej tablicy.
    */
        /*
        int tablica[10]={1,2,3,4,5,6,7,8,9,10};
        int pamiec,i;
        printf("Przed podmiana:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        printf("Po podmianie:\n");
        pamiec=tablica[9];
        for(i=9;i>0;i--){
            tablica[i]=tablica[i-1];
        }
        tablica[0]=pamiec;
        for(i=0;i<10;i++){
            printf("tablica[%d] = %d\n",i,tablica[i]);
        }
        */

// Zadanie 3
    /*
        Napisz program, który z dwóch 10-cio elementowych tablic znakowych tworzy
        trzecią złożoną na zmianę z elementów to jednej, to drugiej tablicy.
    */
        /*
        char tab1[]={'A','B','C','D','E','F','G','H','I','J'};
        char tab2[]={'a','b','c','d','e','f','g','h','i','j'};
        char tablica[20];
        int i;
        for(i=0;i<10;i++){
            tablica[i*2]=tab1[i];
            tablica[i*2+1]=tab2[i];
        }
        for(i=0;i<20;i++){
            printf("tablica[%d] = %c\n",i,tablica[i]);
        }
        */

// Zadanie 4
    /*
        Napisz program, który z dwóch 10-cio elementowych posortowanych tablic liczb
        zmiennoprzecinkowych tworzy trzecią również posortowaną. Należy wykorzystać
        fakt posortowania tablic 10-cio elementowych (do trzeciej tablicy, kolejne
        elementy mają być wstawiane od razu we właściwym miejscu tej tablicy).
    */
        /*
        double tab1[10]={1.23,2.47,2.89,3.56,8.20,9.34,14.57,27.63,56.34,91.85};
        double tab2[10]={0.37,2.57,7.27,9.24,11.53,26.43,36.41,37.52,73.61,92.52};
        double tablica[20];
        int i=0,j=0,k;
        for(k=0;k<20;k++){
            if((tab1[i]<tab2[j]&&i<10)||j>9){
                tablica[k]=tab1[i];
                i++;
            }else{
                tablica[k]=tab2[j];
                j++;
            }
            printf("tablica[%d] = %.2f\n",k,tablica[k]);
        }
        */

// Zadanie 5
    /*
        Napisz program, który z dwóch 10-cio elementowych tablic znakowych tworzy
        trzecią zawierającą spółgłoski z tych tablic.
    */
        /*
        char tab1[]={'a','h','t','U','F','e','J','p','Y','n'};
        char tab2[]={'w','G','x','O','f','L','c','I','z','N'};
        int ilespolglosek=0,i;
        int spolgloska=0;
        for(i=0;i<10;i++){
            if(tab1[i]!='e'&&tab1[i]!='u'&&tab1[i]!='i'&&tab1[i]!='o'&&tab1[i]!='a'&&tab1[i]!='y'&&tab1[i]!='E'&&tab1[i]!='U'&&tab1[i]!='I'&&tab1[i]!='O'&&tab1[i]!='A'&&tab1[i]!='Y'){
                ilespolglosek++;
            }
            if(tab2[i]!='e'&&tab2[i]!='u'&&tab2[i]!='i'&&tab2[i]!='o'&&tab2[i]!='a'&&tab1[i]!='y'&&tab2[i]!='E'&&tab2[i]!='U'&&tab2[i]!='I'&&tab2[i]!='O'&&tab2[i]!='A'&&tab1[i]!='Y'){
                ilespolglosek++;
            }
        }
        printf("Spolglosek jest %d\n\n",ilespolglosek);
        char tablica[ilespolglosek];
        for(i=0;i<10;i++){
            if(tab1[i]!='e'&&tab1[i]!='u'&&tab1[i]!='i'&&tab1[i]!='o'&&tab1[i]!='a'&&tab1[i]!='y'&&tab1[i]!='E'&&tab1[i]!='U'&&tab1[i]!='I'&&tab1[i]!='O'&&tab1[i]!='A'&&tab1[i]!='Y'){
                tablica[spolgloska]=tab1[i];
                spolgloska++;
                printf("Spolgloska %d to %c\n",spolgloska,tablica[spolgloska-1]);
            }
            if(tab2[i]!='e'&&tab2[i]!='u'&&tab2[i]!='i'&&tab2[i]!='o'&&tab2[i]!='a'&&tab1[i]!='y'&&tab2[i]!='E'&&tab2[i]!='U'&&tab2[i]!='I'&&tab2[i]!='O'&&tab2[i]!='A'&&tab1[i]!='Y'){
                tablica[spolgloska]=tab2[i];
                spolgloska++;
                printf("Spolgloska %d to %c\n",spolgloska,tablica[spolgloska-1]);
            }
        }
        */

// Zadanie 6
    /*
        Napisz program, który oblicza iloczyn tylko tych elementów całkowitoliczbowej
        tablicy 10-cio elementowej, które są parzyste.
    */
        /*
        int tablica[]={1,2,3,4,5,6,7,8,9,10};
        int iloczyn=0,i;
        printf("Iloczyn: ");
        for(i=0;i<10;i++){
            if(tablica[i]%2==0){
                if(iloczyn!=0){
                    iloczyn=iloczyn*tablica[i];
                    printf("*%d",tablica[i]);
                }else{
                    iloczyn=tablica[i];
                    printf("%d",tablica[i]);
                }
            }
        }
        printf("=%d",iloczyn);
        */

// Zadanie 7
    /*
        Napisz program, który posortowaną tablicę liczb całkowitych sortuje w
        kierunku przeciwnym. Należy wykorzystać początkowe posortowanie tablicy. W
        programie można użyć tylko jedną tablicę.
    */
        /*
        int tablica[]={1,3,5,7,9,11,13,15,17,19};
        int zmienna,i;
        printf("Przed odwroceniem:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d]=%d\n",i,tablica[i]);
        }
        for(i=0;i<5;i++){
            zmienna=tablica[i];
            tablica[i]=tablica[9-i];
            tablica[9-i]=zmienna;
        }
        printf("\n\nPo odwroceniu:\n");
        for(i=0;i<10;i++){
            printf("tablica[%d]=%d\n",i,tablica[i]);
        }
        */

// Zadanie 8
    /*
        Napisz program, który wpisuje do kolejnych elementów tablicy 20-to
        elementowej kolejne potęgi liczby n, począwszy od n^0. Liczbę n należy
        wczytać z klawiatury. Potęgowanie należy zrealizować za pomocą wielokrotnego
        mnożenia.
    */
        /*
        int n,i,potega,tablica[20];
        printf("Podaj liczbe n: ");
        scanf("%d",&n);
        tablica[0]=1;
        for(i=1;i<20;i++){
            tablica[i]=tablica[i-1]*n;
        }
        for(i=0;i<20;i++){
            printf("%d^%d=%d\n",n,i,tablica[i]);
        }
        */

// Zadanie 9
    /*
        Napisz program, który zamienia liczbę całkowitą dziesiętną na system dwójkowy
        (bez użycia funkcji matematycznych dostępnych w C i formatu binarnego).
    */
        /*
        int dziesietna,j=2,potega=2,suma=3,i;
        do{
            printf("Podaj liczbe wieksza od 0 do przeliczenia na binarny: ");
            scanf("%d",&dziesietna);
            printf("Wczytalem: %d\n",dziesietna);
        }while(dziesietna<0);
        if(dziesietna>1){
            while(suma<dziesietna){
                potega=potega*2;
                suma=suma+potega;
                j++;
            }
        }else{
            j=1;
            potega=1;
        }
        int binarna[j];
        printf("%d w przeliczeniu na binarny to: ",dziesietna);
        for(i=0;i<j;i++){
            if(dziesietna>=potega){
                //printf("%d>=%d\n",dziesietna,potega);
                binarna[i]=1;
                dziesietna=dziesietna-potega;
            }else{
                //printf("%d<%d\n",dziesietna,potega);
                binarna[i]=0;
            }
            potega=potega/2;
            printf("%d",binarna[i]);
        }
        */

// Zadanie 10
    /*
        Napisz program, który wstawia dowolną liczbę zmiennoprzecinkową do
        posortowanej tablicy 10-cio elementowej o elementach -5,5; -1,2; 0; 0; 1,4;
        3,5; 6,8; 10; 10; 14,5. tak, aby tablica była nadal posortowana bez
        sortowania całego wektora. Należy zadeklarować tablicę 11-to elementową, żeby
        wstawiany element się zmieścił.
    */
        /*
        float tablica[]={-5.5,-1.2,0,0,1.4,3.5,6.8,10,10,14.5,0};
        float wczytana;
        int i;
        scanf("%f",&wczytana);
        printf("Wczytano %.2f\n",wczytana);
        printf("Przed:\n");
        for(i=0;i<11;i++){
            printf("tablica[%d] = %.2f\n",i,tablica[i]);
        }
        for(i=9;i>0;i--){
            //printf("jestem");
            if(tablica[i]>wczytana){
                //printf("t>w\n");
                tablica[i+1]=tablica[i];
            }else{
                //printf("t<=w - break");
                tablica[i+1]=wczytana;
                break;
            }
        }
        printf("\nPo:\n");
        for(i=0;i<11;i++){
            printf("tablica[%d] = %.2f\n",i,tablica[i]);
        }
        */

// Zadanie 11
    /*
        Napisz program, który wczytuje dowolną liczbę całkowitą x oraz indeks
        całkowity i z przedziału <0;9>, a następnie wstawia do elementu tablicy o
        indeksie i wartość x w ten sposób, że aby nie stracić zawartości elementu o
        indeksie i należy elementy od i do 9 "rozsunąć" w prawo. Należy zadeklarować
        co najmniej 11-elementową tablicę.
    */
        /*
        int tablica[11]={1,4,8,3,6,2,8,2,7,4};
        int indeks,liczba,i;
        printf("Tablica przed: ");
        for(i=0;i<11;i++){
            printf("%d,",tablica[i]);
        }
        printf("\nPodaj liczbe calkowita do wstawienia: ");
        scanf("%d",&liczba);
        do{
            printf("Podaj indeks w ktory wstawic liczbe w zakresie 0-9: ");
            scanf("%d",&indeks);
        }while(indeks<=0||indeks>=9);
        for(i=10;i>indeks;i--){
            tablica[i]=tablica[i-1];
        }
        tablica[indeks]=liczba;
        printf("Tablica po: ");
        for(i=0;i<11;i++){
            printf("%d,",tablica[i]);
        }
        */

// Zadanie 12
    /*
        Napisz program, który oblicza średnią arytmetyczną elementów podzielnych
        przez 15 w 10-cio elementowej tablicy liczb całkowitych.
    */
        /*
        int tablica[]={1,16,30,15,22,3,73,67,42,31};
        float suma=0,elementow=0,srednia;
        int i;
        printf("Srednia liczb ");
        for(i=0;i<10;i++){
            if(tablica[i]%15==0){
                suma+=tablica[i];
                elementow++;
                printf("%d,",tablica[i]);
            }
        }
        srednia = suma/elementow;
        printf(" wynosi %.2f",srednia);
        */

// Zadanie 13
    /*
        Napisz program, który oblicza iloczyn elementów podzielnych przez 8 w 10-cio
        elementowej tablicy liczb całkowitych.
    */
        /*
        int tablica[]={1,8,30,45,16,3,75,32,45,30};
        int iloczyn=1,i;
        printf("Iloczyn liczb podzielnych przez 8 w tablicy elementow: ");
        for(i=0;i<10;i++){
            printf("%d,",tablica[i]);
            if(tablica[i]%8==0){
                iloczyn=iloczyn*tablica[i];
            }
        }
        printf(" wynosi %d",iloczyn);
        */

// Zadanie 14
    /*
        Napisz program, który z dwóch 10-cio elementowych tablic liczbowych tworzy
        trzecią w ten sposób, że jej kolejne elementy zawierają na zmianę dwa
        elementy z jednej tablicy i dwa z drugiej.
    */
        /*
        int tab1[]={1,2,5,6,9,10,13,14,17,18};
        int tab2[]={3,4,7,8,11,12,15,16,19,20};
        int tablica[20],i;
        for(i=1;i<6;i++){
            tablica[i*4-4]=tab1[i*2-2];
            tablica[i*4-3]=tab1[i*2-1];
            tablica[i*4-2]=tab2[i*2-2];
            tablica[i*4-1]=tab2[i*2-1];
        }
        printf("Tablica po dzialaniu funkcji (2 elementy z tab1, 2 elementy z tab2: ");
        for(i=0;i<20;i++){
            printf("%d,",tablica[i]);
        }
        */
    return 0;
}
