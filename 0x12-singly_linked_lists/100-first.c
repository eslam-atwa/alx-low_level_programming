#include <stdio.h>
void num1(void) __attribute__ ((constructor));
/**
 * num1 - excutes before the main function.
 */
void num1(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
