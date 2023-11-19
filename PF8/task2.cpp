#include<iostream>
using namespace std;
float checkDamage(string type1, string type2, int attack, int defence);
main()
{
   string type1, type2;
   int attack, defence;
   cout<<"Enter your type: ";
   cin>>type1; 
   cout<<"Enter opponent's type: ";
   cin>>type2;  
   cout<<"Enter your attack power: ";
   cin>>attack; 
   cout<<"Enter opponent's defence: ";
   cin>>defence;
   float ans = checkDamage(type1, type2, attack, defence);
   cout<<"Damage: "<<ans;
}
float checkDamage(string type1, string type2, int attack, int defence)
{
   float damage = 50*(attack/defence); 
   if(type1 == "fire" && type2 == "water")
   {
    damage *= 0.5;
   }
   else if(type1 == "water" && type2 == "fire")
   {
    damage *= 2;
   }
   else if(type1 == "fire" && type2 == "grass")
   {
    damage *= 2;
   }
   else if(type1 == "grass" && type2 == "fire")
   {
    damage *= 0.5;
   }
   else if((type1 == "fire" && type2 == "electric")||(type1 == "electric" && type2 == "fire")||(type1 == "electric" && type2 == "grass")||(type1 == "grass" && type2 == "electric"))
   {
    damage *= 1;
   }
    else if(type1 == "water" && type2 == "grass")
   {
    damage *= 0.5;
   }
     else if(type1 == "grass" && type2 == "water")
   {
    damage *= 2;
   }
     else if(type1 == "water" && type2 == "electric")
   {
    damage *= 0.5;
   }
     else if(type1 == "electric" && type2 == "water")
   {
    damage *= 2;
   }
   return damage;


}