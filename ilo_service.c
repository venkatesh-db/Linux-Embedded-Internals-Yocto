


#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


void * health_thread(void *arg)
{

while(1)
{
printf("[health thread] ystem ok");
sleep(5);
}

return NULL;
}

void* sensor_thread(void *arg)
{
while(1)
{
printf("[sensory trhead] temp");
sleep(3);
}
return NULL;
}


int  main()
{

pthread_t thread1;
pthread_t thread2;

printf(" minim ilo servcie ");

pthread_create(&thread1,NULL,health_thread,NULL);
pthread_create(&thread2,NULL,sensor_thread,NULL);

pthread_join(thread1,NULL);
pthread_join(thread2,NULL);

return 0;
}






