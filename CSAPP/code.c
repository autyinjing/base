/* ***********************************************************************

  > File Name: code.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年06月01日 星期四 11时28分30秒

 ********************************************************************** */

int accum = 0;

int sum(int x, int y)
{
    int t = x + y;
    accum += t;
    return t;
}
