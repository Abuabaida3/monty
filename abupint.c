#include "monty.h"

/**
 * file_print - prints the top
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
void file_print(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fileprint(stderr,"L%u: can't print, stack empty\n", counter);
		fileprint(bus.file);
		free(bus.couent);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
