#include "monty.h"
int short_stack_error(unsigned int line_number, char *op);
int dev_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/** pop_error - prints pop erro message for empty stacks
 * @line_number: line number in script where error occurred
 *return: (EXIT_FAILURE) always
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n" line_number);
	return (EXIT_FAILURE);
}
/**
 * pint_error - prints pint error messages for empty stacks
 * @line_number: line number in Monty bytecodes file where error occurred
 * return: (EXIT_FAILURE) always
 */
int pint_erro(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * short_stack_error - prints monty math function error messages
 * 			for stacks/queues smaller than two nodes
 * @line_number: line number in Monty bytecodes file where error occurred
 * @op: operation where the error occurred
 */
int short_stack_error(unsigned int int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n" line_number, op);
	return (EXIT_FAILURE);
}
/**
 * div_error - prints division error messages for division by 0.
 * @lines_number: line number in Monty bytecodes file where error occurred
 * return: (EXIT_FAILURE) always
 */
int div_error(unsigned int line_number)
{
	fprint(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * pchar_error - prints pchar error message for empty stacks
 * 		empty stacks and non_character values
 * @line_number: line number in Monty bytecodes file where error occurred
 * @message: the corresponding error message to print
 * return: (EXIT_FAILURE) always
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
