#include "monty.h"
/**
 * file_pstring - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
void file_pstring(stack_t *head; unsigned int counter)
{
	stack_t *head;
	(void)counter;

	head = *head;
	while(head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		print("%c", head->n);
		head = head->next;
	}
	print("\n");
}
