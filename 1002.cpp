//1002 д�������
//���� 20
//���� CHEN, Yue
//��λ �㽭��ѧ
//����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
//
//�����ʽ��
//ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10^100
//
//
//
//�����ʽ��
//��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
//
//����������
//1234567890987654321123456789
//���������
//yi san wu
//���볤������
//16 KB
//ʱ������
//400 ms
//�ڴ�����
//64 MB

#include<iostream>
#include<string>
using namespace std;
//�ҵı�����
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

//�Ż��������˴��볤��
//��������
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
        //����
        //if (i != 0) cout << " ";
        //cout << str[num[i] - '0'];
    }
    return 0;
}