#include <iostream>
#include <vector>
using namespace std;

class NoDefault
{
public:
    NoDefault(int a):a(a){}

    int a;

};

class C
{
public:
    explicit C(int a):n(a){};
    NoDefault n;
};

int main()
{
    C c1(1);
    std::cout <<c1.n.a << endl;

    vector<C> ver(100);

    //vector<C>::iterator i;
    //for(i=ver.begin();i != ver.end();i++)
    return 0;    
}