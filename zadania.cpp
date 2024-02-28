#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void Los(int *p, int n, int mini, int maxi)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        cout<<int(mini + (maxi - mini)*(float)rand()/RAND_MAX)<<endl;
    }

}

int Min(int *p, int start, int stop)
{
    int mini = p[start];
    for (int i = start; i < stop; i++)
        {
            if (i < mini)
                mini = i;
        }

    cout<<mini<<endl;
}



int main()
{
    int tablica [15];
    Los(tablica, 15, 0, 100);
    int t [10];
    cout<<t<<endl;
    Min(t,1,5);
    return 0;
}
