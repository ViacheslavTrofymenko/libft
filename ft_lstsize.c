#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

int main(void)
{
	t_list *n1 = ft_lstnew("Uno");
	t_list *n2 = ft_lstnew("Dos");
	t_list *n3 = ft_lstnew("Tres");

	ft_lstadd_front(&n2, n3); // n3 -> n2
	ft_lstadd_front(&n1, n2); // n2 -> n1

	printf("Tamaño de la lista: %d\n", ft_lstsize(n3));
	return (0);
}
