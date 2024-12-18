#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
void* thread_function(void* arg) {
    printf("This is a thread, thread ID: %ld\n", pthread_self());
    return NULL;
}
int main() {
    pthread_t thread;
    // Create a thread
    pthread_create(&thread, NULL, thread_function, NULL);
    printf("This is the main process, PID: %d\n", getpid());
    // Create a child process
    if (fork() == 0) {
        printf("This is a child process, PID: %d\n", getpid());
    }
    pthread_join(thread, NULL); // Wait for the thread to finish
    return 0;
}
