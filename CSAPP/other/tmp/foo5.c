/* ***********************************************************************

  > File Name: foo5.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: Wed 18 Oct 2017 10:31:46 AM CST

 ********************************************************************** */

#include <stdio.h>
void f(void);

int x = 15213;
int y = 15212;

int main(int argc, const char* argv[])
{
    f();
    printf("x = 0x%x y = 0x%x \n", x, y);

    return 0;
}
