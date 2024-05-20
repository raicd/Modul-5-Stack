#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool cekPalindrom(const string &kalimat)
{
    stack<char> tumpukan;

    // Mengisi stack dengan karakter dari kalimat yang bukan spasi dan bukan karakter non-alfanumerik
    for (char ch : kalimat)
    {
        if (isalnum(ch))
        {
            tumpukan.push(tolower(ch));
        }
    }

    // Membandingkan karakter dari stack dengan karakter di kalimat yang bukan spasi dan bukan karakter non-alfanumerik
    for (char ch : kalimat)
    {
        if (isalnum(ch))
        {
            if (tumpukan.top() != tolower(ch))
            {
                return false;
            }
            tumpukan.pop();
        }
    }

    return true;
}

int main()
{
    string kalimat;
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    if (cekPalindrom(kalimat))
    {
        cout << "Kalimat tersebut adalah palindrom\n";
    }
    else
    {
        cout << "Kalimat tersebut bukan palindrom\n";
    }

    return 0;
}
