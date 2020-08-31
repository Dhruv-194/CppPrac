#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct course {
    int cgpa;
    int roll;
};

int main() {
    struct course *ptr;
    int i, n;
    printf("Enter the number of records: ");
    scanf("%d", &n);

    // Memory allocation for noOfRecords structures
    ptr = (struct course *)malloc(n * sizeof(struct course));
    for (i = 0; i < n; ++i) {
        printf("Enter the roll number and cgpa respectively:\n");
        scanf("%d %d", &(ptr + i)->roll, &(ptr + i)->cgpa);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < n; ++i){
       cout << "Roll number = " << (ptr + i)->roll << "\t" << "CGPA = "<< (ptr + i)->cgpa<<endl ;
    }

       float sum =0;

       for ( i=0 ; i<n ; ++i)
       {
           sum += (ptr+i)->cgpa;
       }

       float avg = sum /n;

       cout << "The average of the class = \t"<<avg;


    return 0;
}
