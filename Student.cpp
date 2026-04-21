#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student(char*n, int a, char*f){
    if(n!=nullptr){
        nume=new char[strlen(n)+1];
        strcpy(nume,n);
    }
    else{
        nume=new char[11];
        strcpy(nume,"NECUNOSCUT");
    }
    if(f!=nullptr){
        facultate=new char[strlen(f)+1];    
        strcpy(facultate,f);
    }
    else{
        facultate=new char[12];
        strcpy(facultate,"NECUNOSCUTA");
    }
    an=a;
}

Student::~Student(){
    if (nume){
        delete [] nume;
    }
    if(facultate){
        delete [] facultate;
    }    
}

void Student::afisare() const{
    cout << nume << " ,an = " << an << ", " << facultate << "; ";
}

Student* Student::citire() {
    int a;
    char n[100],f[100];
    cin.getline(n,100);
    n[strlen(n)]='\0';
    //cin.get();
    cin >> a >> f;
    cin.get();
    return new Student(n,a,f);
}
