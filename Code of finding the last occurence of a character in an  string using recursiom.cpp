#include<iostream>
#include<cstring>
using namespace std;

int recursive(string str, char ch, int index, int num) {
    if (index >= str.length()) return num;

    if (str[index] == ch) num = index;

    return recursive(str, ch, index + 1, num);
}

int main() {
    string str = "aabbccddddd";
    char ch = 'c';
    int index = 0;
    int num = recursive(str, ch, index, -1);

    if (num != -1) {
        cout << "Last occurrence of '" << ch << "': " << num << endl;
    } else {
        cout << "Character not found" << endl;
    }

    return 0;
}
