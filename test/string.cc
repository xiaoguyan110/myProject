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
#if 0
    getline(cin, s1);
    if(!s1.empty()){                        // 空值返回true, 否则返回false
        cout << s1.size() << endl;                         // 返回s中字符的个数
        cout << s1[10] << endl;                             //  返回第n个字符
    }

    isalnum(s1[0]);  // 字符或数字
    isalpha(s1[1]);  // 字母
    iscntrl(s1[2]);  // 控制字符
    isdigit(s1[1]);  // 数字
    islower(s1[2]);  // 小写字母
    isgraph(s1[3]);  // 不是空格但是可打印为真
    isprint(s1[1]);  // 可打印
    ispunct(s1[2]);  // 是标点符号时

    isspace(s1[1]);   // 空白字符
    isupper(s1[2]);   // 大写字母
    isxdigit(s1[3]);  // 十六进制数字为真
    tolower(s1[1]);   // 输出对应的小写字母
    toupper(s1[2]);     // 输出对应的大写字母
#endif

    string string_data;
    cin >> string_data;
    for(auto &c : string_data)
        cout << c << endl;

    decltype(string_data.size()) i = 0;
    while(i < string_data.size()){
        cout << string_data[i] << endl;
        i++;
    }
    for(i=0;i<string_data.size();i++)
        cout << string_data[i] << endl;

    string::iterator iter;
    for(iter=string_data.begin(); iter != string_data.end(); iter++)
        cout << *iter << endl;

    return 0;


}