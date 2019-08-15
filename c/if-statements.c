/*>     greater than              5 > 4 is TRUE
<     less than                 4 < 5 is TRUE
>=    greater than or equal     4 >= 4 is TRUE
<=    less than or equal        3 <= 4 is TRUE
==    equal to                  5 == 5 is TRUE
!=    not equal to              5 != 4 is TRUE*/

#include <stdio.h>
int main(int argc, const char *argv[])
{
	int age; 
	printf ("Please enter your age: ");
	scanf ("%d", &age);
	if (age < 200) {
		printf ("You are pretty young!\n");
	}
	else if (age == 100) {
		printf ("You are old!\n");
	}
	else {
		printf ("You are really old!\n");
	}
	return 0;
}
