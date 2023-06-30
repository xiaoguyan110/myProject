#include <iostream>
#include <fstream>
#include <sstream>

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

int main(int argc, char ** argv)
{
    if(true){}
    ifstream intput;
    ofstream output;
    func(cin);

}