// C++11 Thread 1. Creating Threads

#include <iostream>
#include <thread>

void thread_function()
{
    std::cout << "thread function\n";
}

int main()
{
    std::thread t(&thread_function);   // t starts running
    std::cout << "main thread\n";
    t.join();   // main thread waits for the thread t to finish
    return 0;
}

//$ g++ t1.cpp -o t1 -std=c++11 -pthread
//$ ./t2
//thread function
//main thread

//=============================================


// t2.cpp
int main()
{
    std::thread t(&thread;_function);
    std::cout << "main thread\n";
    // t.join();
    t.detach();
    return 0;
}

// Once detached, the thread should live that way forever.
//$ g++ t2.cpp -o t2 -std=c++11 -pthread
//$ ./t2
//main thread
===============================================

// Callable Objects
// Here, we created an function object and assign it to a thread task.


#include <iostream>
#include <thread>

class MyFunctor
{
public:
    void operator()() {
        std::cout << "functor\n";
    }
};

int main()
{
    MyFunctor fnctor;
    std::thread t(fnctor);
    std::cout << "main thread\n";
    t.join();
    return 0;
}

//==========================================

//Passing Parameters to a thread

#include <iostream>
#include <thread>
#include <string>

void thread_function(std::string s)
{
    std::cout << "thread function ";
    std::cout << "message is = " << s << std::endl;
}

int main()
{
    std::string s = "Kathy Perry";
    std::thread t(&thread;_function, s);
    std::cout << "main thread message = " << s << std::endl;
    t.join();
    return 0;
}

//==============================

//Thread Move

// Moving a thread

// t5.cpp
#include <iostream>
#include <thread>

void thread_function()
{
    std::cout << "thread function\n";
}

int main()
{
    std::thread t(&thread;_function);
    std::cout << "main thread\n";
    std::thread t2 = move(t);

    t2.join();

    return 0;
}
//===============================

