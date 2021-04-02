ex00
#include <stdio.h>
int main()
{
	char str[] = "salut";
	char *str1;

	str1 = ft_strdup(str);
	printf("%p,%s\n %p, %s",str, str, str1, str1);
}


ex01
#include <stdio.h>
int main()
{
	int *str;

	str = ft_range(0, 10);
	printf("%d\n", str[4]);	
}

ex02
#include <stdio.h>
int main()
{
    int *range;
    int size;

    size = ft_ultimate_range(&range, 0, 10);
    printf("size = %d\n",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    return (0);
}


ex03
#include <stdio.h>
int main(void)
{
    char *strs[3] = {"one", "two", "three"};
    char *sep = " ";
    
    printf("%s", ft_strjoin(3, strs, sep));
}

#include <stdio.h>
int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "one";
	strs[1] = "two";
	strs[2] = "three";
	strs[3] = "viva";
	strs[4] = "algerie";
	separator = "-";
	index = 0;
	while (index < 6)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d: |%s|\n", index, result);
		free(result);
		index++;
	}
}


ex04
#include <stdio.h>
int main(void)
{
    char *nbr = "  -+---+-80000000aihs42i98";
    char *base_from = "0123456789ABCDEF";
    char *base_to = "01";

    printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}


ex05
#include <stdio.h>
int main(void)
{
    char **tab;
    char *str= "AOdJPU s6rcMfH6WQx5Qr6Fcr8zEi26ne2pmMRgouf6";
    char *charset = "m ";

    tab = ft_split(str, charset)
    while (*tab)
    {
        printf("%s\n", *tab);
        tab++;
    }
}