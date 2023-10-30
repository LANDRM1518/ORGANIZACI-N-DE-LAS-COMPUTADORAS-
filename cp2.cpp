#include<windows.h>
#include<process.h>
#include<time.h>
#include<stdio.h>

void task1(void*);

int main(int,char**){
	int ThreadNr;
	int nucleos = 20;
	for(int i=0;i<nucleos;i++) _beginthread( task1,0,&ThreadNr);
	(void) getchar();
	return 0;
}

void task1(void*){
	while(1)
	{
	
		clock_t wakeup = clock()+50;
		while(clock()< wakeup){}
		Sleep (20);
}
}
	
