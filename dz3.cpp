

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>

using namespace std;

/*
//1-2
int main() {
    setlocale(0, "");

    int n, amax, x;
    cout << "¬ведите длину массива ";
    cin >> n;
    cout << endl << "¬ведите мах возможное значение дл€ массива ";
    cin >> amax;
    vector<int> arr(n);

    srand(time(NULL));

    cout << endl << "arr : ";
    for (int i = 0; i < n; i++) {
        x = 1 + rand() % amax;
        arr[i] = x;
        cout << x << ' ';
    }

    cout << endl << "arr*2 : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] * 2 << ' ';
    }

    int a;
    cout << endl << "¬ведите значение а ";
    cin >> a;
    cout << endl << "arr - a : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] - a << ' ';
    }

    x = arr[0];
    cout << endl << "arr / arr[0] : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] / x << ' ';
    }

    //2
    int k1, k2, s1, s2, sum1=0, sum2=0, sum3=0, sum4=0, sr2=0;
    cout <<endl << "k1 = ";
    cin >> k1;
    cout << endl << "k2 = ";
    cin >> k2;
    cout << endl << "s1 = ";
    cin >> s1;
    cout << endl << "s2 = ";
    cin >> s2;
    for (int i = 0; i < n; i++) {
        sum1 = sum1 + arr[i];
        sum2 = sum2 + arr[i] * arr[i];
        if (i < 6) {
            sum3 = sum3 + arr[i];
        }
        if (k1 <= i and k2 >= i) {
            sum4 = sum4 + arr[i];
        }
        if (s1 <= i and s2 >= i) {
            sr2 = sr2 + arr[i];
        }
    }
    cout << endl << "sum1 : " << sum1;
    cout << endl << "sum2 : " << sum2;
    cout << endl << "sum3 : " << sum3;
    cout << endl << "sum4 : " << sum4;
    cout << endl << "sr1 : " << sum1 / arr.size();
    cout << endl << "sr2 : " << sr2;
 }

*/

/*
//3-4
int main() {
    setlocale(0, "");

    int amax, amin, x;
    vector<int> arr(20);
    cout << "¬ведите мах возможное значение дл€ массива ";
    cin >> amax;
    cout << endl << "¬ведите min возможное значение дл€ массива ";
    cin >> amin;

    srand(time(NULL));

    cout << endl << "arr : ";
    for (int i = 0; i < 20; i++) {
        x = amin + rand() % (amax - amin + 1);
        arr[i] = x;
        cout << x << ' ';
    }

    cout << endl << "new arr1 :";
    for (int i = 0; i < 20; i++) {
        x = arr[i];
        if (i < 3 or i>16) {
            cout <<' ' << arr[19 - i];
        }
        if (i>2 and i<17){
            cout <<' ' << arr[i];
        }
    }
    

    //чета не робит
    int fl = 0;
    for (int i = 0; i < 20; i++) {
        if (arr[i] < 0 and fl==0) {
            arr.erase(arr.begin() + i);
            fl=1;
        }
    }

    int fl1 = 0;
    for (int i = 19-fl; i >=0; i--) {
        if (arr[i] % 2 == 0 and fl1==0) {
            arr.erase(arr.begin() + i);
            fl1 = 1;
        }
    }

    cout << endl;
    for (int i = 0; i < 20-fl-fl1; i++) {
        cout << arr[i] << ' ';
    }
}
*/

/*
//5
int main() {
    string str;
    getline(cin, str);
    int n = str.size();
    if (n % 2 == 0) {
        cout << "chetnoe";
    }
    if (n % 2 == 1) {
        cout << "nechetnoe";
    }
}
*/


/*
//6
int main() {
    string name1, name2;
    getline(cin, name1);
    getline(cin, name2);
    if (name1.size() > name2.size()) {
        cout << "true";
    }
}
*/


/*
//7
int main() {
    int sst1, sst2, sst3;
    string st1, st2, st3;
    getline(cin, st1);
    getline(cin, st2);
    getline(cin, st3);
    sst1 = st1.size();
    sst2 = st2.size();
    sst3 = st3.size();

    if (sst1 > sst2 and sst1 > sst3) {
        cout << "the_longest : " << st1;
    }
    if (sst2 > sst1 and sst2 > sst3) {
        cout << "the_longest : " << st2;
    }
    if (sst3 > sst1 and sst3 > sst2) {
        cout << "the_longest : " << st3;
    }

    cout << endl;
    if (sst1 < sst2 and sst1 < sst3) {
        cout << "the_shortest : " << st1;
    }
    if (sst2 < sst1 and sst2 < sst3) {
        cout << "the_shortest : " << st2;
    }
    if (sst3 < sst1 and sst3 < sst2) {
        cout << "the_shortest : " << st3;
    }
}
*/


/*
//8
int main() {
    string str, st;
    getline(cin, str);
    int n = str.size();
    for (int i = 0; i < n; i++) {
        st = st + '*';
    }
    cout << st << str << st;
}
*/


/*
//9
int main() {
    string str;
    getline(cin, str);
    int n = str.size(), na = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'a') {
            na++;
        }
    }
    cout << na * 100 / n<<'%';
}
*/


/*
//10
int main() {
    string str = "Can you can a can as a canner can can a can?";
    string nstr, sl;
    getline(cin, sl);
    int nsl = sl.size();
    int n = str.size();
    for (int i = 0; i < n; i++) {
        if ((str[i] == 'c' or str[i] == 'C') and str[i + 1] == 'a' and str[i + 2] == 'n' and (str[i + 3] == ' ' or str[i + 3] == '?')) {
            for (int j = 0; j < nsl; j++) {
                nstr.push_back(sl[j]);
            }
            i=i+2;
        }
        else{
            nstr.push_back(str[i]);
        }
    }
    cout << nstr;
}

*/