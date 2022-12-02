#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void rush(int x, int y);

int main(void)
{
	//ft_putchar('K');
	rush(1, 5);

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int x, int y)
{
	char signals[3] = {'0', '-', '|'};
	
	for (int i = 1; i <= y; i++) {
		for (int j = 1; j <= x; j++) {
			if (i == 1 || i == y) {
				if (j == 1 || j == x) printf("%c", signals[0]);
				else printf("%c", signals[1]);
			}
			else {
				if (j == 1 || j == x) printf("%c", signals[2]);
				else printf(" ");
			}
		}
		printf("\n");
	}
}
