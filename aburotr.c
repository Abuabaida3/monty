#include "monty.h"
/**
 * rotr - Rotates the last node of the stack to the top.
 * @stack: pointer to a pointer to top node of the stack.
 * @ln: tnteger representing  the line numb of the opcode.
 */
void rotring(stack_t **stack,__attribute__((unsigned))unsigned int in)
{
	stack_t *tmpting;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	*tmpting = *stack;

	while (tmpting->next)

	tmpting  = tmpting->next;

tmpting->next = *stack;
tmpting->prev->next = NULL;
tmpting->prev = NULL;
(*stack)->prev = tmpting;
(*stack) = tmpting
}
