#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;

int main()
{
    string s1;
    string s2 = s1;
    string s3="hiya";
    string s4(10, 'C');

    cout << "s1 =" << s1 << endl; 
    cout << "s2 =" << s2 << endl; 
    cout << "s3 =" << s3 << endl; 
    cout << "s4 =" << s4 << endl; 

    getline(cin, s1);
    if(!s1.empty()){                        // 空值返回true, 否则返回false
        cout << s1.size() << endl;                         // 返回s中字符的个数
        cout << s1[10] << endl;                             //  返回第n个字符
    }

    return 0;

}