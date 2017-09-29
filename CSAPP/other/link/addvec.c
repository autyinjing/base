/* ***********************************************************************

  > File Name: addvec.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年09月29日 星期五 14时55分13秒

 ********************************************************************** */

void addvec(int *x, int *y, int *z, int n)
{
    int i;
    for (i = 0; i < n; ++i)
        z[i] = x[i] + y[i];
}
