#include<iostream.h>
using namespaces std;
int main()
{
    int num=153;
int total=0;
int rem,x=num;
while(num!=0)
{
    rem=num%10;
    total=total+rem*rem*rem;
    num=num/10;
}
if(x==total)
{
    cout<<"Armstrong number";
}
else{
  cout<<"Not Armstrong Number";
}
}
