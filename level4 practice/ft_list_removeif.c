void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp = *begin_list

    while(begin_list && *begin_list)
    {
        if(cmp(list->data, data_ref) == 0)
        {
            temp = *begin_list;
            *begin_list = list->next;
            free(temp);
            ft_list_remove_if(begin_list, data_ref, cmp);
        }
        else    
            ft_list_remove_if(begin_list->next, data_ref, cmp)
    }
}