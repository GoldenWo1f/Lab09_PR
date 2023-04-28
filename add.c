#include <stdio.h>

int main(){
	int n1, n2;
	print("input two numbers to add : ");
	scan("%d %d", &n1, &n2);
	print("result : %d\n", n1+n2);

	return 0;
}
