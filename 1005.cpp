#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;//ʹ�������Ӵ�С����
}
int arr[10000];
int main() {
    int k, n, flag = 0;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {//ѭ��K��
        cin >> n;
        v[i] = n;//v���¼Ҫ�������
        while (n != 1) {
            if (n % 2 == 0) n = n / 2;
            else n = n * 3 + 1;

            if (arr[n] == 1)break;
            arr[n] = 1;//��¼�����ɵ�����
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i <k; i++)
        if (arr[v[i]] == 0) {//�����˱����ɵ����֣�ֻ��ӡ�ؼ�����
            if (flag == 1)cout << " ";//��ÿ������ǰ���ӡ�ո񣨳��˵�һ����
            cout << v[i];
            flag = 1;
        }
    return 0;
}