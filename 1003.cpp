#include <iostream>
#include <map>
using namespace std;
int main31() {
    int n, p = 0, t = 0;
    string s;
    cin >> n;//输入几次字符
    for (int i = 0; i < n; i++) {//输入几次字符循环几次
        cin >> s;//输入字符
        map<char, int> m;//建立map，char是键，int是值(出现次数)
        for (int j = 0; j < s.size(); j++) {//遍历字符
            m[s[j]]++;
            if (s[j] == 'P') p = j;
            if (s[j] == 'T') t = j;
        }
        if (m['P'] == 1 && m['A'] !=0  && m['T'] == 1 
            && m.size()/*map元素个数*/ == 3 //map元素只有PAT三个字母
            && t - p != 1 //TP中间必然有A
            && p * (t - p - 1) == s.length() - t - 1)
           /*P前面的A的数量乘以PT中间A的数量等于T后面A的数量（中间多一个A，后面就多一倍的P前A数量）*/
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

