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
	write(1, &c, 1); // File descriptor 1 corresponds to standard output
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main()
{
	// Example usage of functions from libdynamic.so

	// _putchar
	_putchar('H');
	_putchar('i');
	_putchar('\n');

	// _islower
	custom_putchar('0' + _islower('a')); // Should print '1'
	custom_putchar('0' + _islower('A')); // Should print '0'
	custom_putchar('\n');

	// _isalpha
	custom_putchar('0' + _isalpha('a')); // Should print '1'
	custom_putchar('0' + _isalpha('1')); // Should print '0'
	custom_putchar('\n');

	// _abs
	int absResult = _abs(-5);
	custom_putchar('0' + (absResult / 10)); // Should print '5'
	custom_putchar('0' + (absResult % 10)); // Should print '5'
	custom_putchar('\n');

	// _isupper
	custom_putchar('0' + _isupper('A')); // Should print '1'
	custom_putchar('0' + _isupper('a')); // Should print '0'
	custom_putchar('\n');

	// _isdigit
	custom_putchar('0' + _isdigit('5')); // Should print '1'
	custom_putchar('0' + _isdigit('a')); // Should print '0'
	custom_putchar('\n');

	// _strlen
	char str[] = "Hello, World!";
	int length = _strlen(str);
	custom_putchar('0' + (length / 10)); // Should print '1'
	custom_putchar('0' + (length % 10)); // Should print '3'
	custom_putchar('\n');

	// _puts
	_puts("Hello, Dynamic Library");

	// _strcpy
	char dest[20];
	_strcpy(dest, "Copy this!");
	_puts(dest);

	// _atoi
	int atoiResult = _atoi("123");
	custom_putchar('0' + (atoiResult / 100));		// Should print '1'
	custom_putchar('0' + ((atoiResult / 10) % 10)); // Should print '2'
	custom_putchar('0' + (atoiResult % 10));		// Should print '3'
	custom_putchar('\n');

	// _strcat
	char destCat[30] = "Hello, ";
	_strcat(destCat, "World!");
	_puts(destCat);

	// _strncat
	char destNcat[30] = "Hello, ";
	_strncat(destNcat, "World!", 3);
	_puts(destNcat); // Should print "Hello, Wor"

	// _strncpy
	char destNcpy[30];
	_strncpy(destNcpy, "Copy this!", 7);
	_puts(destNcpy); // Should print "Copy th"

	// _strcmp
	int strcmpResult = _strcmp("abc", "abcd");
	custom_putchar('0' + (strcmpResult / 100));				 // Should print '-'
	custom_putchar('0' + (((strcmpResult * -1) / 10) % 10)); // Should print '3'
	custom_putchar('0' + ((strcmpResult * -1) % 10));		 // Should print '2'
	custom_putchar('\n');

	// _memset
	char memSetArr[10];
	_memset(memSetArr, '*', 5);
	_puts(memSetArr); // Should print "*****"

	// _memcpy
	char srcMemCpy[5] = "12345";
	char destMemCpy[5];
	_memcpy(destMemCpy, srcMemCpy, 5);
	_puts(destMemCpy); // Should print "12345"

	// _strchr
	char haystack[] = "Find me!";
	char *foundChar = _strchr(haystack, 'm');
	_puts(foundChar); // Should print "me!"

	// _strspn
	char spanStr[] = "12345";
	char acceptStr[] = "123";
	int strspnResult = _strspn(spanStr, acceptStr);
	custom_putchar('0' + (strspnResult / 10)); // Should print '3'
	custom_putchar('0' + (strspnResult % 10)); // Should print '0'
	custom_putchar('\n');

	// _strpbrk
	char pbrkStr[] = "abcde";
	char acceptPbrk[] = "xyzb";
	char *foundPbrk = _strpbrk(pbrkStr, acceptPbrk);
	_puts(foundPbrk); // Should print "bc"

	// _strstr
	char haystackStr[] = "Hello, World!";
	char needleStr[] = "World";
	char *foundStr = _strstr(haystackStr, needleStr);
	_puts(foundStr); // Should print "World!"

	return 0;
}
