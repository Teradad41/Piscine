#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
        ft_is_negative(-3);

	return 0;
}

void ft_is_negative(int n)
{
	char p_or_n[2] = {'P', 'N'};

	if (n >= 0) {
		write(1, &p_or_n[0], 1);
	} else write(1, &p_or_n[1], 1);

}
