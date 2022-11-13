#include "main.h"

/**
* main -  created a simple shell
* @argc: argument count.
* @argv: argument vector.
* @env: environmentalvariables
* Return: 0 on success.
*/
int main(int argc, char **argv, char **env)
{
    (void)argc;
    (void)argv;
    prompt(env);

    return (0);
}