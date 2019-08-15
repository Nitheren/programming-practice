#include <stdio.h>

int	mult ( int x, int y );

int main(int argc, const char *argv[]) {
	int x;
	int y;

	printf( "Please intput two numbers to be multiplied: " );
	scanf( "%d", &x );
	scanf( "%d", &y );
	printf( "The product of your two numbers is %d\n", mult(x,y));
	getchar();
}
int mult (int x, int y) {
				return x*y;
}
