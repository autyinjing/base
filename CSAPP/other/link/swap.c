/* ***********************************************************************

  > File Name: swap.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年09月29日 星期五 10时32分34秒

 ********************************************************************** */

extern int buf[];

int *bufp0 = &buf[0];
int *bufp1;

void swap()
{
    int temp;

    bufp1 = &buf[1];
    temp = *bufp0;
    *bufp0 = *bufp1;
    *bufp1 = temp;
}
