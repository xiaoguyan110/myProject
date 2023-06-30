#ifndef __SCREEN_H__
#define __SCREEN_H__
#include <iostream>

class Screen
{
    friend class Window_mgr;

    public:
        typedef std::string::size_type pos;
        
        Screen() =default;
        Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd, c){}
        Screen(pos ht, pos wd):height(ht), width(wd), contents(ht * wd, ' '){}

        char get() const
            {return contents[cursor];}
        inline char get(pos ht, pos wd) const;

        Screen & move(pos r , pos c);
        Screen & set(char);
        Screen & set(pos, pos, char);

        pos size() const
        {
            return height * width ;
        }

        Screen &display(std::ostream &os)
        {
            do_sisplay(os);
            return * this;
        }
        const Screen & display(std::ostream &os) const
        {
            do_sisplay(os);
            return *this;
        }

    private:
        void do_sisplay(std::ostream &os) const {os << contents;}
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

inline char Screen::get(pos r ,pos c ) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen & Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen & Screen::set(pos ht, pos wt, char c)
{
    contents[ht*width + wt] = c;
    return *this;

}


#endif