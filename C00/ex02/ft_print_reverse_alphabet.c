#include <stdio.h> //ligne d'inclusion de la bibliothèque stdio.h, directive de preprocesseur

void ft_print_alphabet(void) 
{
    char ch; // déclaration de la variable ch de type char
    ch = 'z'; // affectation de la valeur 'z' à la variable ch
    while (ch >= 'a') // boucle while qui s'exécute tant que la valeur de la variable ch est supérieur ou égale à 'a'
    {
	write(1, &ch, 1); // write est une fonction qui permet d'écrire un message sur la sortie standard
        ch--; // incrémentation de la valeur de la variable ch
    }
}

int main(void)
{
    ft_print_alphabet(); // appel de la fonction ft_print_alphabet
    return (0); // retourne 0
}
