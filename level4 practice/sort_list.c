t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *node;
    int temp;

    node = lst;
    while(node->next)
    {
        if(cmp(node->data, node->next->data) == 0)
        {
            temp = node->data;
            node->data = node->next->data;
            node->next->data = temp;
            lst = node;
        }
        else
            lst = lst->next;
    }
}