#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
You will be given an array of n integers and you have to print the integers in the reverse order.
The first line of the input contains n,where n is the number of integers.
The next line contains n space-separated integers.
*/

void convert(string str, int num_arr[]){
    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != ',')
        {
            num_arr[idx] = str[i] - '0';
            idx++;
        }
    }
}

void reverse(int arr[], int n) {
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size;
    string numbers;
    cin>>size;
    cin.ignore();
    getline(cin, numbers);
    int final_arr[size];
    convert(numbers, final_arr);
    reverse(final_arr, size);
    
    return 0;
}