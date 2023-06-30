#include "window_mgr.h"

void Window_mgr::clear(ScreenIndex i)
{
    Screen & s = screen[i];
    s.contents = std::string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
    screen.push_back(s);
    return screen.size() - 1;

}