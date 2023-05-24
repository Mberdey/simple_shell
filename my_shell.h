#ifndef _SHELL_H_
#define _SHELL_H_

/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Function Prototypes */
void handle_cd(char **args);
void execute_builtin_cmvd(char **args);
void handle_exit(char **args);
void handle_sigint(__attribute__((unused))int signum);
void generate_prompt(void);
int main(__attribute__((unused))int argc, char **argv);
int is_builtin_cmvd(const char *command);
int check_cmd_path(const char *cmvd, char *cmd_path, char *path_var);
void store_path_var(char **path_var);
void exect_cmd(char *cmd, char **argv, char *path_var);

#endif
