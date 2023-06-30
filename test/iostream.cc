#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

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
    string s2;
    string s3;
    string s4;
    vector <string> s1;
    
    ifstream intput(argv[1]);
    ofstream output(argv[2]);
/*
    // 每次读取一行
    while(getline(cin, s2))
    {
        cout << s2 << endl;
    }

    while(cin >> s2)
    {
        cout << s2 << endl;
    }
*/
    cin >> s2;
    s4 = s2;
    cin >> s3;
    s4 +=s3;
    cout << s4 << endl;
    if(s2 > s3)
        cout << s2 << endl;    
    else    
        cout << s3 << endl;
    
    if(s2.size() > s3.size())
        cout << s2.size() << endl;
    else
        cout << s3.size() << endl;
}