#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main(void)
{
	ft_print_reverse_alphabet();

	return 0;
}

void ft_print_reverse_alphabet(void)
{
	int num;
	num = 122;

	while(num > 96)
	{
		write(1, &num, 1);
		num--;
	}

}
