/* ***********************************************************************

  > File Name: fork.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: Mon 20 Nov 2017 03:19:06 PM CST

 ********************************************************************** */

#include "csapp.h"

int main(int argc, const char* argv[])
{
    pid_t pid;
    int x = 1;

    pid = Fork();
    if (pid == 0) {
        printf("child: x = %d\n", ++x);
        exit(0);
    }

    printf("parent: x = %d\n", --x);
    exit(0);
}
