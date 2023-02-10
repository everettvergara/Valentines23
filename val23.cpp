#include <iostream>
#include <SDL.h>

#include "video_init.hpp"
#include "val23.hpp"

using eg::video_init;
using eg::video_quit;
using eg::val23;

auto main(int, char *[]) -> int
{
    try
    {
        video_init();

        auto animation = val23();
        animation.create_win("Happy Heart's 23", 1024, 768);
        animation.run();

        video_quit();

    } catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    
    return 0;
}

