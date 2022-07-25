#include<iostream>
using namespace std;
int main()
{
    
    float x;
    int j=1;
    float sum = 0;
    for (int i=1; i<5; i++)
    {
        cout<< "enter x";
        cin>> x;
        sum = sum + x;
        j=j+1;
    } 
    float average;
    average = sum/(j-1);
    cout<<average;
    return 0;
}
