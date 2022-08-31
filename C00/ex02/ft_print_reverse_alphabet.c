#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    for(int i = 0 ; i < 26 ; i++)
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_reverse_alphabet();
}
