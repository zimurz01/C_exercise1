#include "module.h"
#include <stdio.h>
#include <stdlib.h>
struct Student{
    int id;
    int age;
    double avg;
};

Student *create_student(){
    int a,b;
    double c;
    Student *s;
    printf("\nInsert the student's id:");
    scanf("%d",&a);
    printf("\nInsert the student's age:");
    scanf("%d",&b);
    printf("\nInsert the student's average:");
    scanf("%lf",&c);
    s=(Student*) malloc(sizeof(Student));
    if (s==NULL) return NULL;
            s->id=a;
            s->age=b;
            s->avg=c;
            return s;
};

void print_student(int n, Student** s){
int i;
for(i=0;i<n;i++){
    printf("\nStudent number %d:",i);
    printf("\nID: %d , Age: %d , Average: %lf",s[i]->id, s[i]->age, s[i]->avg);

}
}

void sort(Student** s, int n){
    int i, j;

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){

            if(s[j]->avg > s[j+1]->avg){
                Student* temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

void destroy_student(Student* s){
    if(s != NULL){
        free(s);
    }
}
