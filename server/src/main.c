#include <stdio.h>
#include <stdlib.h>

#define NEW(Obj) (Obj *) malloc(sizeoff(Obj))

#define Person struct TPerson
struct TPerson {
  char* name;
};

Person* new_person(Person **p, char *name) {
  Person *tmp = NEW(Person);
  tmp->name = name;
  *p = tmp;
  return *p;
}

int main() {
  Person *p = new_person(&p, "Windows");
  printf("%s\n", p->name);
  return 0;
}
