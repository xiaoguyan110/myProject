#include <iostream>
using namespace std;


istream & func(istream & in)
{
    auto old_stat = in.rdstate();
    string str;
    while(in >> str)
    {
        cout << str << endl;
        if(in.eof())
        {
            break;
        }

    }
    cout << "end" << endl;
    in.setstate(old_stat);
    return in;
}

int main()
{

    func(cin);

}