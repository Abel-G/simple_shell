#ifndef MAIN_FUNCTION_SIMPLE_SHELL_H
#define MAIN_FUNCTION_SIMPLE_SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
int loop(char *envp[], char *copy_PATH, char *copy_PWD, char *get_stdin);
void env(char *envp[]);
void setenvironment(char *argv[]);
void unsetenvironment(char *argv[]);
char *_getline(char *buffercopy);
void mygetline_fn(char *buffer);
int lengthcounter(char *str);
void prompt_icon(void);
void _write_to_STDOUT(char *_input);
int _strcmp(char *f_string, char *s_string);
char *_changegetlength(char *src);
int _process(char *argv[], char *path);
void separator_getline(char *argv[], char *string);
char *_strncpy_fromn(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
void does_file_exist(char *path, char *cmd[]);
void _strcat(char *list, char *executable);
void separator_PATH(char *list[], char *path);
void copy_from_envp(char *copy_PATH, char *copy_PWD, char *envp[]);
int _hash_checker(char *f_char);
void change_directory(char *argv[], char *copy_PWD);
void echo_commands(char *argv[], int status);
int _dollar_checker(char *f_char);
void _iota(int value, char *numberArray);
int _atoi(char *string);
int _is_digit(char *string);
char *_strtok(char *line, char *delim)
#endif /* MAIN_FUNCTION_SIMPLE_SHELL_H */

