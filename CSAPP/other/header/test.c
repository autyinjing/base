/* ***********************************************************************

  > File Name: test.c
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: Tue 14 Nov 2017 03:44:14 PM CST

 ********************************************************************** */

#include "csapp.h"

int main(int argc, const char* argv[])
{
    char *errstr = "Hello World!";
    /*unix_error(errstr);*/

    fprintf(stderr, "%s\n", strerror(errno));

    return 0;
}
