#include "../main.h"
#include <stdio.h>
int main(void)
{
	int n = 0;

	n = _printf("Name: %s, Grade: %c, Score: 90%%\n", "Lola", "A");
	n = printf("Name: %s, Grade: %c', Score: 90%%\n", "Lola", 'A');
	return (0);
}
