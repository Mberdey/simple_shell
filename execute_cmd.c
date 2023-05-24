#include "my_shell.h"

/**
 * exect_cmd - Execute a command
 * @cmd: The command to execute
 * @argv: The program name and command line arguments
 * @path_var: The value of the PATH environment variable
 */

void exect_cmd(char *cmd, char **argv, char *path_var)
{
	char *fin, *item;
	/*Tokenize the command into arguments*/
	char **args = malloc((BUFFER_SIZE + 1) * sizeof(char *));
	int arg_count = 0;

	/*Trim leading whitespace*/
	while (isspace(*cmd))
	{
		cmd++;
	}

	/*Trim trailing whitespace*/
	fin = cmd + my_strlen(cmd) - 1;
	while (fin > cmd && isspace(*fin))
	{
	fin--;
	}
		*(fin + 1) = '\0';
		item = strtok(cmd, " ");
		while (item != NULL)
	{
		args[arg_count++] = item;
	item = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	if (is_builtin_cmvd(args[0]))
		execute_builtin_cmvd(args);
	else
		execut_exter_cmd(args[0], args, path_var, argv);

	free(args);
}
