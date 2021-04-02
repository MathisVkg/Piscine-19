ex00
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n", ft_strcmp("abc", "abc"));
    printf("%d\n", ft_strcmp("wxa", "wx"));
	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", strcmp("wxa", "wx"));
}


ex01
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "pomme";

    printf("mine ->%d\n", ft_strncmp(str, "poire", 3));
	printf("real ->%d\n", strncmp(str, "poire", 3));
}


ex02
#include <stdio.h>
#include <string.h>
int main() 
{
	char src[15] = "mashala ";
	char dest[15] = "frero";
	char src1[20] = "mashala ";
	char dest2[20] = "freroooo";
	
	printf("mine -> %s\n", ft_strcat(src, dest));
	printf("real -> %s\n", strcat(src1, dest2));
}

ex03
#include <stdio.h>
#include <string.h>
int main() 
{
	char src[20] = "mashala ";
	char dest[20] = "freroooo";
	char src1[20] = "mashala ";
	char dest2[20] = "freroooo";

	printf("mine -> %s\n", ft_strncat(src, dest, 6));
	printf("real -> %s\n", strncat(src1, dest2, 6));
}


ex04
#include <stdio.h>
#include <string.h>
int main()
{
	char m1[50] = "mashala chicha a la pomme vanille";
	char m2[50] = "chicha";
	char m3[50] = "mashala chicha a la pomme vanille";
	char m4[50] = "chicha";

	printf("mine ->%s\n", ft_strstr(m1, m2));
	printf("real ->%s\n", strstr(m3, m4));
}


ex05
#include <stdio.h>
#include <bsd/string.h>
int main() 
{
	char src[20] = "mashala"; //6
	char dest[20] = "frerooooooo"; //11
	char src1[20] = "mashala"; //6
	char dest2[20] = "frerooooooo"; //11

	printf("mine -> %u\n", ft_strlcat(src, dest, 11));
	printf("real -> %zu\n", strlcat(src1, dest2, 11));
}
// gcc -Wall -Wextra -Werror -lbsd *.c && ./a.out