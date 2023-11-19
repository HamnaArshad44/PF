#include<iostream>
using namespace std;
int N_of_cubes(long volume);
main()
{
    long volume;
    cout<<"Volume: ";
    cin>>volume;
    int ans=N_of_cubes(volume);
    cout<<"No of cubes: "<<ans;
}
int N_of_cubes(long volume)
{
    int cube=1;
    long sum=0;
    long cubic;
    int digits=1;
    while(sum<volume)
    {
        cubic=cube*cube*cube;
        sum = sum+cubic;
        cube++;
        digits++;
    }
    int total;
    if(sum == volume)
    {
        total=digits-1;
    }
    else{
        total=-1;
    }

return total;
}