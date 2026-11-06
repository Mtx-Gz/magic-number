#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() 
{ 
    srand(time(NULL));
    int nb_rdm = rand() % 100 + 1;
    printf("choisir un nombre entre 1 et 100 : ");
    int nb_choisi;
    scanf("%d", &nb_choisi);
    while (nb_choisi != nb_rdm) 
    {
        if (nb_choisi < nb_rdm) 
        {
            printf("C'est plus !!!\n"); 
            printf("choisir un nombre entre 1 et 100 : ");
            scanf("%d", &nb_choisi);
        }
        else if (nb_choisi > nb_rdm)
        {
            printf("C'est moins !!!\n");
            printf("choisir un nombre entre 1 et 100 : ");
            scanf("%d", &nb_choisi);
        }
    }
    if (nb_choisi == nb_rdm) 
    {
        printf("Gagné !!!\n");
    }
    exit (0);
}