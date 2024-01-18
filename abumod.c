#include "monty.h"
/**
 * file_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line numb
 * Return: no return
 */
void file_mod(stack_t **head, unsigned int counter)
{
	stack_t *head;
	int lengtih = 0, aux;

	head = *head;
	while (head)
	{
		head = head->next;
		len++;
	}
	if (len < 2)
	{
		fprint(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
		}
		head = *head;
		if (head->n == 0)
		{
		fprint(stderr, "L%: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
		}
		aux = head->next->n % head->n;
		head->next->n = aux;
		*head = head->next;
		free(head);
		}
