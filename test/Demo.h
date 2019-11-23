//
// Created by ozcomcn on 11/23/19.
//

#ifndef OPENCVDEMO_DEMO_H
#define OPENCVDEMO_DEMO_H

#include <iostream>

#define __BR__(TAG) printf("\n%s%s\n\n", TAG,"****************************************************************");

class Demo
{
private:
    inline static void start() noexcept;

    inline static void end() noexcept;

    static void sample() noexcept;

public:
    inline static void test() noexcept;

};

void Demo::start() noexcept
{
    __BR__("Demo")
}

void Demo::end() noexcept
{
    __BR__("Demo")
}

void Demo::test() noexcept
{
    start();

    sample();

    end();
}


#endif //OPENCVDEMO_DEMO_H
