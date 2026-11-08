#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() 
{ 
    srand(time(NULL));
    int nb_rdm = rand() % 100 + 1;
    int nb_choisi;
    while (nb_choisi != nb_rdm) 
    {
        printf("choisir un nombre entre 1 et 100 : ");
<<<<<<< HEAD
        if (scanf("%d", &nb_choisi) != 1) exit(0);
        
        else if (nb_choisi < 1 || nb_choisi > 100)
        {
            printf("Le nombre n'est pas dans l'intervalle 1, 100.\n");
            exit(0);
        }   
=======
        /*scanf("%d", &nb_choisi);*/
        if (scanf("%d", &nb_choisi) != 1) exit(0);
        {
            printf("La saise n'est pas un nombre, relancer e prgrame svp.\n");
        }
        
        if (nb_choisi < 1 || nb_choisi > 100);
        
>>>>>>> 70bcd88 (Magic number)
        else if (nb_choisi < nb_rdm) 
        {
            printf("C'est plus que %d\n", nb_choisi);
        }
        else if (nb_choisi > nb_rdm)
        {
            printf("C'est moins que %d\n", nb_choisi);
        }
        else 
        {
            printf("Gagné, le nombre était %d\n", nb_rdm);
        }
    }
    exit (0);
}