#include "screen.h"

Screen &Screen::move(pos r, pos c)
{
    pos row = r*width;
    cursor =  row + c;
    return *this;
}