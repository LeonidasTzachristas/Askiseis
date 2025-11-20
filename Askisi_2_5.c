/* ΝΓΠ που να παίρνει τον πίνακα int D[5]={3,5,2,1,0,4} να τον ταξινομεί σε
φθίνουσα σειρά με τη βοήθεια του αλγορίθμου της φυσαλίδας και στη συνέχεια
με τη βοήθεια της διχοτομικής –δυαδικής αναζήτησης να αναζητά την τιμή 0
και να εμφανίζει τη θέση που βρέθηκε. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, start, end, mid, temp, found=0, search=0, D[6]={3,5,2,1,0,4};


    /* Bubble sort */
    for (i=0; i<6; i++) {
        for (k=5; k>i; k--) {
            if (D[k]>D[k-1]) {
                temp = D[k];
                D[k] = D[k-1];
                D[k-1] = temp;
            }
        }
    }

    printf("\nThe array is: [ ");
    for (i=0; i<6; i++) {
        printf("%d ", D[i]);
    }
    printf("]\n");

    /* Binary search */
    start = 0;
    end = 5;
    while (!found && start<=end) {
        mid = (start+end) / 2;
        if (search<D[5] || search>D[0]) {
            printf("Number %d out of bounds\n", search);
        }
        if (search==D[mid]) {
            found = 1;
            printf("Number %d found in position %d\n", search, mid);
        }
        else if (search<D[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if (!found) {
        printf("Number %d NOT found\n", search);
    }


    system("pause");
    return 0;
}