#include "sales.h"
 
 Sales::Sales(std::istream &is)
 {
    read(is, *this);
 }

Sales Sales::combine(const Sales & sales)
{
    this->units_sold += sales.units_sold;
    this->revenue += sales.revenue;
    return * this;
}

Sales add(const Sales & a, const Sales & b)
{
    Sales sum = a;
    sum.combine(b);
    return b;
}

std::ostream & print(std::ostream &os, Sales& a)
{

    os<< a.isbn() << " " << a.units_sold << " " << a.revenue << " " << a.avg_price() << std::endl;

    return os;

}

std::istream & read(std::istream & is, Sales & a)
{
    double price;
    is >> a.bookNo >> a.units_sold >> price;
    a.revenue = price*a.units_sold;
    return is;
}