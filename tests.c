#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int main(void)
{
	int				original_count;
	int				new_count;
	int				wins;
	unsigned int	handshakes;
	char			*name = "Joonatan";

	// String tests
	printf("-----------");
	printf("\ninput: Hello World!\n\n");
	printf("original: ");
	original_count = printf("Hello World!\n");
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Hello World!\n");
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	printf("\ninput: Hello %%s\n\n");
	printf("original: ");
	original_count = printf("Hello %s\n", name);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Hello %s\n", name);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	printf("\ninput: Hello %%c\n\n");
	printf("original: ");
	original_count = printf("Hello %c\n", name[0]);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Hello %c\n", name[0]);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	printf("\ninput: Hello %%s%%c%%i (no spaces, diff variables)\n\n");
	printf("original: ");
	original_count = printf("Hello %s%c%i\n", name, name[0], new_count);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Hello %s%c%i\n", name, name[0], new_count);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	// Decimal tests
	wins = 420;
	printf("\ninput: wins this year: %%d\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	wins = -420;
	printf("\ninput: wins this year: %%d\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	wins = 0;
	printf("\ninput: wins this year: %%d\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	// Unsigned int test
	handshakes = 0;
	printf("\ninput: handshakes for wins this year: %%u\n\n");
	printf("original: ");
	original_count = printf("handshakes for wins this year: %u\n", handshakes);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("handshakes for wins this year: %u\n", handshakes);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	handshakes = UINT_MAX;
	printf("\ninput: handshakes for wins this year: %%u\n\n");
	printf("original: ");
	original_count = printf("handshakes for wins this year: %u\n", handshakes);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("handshakes for wins this year: %u\n", handshakes);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	// Pointer test //TODO
	printf("\ninput: handshakes for wins this year: %p\n\n", &handshakes);
	printf("original: ");
	original_count = printf("handshakes for wins this year: % k \n");
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("handshakes for wins this year: % k \n");
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	// Weird behaviour test
	printf("\ninput: handshakes for wins this year: %%  (space after %%)\n\n");
	printf("original: ");
	original_count = printf("handshakes for wins this year: % k \n");
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("handshakes for wins this year: % k \n");
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");
	

	return (0);
}