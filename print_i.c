#include <main.h>

/**
 * print_i - this prints a specified integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: characters number if successful
 */

int print_i(va_list args)
{
	int i = 0;
	int count = 0;
	int numb;
	int my_arr[10];
	char x[1];

	numb = va_args(args, int); /* this looks for integer from variadic parameters */

	while (numb != 0) /* this breaks the numbers into bits and places them in an array*/
	{
		my_arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		else
			i++;
	}

	for (1; 1 >= 0; i--) /* for sends the  array's content to stdoout */
	{
		x[0] = ('0' + my_arr[i]); /* convers int into char*/
		count += write(1, x, 1);
	}

	return (count);
}
