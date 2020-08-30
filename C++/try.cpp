#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
#include<set>
#include <typeinfo>
using namespace std;

// void sth(vector<int> a){
//     a[0] = 5;
// }

// int main(int argc, char const *argv[])
// {
//     set<vector<int>> table;
//     vector<int> a = {1, 2, 3, 20, 21};
//     // for (int i = 0 ; i < 3; i++){
//     //     table.insert(a);
//     //     a.pop_back();
//     // }
//     // vector<vector<int>> res(table.begin(), table.end());
//     // for (vector<int> item : res){
//     //     for (int i : item){
//     //         cout << i << " ";
//     //     }
//     //     cout << endl;
//     // }
//     cout << a[a.size()-1] << endl;
//     // vector<int> b;
//     // a.pop_back();
//     // for (int i = 0; i < a.size(); i++){
//     //     if (a[i] >= a[i-1])
//     //         b.push_back(a[i]);
//     // }
//     // for (int i: b)
//     //     cout << i << " ";
//     // cout << endl;
//     // cout << b.back() << endl;
// }


//  string 转换成其他类型
// int main(int argc, char const *argv[])
// {
//     string s = "123.456";
//     cout << stoi(s) << endl;
//     cout << stol(s) << endl;
//     cout << stof(s) << endl;
//     cout << stod(s) << endl;
//     return 0;
// }


// 其他类型转换成string
// int main(int argc, char const *argv[])
// {
//     string s = "测试";
//     int i = 7;
//     cout << s + "int:" + to_string(i) << endl;
//     float f = 3.14;
//     cout << s + "float:" + to_string(f) << endl;
//     double d = 3.1415;
//     cout << s + "double:" + to_string(d) << endl;
//     char c = 'z';
//     cout << s + "char_1:" + to_string(c) << endl;
//     cout << s + "char_2:" + c << endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     string s = "abc";
//     int a = 5;
//     double b = 3.14;
//     cout << typeid(s).name() << endl;
//     cout << typeid(s[1]).name() << endl;
//     cout << typeid(a).name() << endl;
//     cout << typeid(b).name() << endl;
//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     vector<string> strs = {"Hello", "World", "XYF"};
//     for (string &str : strs)
//     {
//         cout << str << " ";
//     }
//     cout << endl;
//     strs.erase(strs.begin()+2, strs.begin()+2+1);
//     for (string & str : strs){
//         cout << str << " ";
//     }
//     cout << endl;
//     strs.insert(strs.begin()+2, "XYF");
//     for (string &str : strs)
//     {
//         cout << str << " ";
//     }
//     cout << endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     string s = "abcdefg";
//     cout << s[-1] << endl;
//     // cout << s.substr(2, s.length()-1) << endl;
//     // cout <<  << endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     string str1 = "010";
//     string str2 = "101";
//     cout << char(0 + 48)  + str1  << endl;
//     // int s, a, b, c;
//     // a = 0;
//     // b = 1;
//     // c = 1;
//     // s = a^b^c;
//     // c = c & (a ^ b) | (a & b);
//     // cout << s << " " << c << endl;
//     // string *str3 = &str2;
//     // (*str3).append("d");
//     // cout << str2 << endl;
//     // cout << (*str3) << endl;
//     // bool res = str1 > str2;
//     // cout << res << endl;
//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     long a = 5;
//     long b = 1;
//     int count = 0;
//     for (int i = 0; i < labs(a-b); i++)
//         count++;
//     cout << count << endl;
//     return 0;
// }

// int main()
// {
//     string str = "We think in generalities, but we live in details.";
//     // (quoting Alfred N. Whitehead)

//     string str2 = str.substr(3, 5); // "think"
//     cout << str2 << endl;

//     int pos = str.find("live"); // position of "live" in str
//     cout << pos << endl;

//     string str3 = str.substr(pos); // get from "live" to the end
//     cout << str3 << endl;

//     // cout << str2 << ' ' << str3 << '\n';

//     return 0;
// }

int main(int argc, char const *argv[])
{
    string str = "    Let's take LeetCode contest";
    int blank = 0;
    while (str[blank] == ' '){
        blank++;
    }
    str = str.substr(blank);
    cout << str << endl;
    return 0;
}
