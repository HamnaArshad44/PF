#include<iostream>
using namespace std;
main()
{
int integers[10];
for(int i=0; i<11; i++)
{
    integers[i] =i;
}
for(int i=0; i<11; i++)
{
 for(int j=i; j<11; j++)
{
  if(j%2==0)
  {
    integers[i]=j;
    break;
  }
}
}
for(int i=5;i<11;i++)
{
    if(i%2!=0)
    {
        integers[i]=i;
    }
}
for(int i=0; i<11; i++)
{
  cout<<integers[i];

}

}
