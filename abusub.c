#include "monty.h"
/**
 * file_sub- sustration
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
void file_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int substack, nodes;

	aux = *h;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fileprint(stderr, "L%d: can't sub, stack too short\n", counter);
		fileclose(bus.file);
		free(bus.content);
		free_stack(*h)
		exit(EXIT_FAILURE);
	}
aux = *h;
substack = aux->next->n - aux->n;
aux->next->n = substack;
*head = aux->next;
free(aux);
}
