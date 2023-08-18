#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character.
 *
 * Return: 1 is success, -1 is error i think.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
