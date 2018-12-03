#include<iostream>
using namespace std;

void isMagic(int num)
{
    int sum = 0;
    /*loop stops when n becomes 0 and
    sum becomes single digit*/
    while (num > 0 || sum > 9)
    {
        if (num == 0)
        {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
  if(sum == 1)      //checking if sum equals 1
    cout<<"It is a MAGIC number";
  else
     cout<<"It is NOT a MAGIC number";
}

int main()
{
    int n;
    cin>>n;
    isMagic(n);
    return 0;
}
