#include<stdlib.h>

//this is a fork_test coding for study linux process management
int main()
{
	int rid;
	rid = fork();
	if(rid < 0)
	{
		printf("fork error!");
		return;
	}
	if(rid > 0)
		printf("I am parent, my rid is %d,my PID id %d\n",rid,getpid());
	else
		printf("I am child,my rid is %d",my PID is %d\n",rid,getpid());
	
}