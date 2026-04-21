#include "Organizatie.h"
#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;


OrganizatieStudenteasca::OrganizatieStudenteasca(char* n, int nr){
    if(n){
        nume= new char[strlen(n)+1];
        strcpy(nume,n);
        
    }else{
        nume= new char[11];
        strcpy(nume,"NECUNOSCUT");
    }
    numarMaximStudenti=nr;
    numarStudenti=0;
    membri = new Student*[numarMaximStudenti];
}

OrganizatieStudenteasca::~OrganizatieStudenteasca(){
    if (nume){
        delete [] nume;
    }
    if(membri){
        delete [] membri;
    }
}

void OrganizatieStudenteasca::afisare() const{
    cout << nume << "[";
    for(int i=0;i<numarStudenti;i++){
        membri[i]->afisare();
    }
    cout << "]" << '\n';
}

OrganizatieStudenteasca* OrganizatieStudenteasca::citire(){
    char n[100];
    int nrMax,nrC;
    cin >> n >> nrMax >> nrC;
    cin.get();
    OrganizatieStudenteasca* org = new OrganizatieStudenteasca(n,nrMax);
    for(int i=0;i<nrC;i++){
        Student* st= Student::citire();
        org->adaugare(st);
    }
    return org;
}

void OrganizatieStudenteasca::adaugare(Student* s){
    membri[numarStudenti++]=s;
}

int OrganizatieStudenteasca::numarStudentiFacultate(const char* f) const{
    int c=0;
    for(int i=0;i<numarStudenti;i++){
        if(strcmp(membri[i]->getFacultate(),f) == 0){
            c++;
        }
    }
    return c;
}
