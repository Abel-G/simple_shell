#include "main.h"
/**
* thefreer - frees malloc
* @copy_path : to be freed
* @copycmd: to be freeed
* @temp: to be freed
* Return: void
*/
void thefreer(char *copy_path, char *copycmd, char *temp)
{
free(copy_path);
free(copycmd);
free(temp);
}
/**
* does_file_exist - check if file exist
* it appends the cmd to different paths provided
* by path which is copied from the environment
* variable PATH and uses access function to find
* if the file exist or not
* @path: copy of path from the envp main function
* argument
* @cmd: Gets the command picked by getline
* and each command saved in array of pointers
* by removing space using stktok function
* function updates right path for excve
* Return: void
*/
void does_file_exist(char *path, char *cmd[])
{
char *copy_path, *list[100] = {NULL}, *append[100] = {NULL};
char *slash = "/", *temp, **temp2 = cmd, *copycmd;
int m, i;
copycmd = malloc(sizeof(char *) * 100);
copy_path = malloc(sizeof(char *) * 100);
_strcpy(copy_path, path);
_strcpy(copycmd, cmd[0]);
separator_PATH(list, copy_path);
if (_strcmp(copycmd, "ls") == 0)
{
for (m = 0; list[m] != NULL; m++)
{
temp = malloc(sizeof(char *) * (lengthcounter(list[m]) + 2));
_strcpy(temp, list[m]);
_strcat(temp, slash);
_strcat(temp, cmd[0]);
append[m] = temp;
}
}
else
{
for (m = 0; list[m] != NULL; m++)
{
temp = malloc(sizeof(char *) * 100);
_strcat(temp, cmd[0]);
append[m] = temp;
}
}
for (i = 0; append[i] != NULL; i++)
{
if (access(append[i], F_OK) == 0)
{
*temp2 = append[i];
return;
}
}
thefreer(copy_path, copycmd, temp);
}
