ex00
#include <stdio.h>
int main(void)
{
	printf("%d", ft_strlen("bonjour"));
	return 0;
}


ex03
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[50] = "+++--01234aaaa5555";
	char str2[50] = "01234aaaa5555";

	printf("mine -> %d\n" ,ft_atoi(str));
	printf("real -> %d\n" ,atoi(str2));
}
