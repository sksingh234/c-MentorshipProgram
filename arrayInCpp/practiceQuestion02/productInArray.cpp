#include<iostream>
using namespace std;
int main(){
    int arr[5] = {65,47,89,32,14};
    int product = 1;
    for (int idx = 0; idx < 5; idx++)
    {
        product= product * arr[idx];
        
    }
    cout<<"the product of element of arry is:"<<product;
    return 0;
}