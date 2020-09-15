#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <signal.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int x = 1;
  int y = 2;
  int sum = 0;
  printf("Enter numbers to add:\n");
  scanf("%i %i", &x, &y);
  int retVal = syscall(334,x,y,&sum);
  printf("%d + %d = %d\n",x,y,sum);
  printf("sys_csci3753_add returned: %d\n",retVal);
  
  return 0;
}