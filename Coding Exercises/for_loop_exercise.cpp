#include <iostream>
#include <cstdio>
using namespace std;

/*
In this challenge, you will use a for loop to increment a variable through a range.
You will be given two positive integers; (a,b), separated by a newline.
For each integer n in the inclusive interval [a,b]:
If 1 <= n <= 9 then print the English representation of it in lowercase. 
That is "one" for 1, "two" for 2, and so on.
Else if n > 9, and it is an even number, then print "even".
Else if n > 9, and it is an odd number, then print "odd".
*/

int main()
{
    int a, b;
    cin>>a>>b;
    string EnglishRep[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    for (int i = a; i <= b; i++)
    {
        if (i > 9 ){
            if (i % 2 == 0){
                cout<< "even" << endl;
            } else { cout<< "odd" << endl; }

        } else{ cout << EnglishRep[i] << endl; }
    }

    return 0;
}
