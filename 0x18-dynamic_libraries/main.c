#include <unistd.h>
#include "main.h"

/**
 * custom_putchar - Writes a character to standard output
 * @c: The character to write
 *
 * Return: void
 */
void custom_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main()
{
	_putchar('H');
	_putchar('i');
	_putchar('\n');

	custom_putchar('0' + _islower('a'));
	custom_putchar('0' + _islower('A'));
	custom_putchar('\n');

	custom_putchar('0' + _isalpha('a'));
	custom_putchar('0' + _isalpha('1'));
	custom_putchar('\n');

	int absResult = _abs(-5);
	custom_putchar('0' + (absResult / 10));
	custom_putchar('0' + (absResult % 10));
	custom_putchar('\n');

	custom_putchar('0' + _isupper('A'));
	custom_putchar('0' + _isupper('a'));
	custom_putchar('\n');

	custom_putchar('0' + _isdigit('5'));
	custom_putchar('0' + _isdigit('a'));
	custom_putchar('\n');

	char str[] = "Hello, World!";
	int length = _strlen(str);
	custom_putchar('0' + (length / 10));
	custom_putchar('0' + (length % 10));
	custom_putchar('\n');

	_puts("Hello, Dynamic Library");

	char dest[20];
	_strcpy(dest, "Copy this!");
	_puts(dest);

	int atoiResult = _atoi("123");
	custom_putchar('0' + (atoiResult / 100));
	custom_putchar('0' + ((atoiResult / 10) % 10));
	custom_putchar('0' + (atoiResult % 10));
	custom_putchar('\n');

	char destCat[30] = "Hello, ";
	_strcat(destCat, "World!");
	_puts(destCat);

	char destNcat[30] = "Hello, ";
	_strncat(destNcat, "World!", 3);
	_puts(destNcat);

	char destNcpy[30];
	_strncpy(destNcpy, "Copy this!", 7);
	_puts(destNcpy);

	int strcmpResult = _strcmp("abc", "abcd");
	custom_putchar('0' + (strcmpResult / 100));
	custom_putchar('0' + (((strcmpResult * -1) / 10) % 10));
	custom_putchar('0' + ((strcmpResult * -1) % 10));
	custom_putchar('\n');

	char memSetArr[10];
	_memset(memSetArr, '*', 5);
	_puts(memSetArr);

	char srcMemCpy[5] = "12345";
	char destMemCpy[5];
	_memcpy(destMemCpy, srcMemCpy, 5);
	_puts(destMemCpy);

	char haystack[] = "Find me!";
	char *foundChar = _strchr(haystack, 'm');
	_puts(foundChar);

	char spanStr[] = "12345";
	char acceptStr[] = "123";
	int strspnResult = _strspn(spanStr, acceptStr);
	custom_putchar('0' + (strspnResult / 10));
	custom_putchar('0' + (strspnResult % 10));
	custom_putchar('\n');

	char pbrkStr[] = "abcde";
	char acceptPbrk[] = "xyzb";
	char *foundPbrk = _strpbrk(pbrkStr, acceptPbrk);
	_puts(foundPbrk);

	char haystackStr[] = "Hello, World!";
	char needleStr[] = "World";
	char *foundStr = _strstr(haystackStr, needleStr);
	_puts(foundStr);

	return 0;
}
