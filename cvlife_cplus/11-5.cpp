// 多线程 多进程
// g++ 11-5.cpp -lpthread -o main
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <string>

using namespace std;

void *func_thread1(void *args)
{
    while (1)
    {
        string g_str = "in thread func_thread1 !";
        cout << g_str << endl;
    }
    return 0;
}

void *func_thread2(void *args)
{
    while (1)
    {
        string g_str = "in thread func_thread2 !";
        cout << g_str << endl;
    }
    return 0;
}

int main()
{
    pthread_t tid1, tid2;
    int ret1 = pthread_create(&tid1, NULL, func_thread1, NULL);
    int ret2 = pthread_create(&tid2, NULL, func_thread2, NULL);

    // sleep(5); // 使用sleep阻塞主进程

    pthread_exit(NULL); // 显式退出线程，需要等各个线程退出后，进程才结束。

    return 1;
}