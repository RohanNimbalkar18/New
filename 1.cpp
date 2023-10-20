/*Write a program that accepts numbers continuously as long as the number is positive and prints the 
sum of the given numbers. */
#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    do {
    cout << "Enter the number";
    cin >> n;
    if(n>=0){
        sum = sum + n;

    }
    } while (n > 0);
        cout << "sum" << sum;
    return 0;
}