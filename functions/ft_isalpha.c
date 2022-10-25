#include "libft.h"

int ft_isalpha(int k)
{
    return((k >= 'A' && k <='Z') || (k >= 'a' && k <= 'z'))
}