#include <stdio.h> //ligne d'inclusion de la bibliothèque stdio.h, directive de preprocesseur

void ft_print_alphabet(void) 
{
    char ch; // déclaration de la variable ch de type char
    ch = 'a'; // affectation de la valeur 'a' à la variable ch
    while (ch <= 'z') // boucle while qui s'exécute tant que la valeur de la variable ch est inférieure ou égale à 'z'
    {
        printf("%c", ch); // affichage de la valeur de la variable ch
        ch++; // incrémentation de la valeur de la variable ch
    }
}

int main(void)
{
    ft_print_alphabet(); // appel de la fonction ft_print_alphabet
    return (0); // retourne 0
}
