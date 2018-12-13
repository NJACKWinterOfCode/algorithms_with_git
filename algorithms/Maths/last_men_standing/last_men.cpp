#include<iostream>
using namespace std;
void last_two_alive(int n)
{    int first = 1, last = n, turn = 1;
    if(n == 3)
    cout<<first<<" and "<<last;
        while(n>3)
        {
         if(n%2 != 0)
                  first += turn * 2;
        else
                  last -= turn;
                  turn *= 2;
                  n = n/2;
        }
        cout<<first<<" and "<<last;
        }

        int main()
        {
        int no_of_criminals;
        cin>>no_of_criminals;
        last_two_alive(no_of_criminals);
        return 0;
        }
