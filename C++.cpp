#include<iostream>
int main()
{
    unsigned long long int a,b;
    for(int i =1;;i++)
    {
        std::cout<<"Log "<<i<<":";
        a = i;b = 0;
        while(a!=4)
        {
            if(a%2 == 0)
                a/=2;
            else
                a = a*3+1;
            b++;
        }
        std::cout<<b<<"-iterations"<<std::endl;
    }
}
