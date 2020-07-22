#include <iostream>
#include <thread>

void run()
{
    for (unsigned j = 0; j < 10000000; j++)
    {
        std::cout << j;
    }
}

int main()
{

    std::thread my_thread(run);
    my_thread.detach(); // Thread is detached and now main() will not wait for run() to finish, run() can run in background
    return 0;
}
