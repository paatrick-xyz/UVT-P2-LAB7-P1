#ifndef __STUDENT_H
#define __STUDENT_H

class Student{
  char *nume;
  int an;
  char* facultate;

public:
  Student(char*, int, char*);
  ~Student();
  void afisare() const;
  static Student* citire();
  char* getFacultate() const{
      return facultate;
  }
};

#endif
