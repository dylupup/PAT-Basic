#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;//使排序函数从大到小排列
}
int arr[10000];
int main() {
    int k, n, flag = 0;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {//循环K次
        cin >> n;
        v[i] = n;//v里记录要算的数字
        while (n != 1) {
            if (n % 2 == 0) n = n / 2;
            else n = n * 3 + 1;

            if (arr[n] == 1)break;
            arr[n] = 1;//记录被生成的数字
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i <k; i++)
        if (arr[v[i]] == 0) {//跳过了被生成的数字，只打印关键数字
            if (flag == 1)cout << " ";//在每个数字前面打印空格（除了第一个）
            cout << v[i];
            flag = 1;
        }
    return 0;
}