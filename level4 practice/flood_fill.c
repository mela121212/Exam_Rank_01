  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;


void    fill(char **tab, t_point size, char *target, int row, int col)
{
    if(row >= size.y || col >= size.x || row < 0 || col < 0) // MAYOR O IGUAL!!!!!!!!
        return ;
    if(tab[row][col] == 'F' || tab[row][col] != target)
        return ;
    tab[row][col] == 'F';
    fill(tab, size, target, row + 1, col);
    fill(tab, size, target, row - 1, col);
    fill(tab, size, target, row, col + 1);
    fill(tab, size, target, row, col - 1);

}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char    target = tab[begin.y][begin.x];

    fill(tab, size, target, begin.y, begin.x);
}