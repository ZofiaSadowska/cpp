#include <iostream>
#include <math.h>
using namespace std;

void binarne(int tab[], int n, int a, double b)
{
    int l = int(log2(b))+1;
    int licznik = 0;
    int mid = (a+b)/2;
    for(int i =0; i<l;i++)
    {
        if(mid > n)
        {
            b = mid;
            mid = (a+b)/2;
            licznik++;
        }
        else if (mid< n) {
            a = mid;
            mid = (a+b)/2;
            licznik++;
        }

    }
    if (mid == n)
    {
        cout<<"znaleziono liczbe za "<<licznik<<" razem"<<endl;
    }
    else
    {
        cout<<"nie znaleziono liczby"<<endl;
    }



}






int main()
{
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};

    binarne(tab, 9, 0,10);




    return 0;
}
