#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        if (str[j] == ' ')
        {
            j--;
            continue;
        }
        if (str[i] != str[j])
        {
            cout << "Not a palindrome" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "Palindrome" << endl;
    int freq[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
        }
    }
    cout << "Frequency of each character: " << endl;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = '"';
        }
    }
    cout << "String after replacing vowels with ('')" << str << endl;
    return 0;
}