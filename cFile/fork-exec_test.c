#include<stdio.h>
//Repalce the process image
int main()
{
	int rid;
	rid = fork();
	if(rid > 0) printf("I am parent!\n");
	else
	{
		printf("I am child,I'll change to echo!\n");
		execl("/bin/echo","echo","hello!",0);   // change to echo
	}
	return 0;
}