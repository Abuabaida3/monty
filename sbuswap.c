#include "monty.h"
/**
 * file_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
void file_swap(stack_t **head, unsigned int counter)
{
	stack_t *head;
	int ln, = aux;

	head = *head;
	while (head)
	{

		head = head->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't swap stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head = *head;
	aux = head->n;
	head->n = head-next->n;
	head->next->n = aux;
}
