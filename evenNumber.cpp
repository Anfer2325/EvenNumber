#include <iostream>
using namespace std;

bool even(int a)
{
    if(a==0)
        return true;
    else
        return uneven(a-1);
}

bool uneven(int b)
{
    if(b==0)
        return true;
    else
        return uneven(a-1);
}

int main(){
    if(even(5))
    {
        cout<<"The number is even";
    }else
    {
        cout<<"The number is uneven";   
    }
}