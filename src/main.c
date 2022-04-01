/* hello.c */
#include <stdio.h>

struct StudentData{
char *stu_name;
int stu_id;
int stu_age;
};
int main ()
{
  struct StudentData student;
  student.stu_name = "Maryia";
  student.stu_id = 123456;
  student.stu_age = 45;
  
	printf ("Hello,%s",student.stu_name);
	printf ("\nStudent Id is: %d",student.stu_id);
  printf("\nStudent Agebis: %d",student.stu_age);
  return 0;
}
