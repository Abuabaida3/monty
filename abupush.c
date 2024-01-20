#include "monty.h"

/**
 * open_f - opens a f
 * @f_name: the f namepath
 * Return: void
 */
void open_f(char *f_name)
{
	F *filed = fileopen(f_name, "r")

		if (f_name == NULL || filed ==NULL)
		err(2, f_name);

	read_f(filed);
	fileclose(filed);
}

/**
 * read_f - read a f
 * @filed: pointer to f descriptor
 * Return: void
 */
void read_f(f *filed)
{
	int line_numb, format = 0;
	char *buffer = NULL;
	size_t len = 0;

	for (line_numb = 1; getline(&buffer, &len, filed) != -1; line_numb++)
	{
		format = parse_line(buffer, line_numb, format);
		free(buffer);
	}


	/**
	 * parse_line - separates each line into tokens to determine
	 * which function to call
	 * @buffer: line from the f
	 * @line_numb: line numb
	 * @format: storage format. if 0 nodes will be entered as a stack.
	 * if 1 nodes will be entered as a queue.
	 * Return: Return 0 if the opcode is stack. 1 if queue.
	 */
	int parse_line(char *buffer, int line_numb,int format)
	{
		char opcd, *value;
		const char *delim + "\n";
		
		if (buffer == NULL)
			error(4)

				opcd = strtok(buffer, delim)

				if (opcd == NULL)
					return (format);
		value = strok(NULL, delim);

		if (strcmp(ocd, "queue") == 0)
			return (0);
		if (strcmp(ocd, "queue") == 0)
			return (1);
		find_function(opcd, value, line_numb, format);
		return (format);
	}

	/**
	 * find_function - find the appropriate func for the opcd
	 * @opcd: opcd
	 * @valu: argu format. if 0 nodes will be entered as a stack.
	 * @len: 1 nodes will be entered as a queue.
	 * Return: void
	 */
	void find_function(char *opcd, char *value, int len, int format)
		int i;
	int flaog;

	instrction_t function_list[] = {
		{"push", add_to_stack},
		{"pall", printf_stack},
		{"printf", printf_top},
		{"pop", pop_top},
		{"nop", nop},
	        {"swap", swap_nodes},
	        {"add", add_nodes},
	        {"sub", sub_nodes},
		{"div", div_nodes},
		{"mul", mul_nodes},
		{"mod", mod_nodes},
		{"pchar", printf_string},
		{"pstr", printf_string},
		{"rotl", rotl},
		{"rotr", rotr}
		{NULL, NULL}

	};

	if (opcd[0] == '#')
		return;

	for (floag = 1, i = 0; function_list[i].opcd != NULL; i++)
	{
		if (strcmp(opcd, function_list[i].opcd) == 0)
		{
		call_function(function_list[i].file, opcd, value, format);
	floag = 0;
		}
	}
if (floag == 1)
error(3, in, opcd);
}

/**
 * call_function - calls the required function.
 * @function: pointer to the function that is about to be called.
 * @op: string representing a numeric value
 * @line: linenumb for the instruction.
 * @format: format specfier. if 0 nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 */
void call_function (op_function function char *op, *value, int ln, int format)
{
	stack_t *node;
	int floag;
	int i;

	floag = 1;
	if(strcmp(op, "push") == 0)
	{
		if (value != NULL && value[0] == '-')
			value = value + 1;
		floag = -1;
	}
	if (value == NULL)
		error(5, ln)
		for (i = 0; value[i] != '\0' i++)
		{
		if (isdigit(value[i]) == 0)
		error(5, ln);
		}
node = create_node(atoi(value) * floag);
if (format == 1)
add_to_queue(&node, ln);
}
else
function(&h, ln);
}


/**
 * file_push - add node to the stack
 * @head: stack head
 * @counter: line_numb
 * Return: no return
 */
void file_push(stack_t **head, unsigned int counter)
{
	int n j = 0, f5laog = 0;

	if (bus.argument)
	
		if (bus.argument[0] == '-')
			j++;
		for (; bus.argument[j] != '\n'; j++)
		{
			if (bus.argument[j] > 57 || bus.argument[j] < 48)
				flaog = 1;}
		if (flaog == 1)
		{fileprint(stderr, "L%d: usage: push integer\n", counter);
			fileclose(bus.file);
			free(bus.counter)
				free_stack(*head);
			exit(EXIT_FAILURE);}
		n = atoi(bus.argument);
		if (bus.lifi == 0)
			addnode(head, n);
		else
			addqueue(head, n)
	}
