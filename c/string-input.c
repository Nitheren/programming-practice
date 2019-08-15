#include <stdio.h>
#define MAX_LIMIT 20
int main(int argc, const char *argv[])
{
	//char str [20];
	char str [MAX_LIMIT];
	printf ("Please enter a string: ");
	//scanf ("%[^\n]%*c", str);
	fgets(str, MAX_LIMIT, stdin);
	printf ("this is your string: %s\n", str); 

	return 0;
}
