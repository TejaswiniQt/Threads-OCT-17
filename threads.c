#include<stdio.h>
#include<pthread.h>

void *fun(void *a)
{
        printf("In Thread\n");
        printf("a = %d\n",*(int *)a);
}

int main()
{
        pthread_t tid1,tid2;
        int val1 = 5,val2 = 10;
        pthread_create(&tid1,NULL,fun,(void *)&val1);
        pthread_create(&tid2,NULL,fun,(void *)&val2);

        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);
        return 0;
}
