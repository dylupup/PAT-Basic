#include <iostream>
#include <map>
using namespace std;
int main31() {
    int n, p = 0, t = 0;
    string s;
    cin >> n;//���뼸���ַ�
    for (int i = 0; i < n; i++) {//���뼸���ַ�ѭ������
        cin >> s;//�����ַ�
        map<char, int> m;//����map��char�Ǽ���int��ֵ(���ִ���)
        for (int j = 0; j < s.size(); j++) {//�����ַ�
            m[s[j]]++;
            if (s[j] == 'P') p = j;
            if (s[j] == 'T') t = j;
        }
        if (m['P'] == 1 && m['A'] !=0  && m['T'] == 1 
            && m.size()/*mapԪ�ظ���*/ == 3 //mapԪ��ֻ��PAT������ĸ
            && t - p != 1 //TP�м��Ȼ��A
            && p * (t - p - 1) == s.length() - t - 1)
           /*Pǰ���A����������PT�м�A����������T����A���������м��һ��A������Ͷ�һ����PǰA������*/
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

