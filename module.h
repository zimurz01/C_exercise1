#ifndef EXERCISE_1_MODULE_H
#define EXERCISE_1_MODULE_H
typedef struct Student Student;
Student* create_student();
void print_student(int, Student**);
void sort(Student**, int);
void destroy_student(Student*);
#endif
