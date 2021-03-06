#include <pthread.h>
#include <stdlib.h>
#include <memory.h>
#include <stdint.h>
#include <unistd.h>

#include "thread.h"

struct thread_arg {
	void (*proc)(void*);
	void *ptr;
};

//! A wrapper for pthread signature for threads
void *_thread_handler(void *ptr){
	struct thread_arg *arg = (struct thread_arg*)ptr;
	arg->proc(arg->ptr);
	free(arg);
	return NULL;
}

int thread_create(void (*thread)(void*), const char *name, uint32_t stack_words, void *ptr, uint8_t priority, thread_t *handle){
	(void)name;
	(void)stack_words;
	(void)priority;
	pthread_t th;
	if(!handle) handle = (thread_t*)&th;
	struct thread_arg *arg = malloc(sizeof(struct thread_arg));
	arg->proc = thread;
	arg->ptr = ptr;
	pthread_create((pthread_t*)handle, NULL, _thread_handler, arg);
	return 0;
}

int thread_join(thread_t handle){
	pthread_join((pthread_t)handle, NULL);
    return 0;
}

void thread_enter_critical(void){
	// TODO: see how we should do this
}

void thread_start_scheduler(void){
	// TODO: need to join with all threads
}

void thread_set_tag(thread_t thread, void *tag){
	(void)thread;
	(void)tag;
	// TODO: make this set the tag using pthread func
}

int thread_sleep_ms(uint32_t ms){
	usleep(ms * 1000);
    return 0;
}

void *kzmalloc(size_t size){
	void *m = malloc(size);
	if(!m) return 0;
	memset(m, 0, size);
	return m;
}

void *kmalloc(size_t size){
	return malloc(size);
}

void kfree(void *ptr){
	free(ptr);
}

