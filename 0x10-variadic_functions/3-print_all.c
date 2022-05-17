#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0;
	char *k;
	char *sep = ", ";

	va_start(list, format);

	while ((format != NULL) && *(format + x) != '\0')
	{
		switch (*(format + x))
		{
			case 's':  /* this the string */
				k = va_arg(list, char *);
				k = (k != NULL) ? k : "(nil)";
				printf("%s", k);
				break;
			case 'i':  /* in this case the int */
				printf("%i", va_arg(list, int));
				break;
			case 'c':  /* this is the char */
				printf("%c", va_arg(list, int));
				break;
			case 'f':  /* for this case this is the float */
				printf("%f", va_arg(list, double));
				break;
			default:
				x++;
				continue;
		}
		if (*(format + x + 1) != 0)
		{
			printf("%s", sep);
		}
		x++;
	}
	putchar(10);
	va_end(list);
