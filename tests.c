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
	void			*ptr;

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

	printf("\ninput: Hello %%%%%% (percent case)\n\n");
	printf("original: ");
	original_count = printf("Hello %%%%%%\n");
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Hello %%%%%%\n");
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	// Decimal tests
	wins = 420;
	printf("\ninput: wins this year: %%d (positive integer)\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	wins = -420;
	printf("\ninput: wins this year: %%d (negative integer)\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	wins = INT_MAX;
	printf("\ninput: wins this year: %%d (int max)\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	wins = INT_MIN;
	printf("\ninput: wins this year: %%d (int min)\n\n");
	printf("original: ");
	original_count = printf("Wins this year: %d\n", wins);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("Wins this year: %d\n", wins);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	wins = 0;
	printf("\ninput: wins this year: %%d (0)\n\n");
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
	printf("\ninput: handshakes for wins this year: %%u (0)\n\n");
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

	// Pointer test
	ptr = NULL;
	printf("\ninput: handshakes for wins this year: %%p\n\n", &handshakes);
	printf("original: ");
	original_count = printf("handshakes for wins this year: %p\n", ptr);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("handshakes for wins this year: %p\n", ptr);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	ptr = &wins;
	printf("\ninput: handshakes for wins this year: %%p\n\n");
	printf("original: ");
	original_count = printf("handshakes for wins this year: %p\n", ptr);
	printf("original: %d\n", original_count);
	printf("ftprintf: ");
	fflush(stdout);
	new_count = ft_printf("handshakes for wins this year: %p\n", ptr);
	printf("ftprintf: %d\n", new_count);
	printf("-----------\n");

	// Hexadecimal lowercase %x tests
    printf("\ninput: hex value: %%x\n\n");
    printf("original: ");
    original_count = printf("hex value: %x\n", 0);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("hex value: %x\n", 0);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

    printf("\ninput: hex value: %%x\n\n");
    printf("original: ");
    original_count = printf("hex value: %x\n", 255);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("hex value: %x\n", 255);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

    printf("\ninput: hex value: %%x\n\n");
    printf("original: ");
    original_count = printf("hex value: %x\n", 4294967295U);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("hex value: %x\n", 4294967295U);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

    printf("\ninput: hex value: %%x\n\n");
    printf("original: ");
    original_count = printf("hex value: %x\n", 42);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("hex value: %x\n", 42);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

	// Hexadecimal uppercase %X tests 
    printf("\ninput: HEX value: %%X\n\n");
    printf("original: ");
    original_count = printf("HEX value: %X\n", 0);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("HEX value: %X\n", 0);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

    printf("\ninput: HEX value: %%X\n\n");
    printf("original: ");
    original_count = printf("HEX value: %X\n", 255);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("HEX value: %X\n", 255);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

    printf("\ninput: HEX value: %%X\n\n");
    printf("original: ");
    original_count = printf("HEX value: %X\n", 4294967295U);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("HEX value: %X\n", 4294967295U);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

    printf("\ninput: HEX value: %%X\n\n");
    printf("original: ");
    original_count = printf("HEX value: %X\n", 42);
    printf("original: %d\n", original_count);
    printf("ftprintf: ");
    fflush(stdout);
    new_count = ft_printf("HEX value: %X\n", 42);
    printf("ftprintf: %d\n", new_count);
    printf("-----------\n");

	// // Weird behaviour test
	// printf("\ninput: handshakes for wins this year: %%  (space after %%)\n\n");
	// printf("original: ");
	// original_count = printf("handshakes for wins this year: %k\n");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("handshakes for wins this year: %k\n");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");
	
	// //* Invalid conversion specifiers *
	// printf("\ninput: testing invalid specifier: %%k\n\n");
	// printf("original: ");
	// original_count = printf("testing invalid specifier: %k\n");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("testing invalid specifier: %k\n");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// printf("\ninput: testing invalid specifier: %%z\n\n");
	// printf("original: ");
	// original_count = printf("testing invalid specifier: %z\n");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("testing invalid specifier: %z\n");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Percent at end of string *
	// printf("\ninput: string ending with %%\n\n");
	// printf("original: ");
	// original_count = printf("string ending with %");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("string ending with %");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Multiple consecutive percents *
	// printf("\ninput: %%%%%%\n\n");
	// printf("original: ");
	// original_count = printf("%%%%%%\n");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("%%%%%%\n");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Empty string test *
	// printf("\ninput: (empty string)\n\n");
	// printf("original: ");
	// original_count = printf("");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* NULL string test *
	// printf("\ninput: NULL string with %%s\n\n");
	// printf("original: ");
	// original_count = printf("NULL test: %s\n", (char *)NULL);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("NULL test: %s\n", (char *)NULL);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Empty string with %s *
	// printf("\ninput: empty string with %%s\n\n");
	// printf("original: ");
	// original_count = printf("empty test: %s\n", "");
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("empty test: %s\n", "");
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Negative numbers with different formats *
	// printf("\ninput: negative with %%d\n\n");
	// printf("original: ");
	// original_count = printf("negative: %d\n", -2147483648);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("negative: %d\n", -2147483648);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// printf("\ninput: negative with %%i\n\n");
	// printf("original: ");
	// original_count = printf("negative: %i\n", -42);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("negative: %i\n", -42);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Very large unsigned number *
	// printf("\ninput: max unsigned with %%u\n\n");
	// printf("original: ");
	// original_count = printf("max unsigned: %u\n", 4294967295U);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("max unsigned: %u\n", 4294967295U);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Character edge cases *
	// printf("\ninput: null character %%c\n\n");
	// printf("original: ");
	// original_count = printf("null char: %c\n", '\0');
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("null char: %c\n", '\0');
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// printf("\ninput: newline character %%c\n\n");
	// printf("original: ");
	// original_count = printf("newline char: %c\n", '\n');
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("newline char: %c\n", '\n');
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* Zero values *
	// printf("\ninput: zero with %%x\n\n");
	// printf("original: ");
	// original_count = printf("zero hex: %x\n", 0);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("zero hex: %x\n", 0);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// printf("\ninput: zero with %%X\n\n");
	// printf("original: ");
	// original_count = printf("zero HEX: %X\n", 0);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("zero HEX: %X\n", 0);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	// //* NULL pointer *
	// printf("\ninput: NULL pointer with %%p\n\n");
	// printf("original: ");
	// original_count = printf("NULL pointer: %p\n", (void *)NULL);
	// printf("original: %d\n", original_count);
	// printf("ftprintf: ");
	// fflush(stdout);
	// new_count = ft_printf("NULL pointer: %p\n", (void *)NULL);
	// printf("ftprintf: %d\n", new_count);
	// printf("-----------\n");

	return (0);
}