#include <unistd.h> //ligne d'inclusion de la bibliothèque stdio.h, directive de preprocesseur

void ft_is_negative(int n) 
{
    (n < 0) ? write(1, "N",1) : write(1, "P",1) ;  // si n est inférieur à 0, alors on affiche N, sinon on affiche P
}

int main()
{
    ft_is_negative(-10); // affiche N
    return 0; // 0 est la valeur de retour de la fonction main
}
