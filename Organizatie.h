#include "Student.h"

#ifndef __ORGANIZATIE_H
#define __ORGANIZATIE_H

class OrganizatieStudenteasca{
  char * nume;
  int numarStudenti;
  int numarMaximStudenti;
  Student **membri;

public:
  OrganizatieStudenteasca(char*, int);
  ~OrganizatieStudenteasca();
  void afisare() const;
  static OrganizatieStudenteasca* citire();
  void adaugare(Student*);
  char* getFacultate() const{
      return membri->facultate;
  }
};

#endif