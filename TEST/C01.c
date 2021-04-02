ex00
#include<stdio.h>
#include"./ft_ft.c"
int	main(void)
{
	int c;
	ft_ft(&c);
	printf("%d", c);
}

ex01
#include<stdio.h>
int	main(void)
{
	int a = 10;
	int *pa = &a;
	int **pp = &pa;

	printf("a = %d\n", **pp);
	return 0;
}

ex02
#include<stdio.h>
int	main(void)
{
	int *a;
	int *b;
	int z;
	int y;

	y = 45;
	z = 21;
	a = &z;
	b = &y;
	ft_swap(a, b);
	printf("%d", *a);
}


ex06
#include <stdio.h>
int main(void)
{
	printf("%d", ft_strlen("bonjour"));
	return 0;
}


ex07
#include <stdio.h>
int main(void)
{
	int tail = 5;
	int arr[tail];
	arr[0] = 2;
	arr[1] = 8;
	arr[2] = 10;
	arr[3] = 15;
	arr[4] = 18;
	ft_sort_int_tab(arr, tail);
	printf("%d, ", arr[0]);
	printf("%d, ", arr[1]);
	printf("%d, ", arr[2]);
	printf("%d, ", arr[3]);
	printf("%d", arr[4]);
}
