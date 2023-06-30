#ifndef __WINDOW_MGR_H__
#define __WINDOW_MGR_H__
#include <iostream>
#include <vector>
#include "screen.h"

class Window_mgr
{
public:
    using ScreenIndex = std::string::size_type;
    void clear(ScreenIndex);
    ScreenIndex addScreen(const Screen &);
private:
    std::vector<Screen> screen{Screen(24, 80, ' ')};
};


#endif