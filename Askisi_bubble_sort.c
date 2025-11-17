/* Πρόγραμμα που γεμίζει πίνακα ακεραίων 10 τιμών
 με τυχαίες τιμές στο διάστημα [5-25] 
 α) Εμφανίστε τον πίνακα 
 β) Αναζητήστε με σειριακή αναζήτηση την τιμή 20
    και εμφανίστε ανάλογο μύνημα
 γ) Ταξινομήστε τον πίνακα σε αύξουσα σειρά και 
    εμφανίστε τον τελικό πίνακα */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10            // Lenght of array

#define LOWER 5         // Limits of 
#define UPPER 20        //  interval

int main()
{
    /* Dilwsis metavlitwn */
    srand(time(NULL));
    int A[N], i, k, search, found;
    found = 0;
    search = 20;

    /* Fill array with random int */
    for (i=0; i<N; i++) {
        A[i] = rand() % (UPPER + 1) + LOWER;
    }

    /* α) Print array */
    printf("Original array:\n[ ");
    for (i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n\n");

    /* β) Search 20 in array and print result */
    for (i=0; i<N; i++) {                               // Serial Search
        if (A[i] == search) {
            found = 1;
        }
    }

    if (found == 1) {                                   // Print found or not
        printf("Number %d found in array\n\n", search);
    }
    else {
        printf("Number %d NOT found in array\n\n", search);
    }

    /* γ) Buble sort array and print */
    for (k=0; k<N; k++) {
        for (i=0; i<N-k-1; i++){                          // Var permutation
            if (A[i] > A[i+1]) {
                A[i] = A[i] + A[i+1];
                A[i+1] = A[i] - A[i+1];
                A[i] = A[i] - A[i+1];
            }
        }
    }

    printf("Sorted array:\n[ ");                        // Print sorted list
    for (i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n\n");

    system("pause");
    return 0;
}