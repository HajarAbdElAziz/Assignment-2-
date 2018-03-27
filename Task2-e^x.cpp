#include <iostream>

using namespace std;

long double power (long double x , double countOfPower)
{
    long double result=1;

    for(int j=0; j<countOfPower; j++)
    {
        result*=x;

    }
    return result;
}
long double factorial (long int num)
{
    long double factorialResult=1;

    for(int i=1; i<=num ; i++)
    {
        factorialResult*=i;

    }
    return factorialResult;
}

long double exponential(long double x)
{
    long double exponentialResult=1;
    for (int i=1; i<=100; i++)
    {
        exponentialResult+=(power ( x , i)/factorial (i));

    }

    return exponentialResult;
}

int main()
{
    int choice;
    long double x;

    do
    {
        cout<<"Please choose "<<endl<<"1- Enter the value of (x)"<<endl<<"2-Exit"<<endl;
        cin>>choice;
        if (choice==1)
        {
            cout<<"Please Enter the value of (x) : "<<endl;
            cin>>x;
            cout<<endl;
            cout<<"e^"<<x<<"="<<exponential(x)<<endl;
        }
        if (choice==2)
        {
            cout<<"Bye"<<endl;
            return 0;
        }
    }
    while (choice!=1 || choice!=2 );

    //return 0;
}
