void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(lst->data);
        lst = lst->next;
    }
}