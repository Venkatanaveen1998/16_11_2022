#include<stdio.h>
int swap_nibbles(int n)
{
	n=((n & 0x0f)<<4 | (n & 0xf0)>>4);
}
int main()
{
	int n;
	printf("enter the number u required\n");
	scanf("%d",&n);
	printf("%u\n",swap_nibbles(n));
}
