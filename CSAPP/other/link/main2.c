/* ***********************************************************************

  > File Name: mian2.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年09月29日 星期五 14时59分37秒

 ********************************************************************** */

#include <stdio.h>

#include "vector.h"

int x[2] = {1,2};
int y[2] = {3,4};
int z[2];

int main(int argc, const char* argv[])
{
    addvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);

    return 0;
}
