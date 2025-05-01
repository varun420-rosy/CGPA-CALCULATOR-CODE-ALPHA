#include <iostream>
using namespace std;

int main() {
    int n; // number of courses
    long int reg;
    float credits, gradePoints, totalCredits = 0 , totalGradePoints = 0 ;
    string name,dept,branch;
    cout<<"ANNA UNIVERSITY CGPA CALCULATOR\n\n"<<endl;
    cout<<"\n";
    cout<<endl;
    cout<<"Enter Your Name: "<<endl;
    cin>>name;
    cout<<"Enter Your Register Number: "<<endl;
    cin>>reg;
    cout<<"Enter your Branch(B.E/B.Tech/B.Arch) :  "<<endl;
    cin>>branch;
    cout<<"Enter Your Department: "<<endl;
    cin>>dept;
    cout << "Enter the number of courses: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits;

        cout << "Enter grade points (out of 10) for course " << i + 1 << ": ";
        cin >> gradePoints;

        totalCredits += credits;
        totalGradePoints += (gradePoints / 10) * credits;
    }

    float cgpa = (totalGradePoints / totalCredits) * 10;
    cout<<endl;
    cout<<endl;
    cout<<"\n\nName :  "<<name<<endl;
    cout<<"Register Number :  "<<reg<<endl;
    cout<<"Branch :  "<<branch<<endl;
    cout<<"Department :  "<<dept<<endl;
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout<<endl;
    cout << "\nCGPA (out of 10): " << cgpa << endl;

    return 0;
}
