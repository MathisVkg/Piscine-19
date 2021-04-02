ex00
#include <stdio.h>
int main()
{
	char a[25] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char b[25] = {'Y', 'e', 'l', 'l', 'o', '\0'};

	ft_strcpy(a, b);
	printf("%s", a);
}


ex01
#include <string.h>
#include <stdio.h>
int main () 
{
	char src[] = "mat";
	char dest[] = "matrixxxxx";
	ft_strncpy(dest, src, 10);
	printf("is        -->%s\n", dest);
	printf("should be -->%s",strncpy(dest, src, 10));	
	return(0);
}


ex02 -> ex06
#include <stdio.h>
int main()
{
    char str[] = "check";
    if (ft_str_is_alpha(str) == 1)
    {
        printf("Mashala frero");
    }
    else if (ft_str_is_alpha(str) == 0)
    {
        printf("C des chiffres zebi");
    }
}


ex07 -> ex09
#include <stdio.h>
int main()
{
	// char str[] = "YOZCTEA!9VY~$FCAT#$\n"
	// 				"J%,XR6.!#BQLHX#!M>     |V$\n"
	// 				"LQQY?Jo]:5 B6eC@LG#SlSJX~S5-6:0E1)%M$\n"
	// 				",E^7VO!UT]OI0R|GDP&F@?F$SQ^}&G)~$\n"
	// 				"[3R(O6#$\n"
	// 				"CG,TF$\n"
	// 				"5y7>1j:.Cc{Q?/PhvKUR1QDu/BY @U&Q$\n"
	// 				"GSDJG7;VOPT([$\n"
	// 				"NULL$";
	// printf("%s", ft_strcapitalize(str));
	char str[] = "salut, ComMent tu vas ? 42mots qUArante-Deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
