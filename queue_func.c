#include "monty.h"
/**
 * f_queue - sets the format of the data to a queue (FIFO)
 * @stack: dbl ptr to the beginnning of the stack
 * @line_number: script line number
 * Return: void.
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var.queue = QUEUE;
}

