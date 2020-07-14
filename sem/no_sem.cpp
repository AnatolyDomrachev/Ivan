#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

//sem_t sem;

void* print_1(void* vptr_args) {
	for(int i = 0; i<10; i++){
		printf("1\n");
		usleep(10);
	}
}

void* print_2(void* vptr_args) {
	for(int i = 0; i<10; i++){
		printf("2\n");
		usleep(10);
	}
}

main()
{
	pthread_t thread[2];
	pthread_create(&thread[1], NULL, print_1 , NULL);
	pthread_create(&thread[2], NULL, print_2 , NULL);
	pthread_join(thread[1], NULL);
	pthread_join(thread[2], NULL);
	//sem_init(&sem, 0, 5);
	//sem_post(&sem);

	return 0;
}

