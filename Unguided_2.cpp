#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> s;
    string kalimat, hasil;

    cout << "Masukkan Kata: ";
    getline(cin, kalimat);

    for (char c : kalimat)
    {
        s.push(c);
    }

    while (!s.empty())
    {
        hasil += s.top();
        s.pop();
    }

    cout << "Kata Terbalik: " << hasil << endl;

    return 0;
}
