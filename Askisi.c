#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10], i, search, found=0;

    for (i=0; i<10; i++) {                              //Fill array
        printf("Enter the %d number: ", i+1);
        scanf("%d", &A[i]);
    }

    for (i=0; i<10; i++) {                              //Print array
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Enter number to search: ");                 //Enter search number
    scanf("%d", &search);

    for (i=0; i<10; i++) {                              //iterate array and
        if (A[i] == search) {                           //check if every element == search
            found = 1;
        }
    }

    if (found) {                                        //Print result
        printf("Number %d FOUND\n", search);
    }
    else {
        printf("Number %d NOT FOUND\n", search);
    }
    
    system("pause");
    return 0;
}

//'for' to fill array
//'for' to print array
//input number to find
//serial search for number with 'for'
//print found or not found