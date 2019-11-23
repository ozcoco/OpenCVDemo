//
// Created by ozcomcn on 11/23/19.
//

#include "ThreadTool.h"

#include <thread>
#include <chrono>


using namespace std;

void ThreadTool::sync(_TASK_ run) noexcept
{
    thread t(run);

    t.join();
}


void ThreadTool::async(_TASK_ run) noexcept
{
    thread t(run);

    t.detach();
}

void ThreadTool::sleep(long int ms) noexcept
{
    this_thread::sleep_for(chrono::milliseconds(ms));
}


