#include <stdio.h>
int main() {
    char categoria;
    float costo;
    //P = Pensionato, S = Studente, D = Disoccupato
    printf("Inserisci la categoria della persona che vuole acquistare il biglietto: ");
    scanf("%c", &categoria);
    printf("Inserire il prezzo del biglietto: ");
    scanf("%f", &costo);
    if (categoria == 'P') {
        costo=costo-(costo*.1);
    }else if(categoria =='S') {
        costo=costo-(costo*.15);
    }else if(categoria == 'D') {
        costo=costo-(costo*.25);
    }else{
        printf("La categoria inserita non riceve nessuno sconto\n");
    }
    printf("Il prezzo del biglietto è: %f",costo);
}