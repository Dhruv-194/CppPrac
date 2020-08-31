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


    //Bubble sort for applying sorting of data
    int flag;
       for (i=0; i<n ; i++){
        flag = 0;
        for ( int j =0 ; j<n-i-1; j++)
        {
             if ((ptr+j)->cgpa > (ptr+j+1)->cgpa)
             {
                 int temp = (ptr+j)->cgpa;
                 (ptr+j)->cgpa = (ptr+j+1)->cgpa;
                 (ptr+j+1)->cgpa = (ptr+j)->cgpa;
                 flag = 1;
             }
        }
        if (flag == 0)
        {
            break;
        }
       }
 printf("Displaying Sorted Information:\n");
    for (i = 0; i < n; ++i){
       cout << "CGPA = "<< (ptr + i)->cgpa<<endl ;
    }

    return 0;
}
