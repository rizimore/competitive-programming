#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;


    int count=0;
    for (char i : n) {
        if (i == '4' || i == '7')
            count++;
    }
    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}