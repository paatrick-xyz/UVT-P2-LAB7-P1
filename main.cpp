#include "Student.h"
#include "Organizatie.h"
#include <iostream>
#include <cstring>

using namespace std;

void afisareMaxFacultate(OrganizatieStudenteasca** l, int n, const char* facultateCeruta){
    int* org = new int[n];
    int maxVal = 0;
    
    for(int i=0;i<n;i++){
        org[i]=l[i]->numarStudentiFacultate(facultateCeruta);
        if(org[i]>maxVal){
            maxVal=org[i];
        }
    }
    if(maxVal){
        cout << "Nr max de studentii la " << facultateCeruta << " sunt in organizatiile:\n";
        for(int i=0;i<n;i++){
            if(org[i] == maxVal){
                l[i]->afisare();
            }
        }
    }
    delete [] org;
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
    afisareMaxFacultate(l,n,f);
    for(int i=0;i<n;i++){
        delete l[i];
    }
    delete [] l;
    return 0;
}