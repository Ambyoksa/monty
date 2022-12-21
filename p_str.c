
yonasleykun27
/
monty
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
monty/p_str.c
@yonasleykun27
yonasleykun27 all tasks
 1 contributor
27 lines (25 sloc)  404 Bytes
#include "monty.h"

/**
* f_pstr - function that prints the string starting at the top of the stack,
* followed by a new
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
