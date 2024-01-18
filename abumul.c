#include "monty.h"
/**
 * file_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
  void file_mul(stack_t **head, unsigned int counter)
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
	fileprint(stderr, "L%d: can't mul, stack too\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
head = *head;
aux = head->next->n * head->n;
*head = head->n = aux;
*head = head->next;
free(head);
}
