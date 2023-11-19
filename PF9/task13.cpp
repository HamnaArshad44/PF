#include<iostream>
using namespace std;
void jazzchord(string chords[], int size); 
main()
{
    int size;
    cout<<"Enter the number of chords: ";
    cin>>size;
    if(size<=0)
    {
        cout<<"Invalid input. Number of chords must be greater than 0.";
    }
  
        string chords[size];
    cout<<"Enter " << size<<" chords, one per line:"<<endl;
    for(int i=0; i<size; i++){
    cin>>chords[i];
    } 
    jazzchord(chords,size);
}
void jazzchord(string chords[], int size)
{
    string ch;
    string New[100];
    for(int i=0; i<size; i++)
    {
        ch=chords[i];
        int l = ch.length();
        if(ch[l-1]=='7')
        {
            New[i]=chords[i];
            
        }
        else{
            New[i]=chords[i]+'7';
            
        }
    }
    cout<<"["<<New[0];
    for(int i=1; i<size; i++)
    {
        cout<<", "<<New[i];
    }
    cout<<"]";
   
}