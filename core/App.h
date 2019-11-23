//
// Created by ozcomcn on 11/23/19.
//

#ifndef OPENCVDEMO_APP_H
#define OPENCVDEMO_APP_H

#include <iostream>


#define __LINUX__ if(__linux__)
#define __WIN__ if(!__linux__)
#define __LOOP__ while(1);

namespace open_cv
{
    class App
    {
    public:
        inline App() noexcept
        {
            printf("--->start\n");
        }

        inline virtual ~App() noexcept
        {
            printf("--->end\n");
        }

        void start() const noexcept;
    };

    inline void launch() noexcept
    {
        App app{};

        app.start();

//        __LOOP__
    }

}

#endif //OPENCVDEMO_APP_H
