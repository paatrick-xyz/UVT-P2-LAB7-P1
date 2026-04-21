#include "Student.h"
#include "Organizatie.h"
#include <iostream>
#include <cstring>

using namespace std;

int countMaxFacultate(OrganizatieStudenteasca** l, char f[], int nrc){
    int c=0,cmax=0;
    for(int i=0;i<nrc;i++){
        c=0;
        if(strcmp(l[i]->getFacultate(),f)==0){
            c++;
        }
    }
    for(int i=0;i<nrc;i++){
        c=0
        if(strcmp(l[i]->getFacultate(),f)==0)
            cmax++;
        if(cmax==c){
            l[i]->afisare();
        }
    }
    return cmax;
}


int main(){
    int n;
    char f[100];
    cin >> n;
    cin.get();
    OrganizatieStudenteasca** l= new OrganizatieStudenteasca*[n];
    for(int i=0;i<n;i++){
        l[i]=OrganizatieStudenteasca::citire();
    }
    cin >> f;
    
    
    return 0;
}