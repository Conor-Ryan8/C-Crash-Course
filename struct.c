#include <stdio.h>

struct Person
{
  int age;
  int weight;
  int salary;
}
person1, person2;

int main()
{
  person1.age = 22;
  person1.weight = 50;
  person1.salary = 10000;

  person2.age = 34;
  person2.weight = 78;
  person2.salary = 40000;

  printf("Person2 Salary: %d\n", person2.salary);

  printf("Enter a new salary for Person2: ");
  scanf("%d", &person2.salary);

  printf("Person2 Salary: %d\n", person2.salary);

  return 0;
}

