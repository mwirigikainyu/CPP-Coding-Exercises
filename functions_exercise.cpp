#include <iostream>
#include <string>
using namespace std;

/*
Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s.
Luckily, I've been able to find the vowels that were removed.
Given a censored string and a string of the censored vowels, return the original uncensored string.
Note:
The vowels are given in the correct order.
The number of vowels will match the number of * characters in the censored string.
*/

int censor(string str, string vowels)
{
    int num = 0;
    for (int i = 0; i < (sizeof(str)/sizeof(str[0])); i++)
    {
        char censor = '*';
        if (str[i] == censor){
            str[i] = vowels[num];
            num++; 
        }
    }
    cout<< str <<endl;
    return 0;
}

int main()
{
    censor("Wh*r* d*d my v*w*ls g*?", "eeioeo");
    censor("abcd", "");
    censor("*PP*RC*S*", "UEAE");

    return 0;
}