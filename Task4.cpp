#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct dat
{
    string name;
    int age;
};

int main() {
    int size, ma = 0, mi = 1e9;
    cin >> size;

    string n1, n2;

    vector<dat> t(size);

    ofstream file("welcome.txt");

    for (int a = 0; a < size; a++) {
        cin >> t[a].name;
        cin >> t[a].age;

        file << t[a].name << endl;
        file << t[a].age << endl;

        if (ma < t[a].age) {
            ma = t[a].age;
            n1 = t[a].name;
        }

        if (mi > t[a].age) {
            mi = t[a].age;
            n2 = t[a].name;
        }
    }

    file << ma << "\n" << n1 << "\n";
    file << mi << "\n" << n2;

    file.close();

    return 0;
}
