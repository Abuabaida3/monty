#include "monty.h"
/**
 * file_pop - prints the top
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
void file_pop(stack_t **head, unsigned int counter)
{
	stack_t *head;

	if (*head == NULL)
	{
		fileprint(stderr, "L%d: can't pop an empty stack\n", counter);
		fileclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head = *head;
	*head = head->next;
	free(head);
}
