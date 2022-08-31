#include <unistd.h>

void ft_print_number(void)
{
    int c = '0';
    for(int i = 0 ; i < 10 ; i++)
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_number();
}