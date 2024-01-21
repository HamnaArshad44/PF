#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);
main()
{
    const int size =100;
    string names[size]; int adNumbers[size]; float percentages[size];  string fileName;
    int count = 0;
    getStudentDetails(names, adNumbers,  percentages,  size, count, "task5.txt");
    saveToFile(names, adNumbers,  percentages,  count, "TopperStudent.txt");
}
void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
    int i=0;
    string number,percent;
    fstream file;
    file.open(fileName, ios::in);
    while (!file.eof())
    {
        getline(file,names[i]);
         getline(file,number);
          getline(file,percent);
          adNumbers[i]=stoi(number);
      percentages[i]=stoi(percent);   
      count++; 
      i++;

    }
   
    file.close();

}
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string path)
{
    fstream file;
    file.open(path, ios::out);
    for (int i = 0; i < count; i++)
    {
        if(percentages[i] > 70)
        {        
file << "Name: " << names[i] << endl;
        file << "Admission Number: " << adNumbers[i] << endl;
        file << "Percentage: " << percentages[i] << endl;
    }
    }
    file.close();
}
