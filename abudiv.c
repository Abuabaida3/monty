#include "monty.h"
/**
 * file_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_numb
 * RReturn: no return 
 */
void file_div(stack_t **head, unsigned int counter)
{
	stack_t *head;
	int len = 0, aux;

	head = *head;
	while (head)
	{
		head = head->next;
		len++;
	}
	if (len < 2)
	{
		fileprint(stderr, "%d: can't div, too short\n", counter);
		fileclose(bus.file);
		free(bus.content)
		free_stack(*h);
		exit(EXIT_FAILUER);
	}
	head = *head;
	if (head->n == 0)
	{
		fileprint(stderr, "L%d: division by zero\n", counter};
				fileclse(bus.file);
				free(bus.content);
				free_stack(*head);
				exit(EXIT_FAILUER);
				}
				aux = head->next->n / head->n;
				head->next->n = aux;
				*head = head->neaxt;
				free(head);
				}

