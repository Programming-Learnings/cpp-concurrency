#include <iostream>
#include <threads>

void hello()
{
    std::cout << "Hello from the second thread";
}
int main()
{
    std::thread t(hello);
    std::cout << "Hello from the first thread" : t.join()
}