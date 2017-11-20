/* ***********************************************************************

  > File Name: fork2.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: Mon 20 Nov 2017 03:23:11 PM CST

 ********************************************************************** */

#include "csapp.h"

int main(int argc, const char* argv[])
{
    Fork();
    Fork();
    Fork();
    printf("hello\n");

    exit(0);
}
