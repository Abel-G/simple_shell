#include "main.h"
/**
 * echo_commands - three types of
 * echo commands are dealt here
 * echo $$
 * echo $?
 * echo $ plus enviornment variables
 *
 * @argv: commands with argument
 * listed separatedly as a char of pointers
 *
 * @status: get return status from
 * the process file
 *
 * Return: void
 */
void echo_commands(char *argv[], int status)
{
	char *dest;
	pid_t pid = getpid();
	char *copystatus;
	char *copypid;
	int newlinelength = lengthcounter("\n");

	dest = malloc(sizeof(char *) * 100);
	copystatus = malloc(sizeof(char *) * 100);
	copypid = malloc(sizeof(char *) * 100);

	_iota(status, copystatus);
	_iota((int)pid, copypid);
	_strncpy_fromn(dest, argv[1],  1);
	if  (_strcmp("$", dest) == 0)

	{
		write(STDOUT_FILENO, copypid, sizeof(copypid));
		write(STDOUT_FILENO, "\n", newlinelength);
	}
	else if (_strcmp("?", dest) == 0)
	{
		write(STDOUT_FILENO, copystatus, sizeof(copystatus));
		write(STDOUT_FILENO, "\n", newlinelength);
	}
	else if (getenv(dest) != NULL)
		_write_to_STDOUT(getenv(dest));
	free(dest);
	free(copypid);
}

