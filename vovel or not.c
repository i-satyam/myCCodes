#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf( " Enter any Character : " );
	scanf( "%c", &ch );
	switch( ch )
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
printf( "%c is Vowel.\n", ch );
	break;
default :
			printf( "%c is not a Vowel.\n", ch );
			break;
	}
	return 0;
}

