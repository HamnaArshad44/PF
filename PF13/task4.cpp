#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName);
main()
{
    string names[100];
    int ages[100];
    float matricMarks[100], fscMarks[100], ecatMarks[100];
    int size, count = 0;
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, 100, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, "student.txt");
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    string c;
    for (int i = 0; i < size; i++)
    {
        cout << "Name: ";
        cin.ignore();
        getline(cin, names[i]);
        cout << "Age: ";
        cin >> ages[i];
        cout << "Matric Marks: ";
        cin >> matricMarks[i];
        cout << "fsc Marks: ";
        cin >> fscMarks[i];
        cout << "Ecat Marks: ";
        cin >> ecatMarks[i];
        cout << "Enter no to stop and yes to continue Enter: ";
         cin.ignore();
        cin >> c;
        if (c == "No" || c == "no")
        {
            break;
        }
        count++;
    }
}
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string path)
{
    fstream file;
    file.open(path, ios::out);
    for (int i = 0; i <= count; i++)
    {
        file << "Name: " << names[i] << endl;
        file << "Age: " << ages[i] << endl;
        file << "Matric Marks: " << matricMarks[i] << endl;
        file << "Fsc Marks: " << fscMarks[i] << endl;
        file << "ecat Marks: " << ecatMarks[i] << endl<<endl;
    }
    file.close();
}
