#include <iostream>
#include <string>

using namespace std;

// 1. Функція підрахунку кількості пар "aa", "bb", "cc"
int Count(const string s)
{
    int k = 0;
    size_t pos = 0;

    while ((pos = s.find_first_of("abc", pos)) != string::npos)
    {
        // Перевіряємо, чи є наступний символ і чи він дорівнює знайденому
        if (pos + 1 < s.length() && s[pos + 1] == s[pos])
        {
            k++;
            pos += 2; // Переходимо за пару
        }
        else
        {
            pos++; // Пропускаємо поодинокий символ
        }
    }
    return k;
}

// 2. Функція заміни пар "aa", "bb", "cc" на "***"
string Change(string& s)
{
    size_t pos = 0;

    while ((pos = s.find_first_of("abc", pos)) != string::npos)
    {
        if (pos + 1 < s.length() && s[pos + 1] == s[pos])
        {
            s.replace(pos, 2, "***"); // Замінюємо 2 символи на "***"
            pos += 3; // Переміщуємо індекс за вставлені 3 зірочки
        }
        else
        {
            pos++;
        }
    }
    return s;
}

#ifndef UNIT_TESTING
int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 'aa', 'bb' or 'cc'" << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
#endif