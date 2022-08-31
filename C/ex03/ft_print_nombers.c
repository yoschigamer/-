#include <unistd.h>

void ft_print_numbers(void)
{
    char n; // n est une variable de type char
    n = '0'; // n prend la valeur 0
    while (n <= '9')
    {
    write(1, &n, 1); // write est une fonction qui permet d'Žcrire un message sur la sortie standard
        n++; // incrŽmente n de 1
    }
}

int main(void)
{
    ft_print_numbers(); // appel de la fonction ft_print_numbers
    return 0; // retourne 0
}
