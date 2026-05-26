#include <stdio.h>
#include <stdlib.h>
#include "module.h"
int main() {
    int n;
    int i;
    printf("Welcome, how many students would you like to register?\n");
    scanf("%d",&n);
    Student* s[n];

    for(i=0;i<n;i++){
        s[i]=create_student();
    }

    printf("Before sort:\n");
    print_student(n,s);
    sort(s,n);
    printf("\nAfter sort:\n");
    print_student(n,s);

    for(i = 0; i < n; i++){
        destroy_student(s[i]);
    }

}
