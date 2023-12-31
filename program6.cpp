#include <iostream>
using namespace std;

int main() {
    float a,b,c,d,e, marks;
    cout<<"Enter marks of first subject";
    cin>>a;
    cout<<"Enter marks of second subject";
    cin>>b;
    cout<<"Enter marks of third subject";
    cin>>c;
    cout<<"Enter marks of fourth subject";
    cin>>d;
    cout<<"Enter marks of fifth subject";
    cin>>e;
    marks = (a+b+c+d+e)/5;
    if (marks >= 90) {
        cout << "Grade - A";
    } else if (marks >= 80) {
        cout << "Grade - B";
    } else if (marks >= 70) {
        cout << "Grade - C";
    } else if (marks >= 60) {
        cout << "Grade - D";
    } else {
        cout << "Grade - F";
    }
    return 0;
}