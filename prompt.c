#include "my_shell.h"

/**
 * generate_prompt - Generate the shell prompt
 * by Mourad Berdey
 */


void generate_prompt(void)
{
	/*Check if reading from a terminal*/
	if (isatty(STDIN_FILENO))
	{
		my_putstring("shellMate$ ");
	}
}