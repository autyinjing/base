/* ***********************************************************************

  > File Name: csapp.h
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: Thu 19 Oct 2017 10:15:51 AM CST

 ********************************************************************** */

#ifndef CSAPP_H
#define CSAPP_H

#include <sys/types.h>
#include <unistd.h>

void unix_error(char *msg);
void posix_error(int code, char *msg);
void dns_error(char *msg);
void app_error(char *msg);

void Fork(void);
pid_t Wait(int *status);
void Kill(pid_t pid, int signum);
void Pthread_detach(pthread_t tid);
struct hostent *Gethostbyname(const char *name);

#endif  /* end of CSAPP_H */
