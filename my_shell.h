#ifndef _SHELL_H_
#define _SHELL_H_

/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void print_prompt();
char *read_input();
void execute_command(char *command);
void handle_errors();

#endif
