#ifndef __SALES_H__
#define __SALES_H__
#include <iostream>
#if 0
struct Sales
{
    Sales() = default;
    Sales(const std::string &s):bookNo(s){}
    Sales(const std::string &s, unsigned n, double p):
            bookNo(s),units_sold(n), revenue(n*p){}
    Sales(std::istream &);

    std::string isbn() { return bookNo; }
    Sales  combine(const Sales &);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0.0;
    double revenue = 0.0;    
};
Sales add(const Sales & , const Sales &);
std::ostream & print(std::ostream &, Sales&);
std::istream & read(std::istream&, Sales&);include <iostream>
#endif 

class Sales
{

    friend Sales add(const Sales & , const Sales &);
    friend std::ostream & print(std::ostream &, Sales&);
    friend std::istream & read(std::istream&, Sales&);

    public:
        Sales() = default;
        explicit Sales(const std::string &s):bookNo(s){}
        Sales(const std::string &s, unsigned n, double p):
                bookNo(s),units_sold(n), revenue(n*p){}
        Sales(std::istream &);

        std::string isbn() { return bookNo; }
        Sales  combine(Sales &);
        Sales  combine(const Sales &);
        Sales  combine(const Sales &) const;
        double avg_price() const;

    private:
        std::string bookNo;
        unsigned units_sold = 0.0;
        double revenue = 0.0;    
};

inline double Sales::avg_price() const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales add(const Sales & , const Sales &);
std::ostream & print(std::ostream &, Sales&);
std::istream & read(std::istream&, Sales&);



#endif