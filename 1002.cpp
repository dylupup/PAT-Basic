//1002 写出这个数
//分数 20
//作者 CHEN, Yue
//单位 浙江大学
//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//
//输入格式：
//每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100
//
//
//
//输出格式：
//在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
//
//输入样例：
//1234567890987654321123456789
//输出样例：
//yi san wu
//代码长度限制
//16 KB
//时间限制
//400 ms
//内存限制
//64 MB

#include<iostream>
#include<string>
using namespace std;
//我的笨方法
//int main21() {
//    int sum = 0;
//    string n, sum_string;
//    cin >> n;
//    for (int i = 0; i < n.length(); i++) {
//        sum += n[i] - '0';
//    }
//    sum_string = to_string(sum);
//    for (int i = 0; i < sum_string.length(); i++) {
//        if (i < sum_string.length() - 1) {
//            switch (sum_string[i])
//            {
//            case('1'):cout << "yi" << " "; break;
//            case('2'):cout << "er" << " "; break;
//            case('3'):cout << "san" << " "; break;
//            case('4'):cout << "si" << " "; break;
//            case('5'):cout << "wu" << " "; break;
//            case('6'):cout << "liu" << " "; break;
//            case('7'):cout << "qi" << " "; break;
//            case('8'):cout << "ba" << " "; break;
//            case('9'):cout << "jiu" << " "; break;
//            }
//        }
//        else {
//            switch (sum_string[i])
//            {
//            case('1'):cout << "yi"; break;
//            case('2'):cout << "er"; break;
//            case('3'):cout << "san"; break;
//            case('4'):cout << "si"; break;
//            case('5'):cout << "wu"; break;
//            case('6'):cout << "liu"; break;
//            case('7'):cout << "qi"; break;
//            case('8'):cout << "ba"; break;
//            case('9'):cout << "jiu"; break;
//            }
//        }
//    }
//    return 0;
//}

//优化，减少了代码长度
//利用数组
int main22() {
    int sum=0;
    string n;
    cin >> n;
    string str[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
    for (int i = 0; i < n.length(); i++) {
        sum +=n[i]-'0';
    }
    string sum_string = to_string(sum);
    for (int i = 0; i < sum_string.length(); i++) {
        cout << str[sum_string[i]-'0'];
        if (i != sum_string.length() - 1)
            cout << ' ';
        //或者
        //if (i != 0) cout << " ";
        //cout << str[num[i] - '0'];
    }
    return 0;
}