/*Write a program to accept two integers x and n and compute x raised to n.*/
#include<iostream>
using namespace std;
int main()
{
    int x, n,res=1;
    cout << "Enter number: " << endl;
    cin >> x;
    cout << "Enter power: " <<endl;
    cin >> n;
    for (int i=0; i < n; i++){
        res = res * x;
    }
    cout << "res : " << res << endl;

    return 0;
}