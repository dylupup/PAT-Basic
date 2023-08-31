#include<iostream>
#include<string>
using namespace std;

//int main41() {//我自己写出来滴^-^
//    int n, max, min = 0;
//    cin >> n;
//    struct stu {
//        string name;
//        string id;
//        int grade;
//    }s[n];
//
//    for (int i = 0; i < n; i++) {
//        cin >> s[i].name;
//        cin >> s[i].id;
//        cin >> s[i].grade;
//        if (i != 0 && s[i].grade > s[max].grade) max = i;
//        if (i != 0 && s[i].grade < s[min].grade) min = i;
//
//    }
//    cout << s[max].name << ' ' << s[max].id << "\n" << s[min].name << ' ' << s[min].id << "\n";
//}
////以下为别人的解法
//#include<iostream>
//using namespace std;
//int main42() {
//    int n, max = -1, min = 101, score;
//    string maxname, minname, maxid, minid, name, id;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> name >> id >> score;
//        if (score > max) { max = score; maxname = name; maxid = id; }
//        if (score < min) { min = score; minname = name; minid = id; }
//    }
//    cout << maxname << ' ' << maxid << endl;
//    cout << minname << ' ' << minid << endl;
//}
//

//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main43() {
//    struct stu {
//    string name;
//    int score;
//    string id;
//    void setstu(string Name, string Id, int Score) {
//        name = Name;
//        id = Id;
//        score = Score;
//    };
//}min, max, tmp;
//    int n;
//    cin >> n;
//    max.setstu("", "", -100);
//    min.setstu("", "", +101);
//    for (int i = 0; i < n; i++) {
//        cin >> tmp.name >> tmp.id >> tmp.score;
//        if (tmp.score > max.score)max.setstu(tmp.name, tmp.id, tmp.score);
//        if (tmp.score < min.score)min.setstu(tmp.name, tmp.id, tmp.score);
//    }
//    cout << max.name << ' ' << max.id << endl;
//    cout << min.name << ' ' << min.id << endl;
//}