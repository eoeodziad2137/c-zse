#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;

    cout<<"Podaj wartosci a, b, c rozdzielajac je spacjami; "<<endl;
    cout<<"Wprowadzone liczby to: ";
    cin >> a >> b >> c;

    int max;
    int min;
    int sum;

    if (a>b)
    {
        max = a;
        min = b;
        sum = c;
    }
    if (a<b)
    {
        max = b;
        min = a;
        sum = c;
    }
    if (c<min)
    {
        cout<<sum<<" "<<min<<" "<<max<<endl;
    }
    if (c>min)
    {
        if (c<max)
        {
            cout<<min<<" "<<sum<<" "<<max<<endl;
        }
        if (c>max)
        {
            cout<<min<<" "<<max<<" "<<sum<<endl;
        }
        
        
    }
    
    
    
    
}