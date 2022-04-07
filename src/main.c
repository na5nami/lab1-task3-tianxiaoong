#include <stdio.h>
struct StudentData{
char *stu_name;
int stu_id;
int stu_age;
};
int main(){
  struct StudentData student;
  student.stu_name="tianxiaolong";
  student.stu_id=2023464;
  student.stu_age=22;
  printf("Hello, %s",student.stu_name);
  printf("\nStudent Id is: %d",student.stu_id);
  printf("\nStudent Age is: %d",student.stu_age);
  printf("\nGoodbye");
  return 0;
}
