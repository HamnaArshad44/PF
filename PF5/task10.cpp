#include<iostream>
using namespace std;
string ones(int onesN);
string tens (int tensN);
string teens(int num);
main(){
    int num , tensN,onesN;
    string word1 ,word2, word12;
    cout<<"Enter a number (1-99): ";
    cin>>num;
    tensN = (num/10);
    onesN = num%10;
    if(tensN == 1){
        word12 = teens(num);
        cout<< word12;
    }
    if(!(tensN ==1)){
        word1 = ones(onesN) ;
        word2 = tens(tensN); 
        word12 = word2 + word1;
        cout<< word12; 
    }
}
string ones(int onesN)
{
    string onesline;
    if(onesN == 1 ){
        onesline = "One";
    }
    if(onesN  == 2 ){
        onesline = "Two";
    }
    if(onesN  == 3 ){
         onesline ="Three";
    }
    if(onesN  == 4 ){
         onesline = "Four";
    }
    if(onesN  == 5 ){
         onesline = "Five";
    }
    if(onesN  == 6 ){
         onesline = "Six";
    }
    if(onesN  == 7 ){
         onesline = "Seven";
    }
    if(onesN  == 8 ){
         onesline = "Eight";
    }
    if(onesN == 9){
         onesline = "Nine";
    }
    return onesline;
}
string teens(int num){
    string teenline;
    if(num == 11 ){
        teenline = "Eleven";
    }
    if(num == 12 ){
        teenline = "Twelve";
    }
    if(num == 13 ){
        teenline =  "Thirteen";
    }
    if(num == 14 ){
        teenline =  "Forteen";
    }
    if(num == 15 ){
        teenline = "Fifteen";
    }
    if(num == 16 ){
        teenline =  "Sixteen";
    }
    if(num == 17 ){
        teenline =  "Seventeen";
    }
    if(num == 18 ){
        teenline =  "Eighteen";
    }
    if(num == 19 ){
        teenline =  "Nineteen";
    }
}
string tens (int tensN){
    string tensline;
     if(tensN  == 2 ){
        tensline = "Twenty";
    }
    if(tensN == 3){
        tensline = "Thirty";
    }
     if(tensN == 4 ){
        tensline = "Forty";
    }
     if(tensN == 5 ){
        tensline = "Fifty";
    }
     if(tensN == 6 ){
        tensline = "Sixty";
    }
     if(tensN== 7 ){
        tensline = "Seventy";
    }
     if(tensN == 8 ){
        tensline = "Eighty";
    }
     if(tensN == 9 ){
        tensline = "Ninety";
    }
    return tensline;
}

