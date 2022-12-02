#include <unistd.h>

void ft_print_numbers(void);

int main(void)
{
	ft_print_numbers();

	 return 0;
}

void ft_print_numbers(void)
{
	char num_arr[10] = {'0','1','2','3','4','5','6','7','8','9'};

	int i;
	i  = 0;

	while (i < 10)
	{
		write(1, &num_arr[i], 1);
		i++;
	}
}
