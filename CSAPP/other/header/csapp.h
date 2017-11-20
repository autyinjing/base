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
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <signal.h>
#include <sys/wait.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>

void unix_error(char *msg);
void posix_error(int code, char *msg);
void dns_error(char *msg);
void app_error(char *msg);

pid_t Fork(void);
pid_t Wait(int *status);
void Kill(pid_t pid, int signum);
void Pthread_detach(pthread_t tid);
struct hostent *Gethostbyname(const char *name);

#endif  /* end of CSAPP_H */
