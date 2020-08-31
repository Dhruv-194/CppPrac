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
        for( i = 0;i < n; ++i)
    {
       //To find the largest element
       if((ptr + 0)->cgpa < (ptr + i)->cgpa )
          { (ptr + 0)->cgpa  = (ptr + i)->cgpa ;
          (ptr + 0)->roll = (ptr + i)->roll ;}
    }
    cout << "Maximum CGPA = " << (ptr + 0)->cgpa << "\t" << "Roll Number = "<< (ptr + 0)->roll ;

    return 0;
}
