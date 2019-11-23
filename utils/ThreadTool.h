//
// Created by ozcomcn on 11/23/19.
//

#ifndef OPENCVDEMO_THREADTOOL_H
#define OPENCVDEMO_THREADTOOL_H

typedef void (*_TASK_)();
#define __TASK__ _TASK_
#define __SYNC__(__TASK__)  ThreadTool::sync(__TASK__);
#define __ASYNC__(__TASK__)  ThreadTool::async(__TASK__);

class ThreadTool
{
public:

    static void sync(_TASK_ run) noexcept;

    static void async(_TASK_ run) noexcept;

    static void sleep(long int ms) noexcept;
};

#endif //OPENCVDEMO_THREADTOOL_H
