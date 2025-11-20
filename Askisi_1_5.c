/*ΝΓΠ που να γεμίζει έναν πίνακα 5 θέσεων με ακεραίους που θα δίνει ο
χρήστης από το πληκτρολόγιο και στη συνέχεια να εμφανίζει τα στοιχεία του
πίνακα Στη συνέχεια ο χρήστης να πληκτρολογεί έναν αριθμό προς αναζήτηση
και το πρόγραμμα με τη βοήθεια της σειριακής –ακολουθιακής αναζήτησης να
αναζητά και να εμφανίζει τη θέση /τις θέσεις που βρίσκεται το στοιχείο. Αν το
στοιχείο δεν υπάρχει να εμφανίζεται το ανάλογο μήνυμα*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    int A[N], i, search, found=0;

    /* Fill array */
    for (i=0; i<N; i++) {
        printf("Enter the %d number: ", i+1);
        scanf("%d", &A[i]);
    }

    /* Print array */
    printf("\nThe array is: [ ");
    for (i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n");

    /* Search for number */
    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    for (i=0; i<N; i++) {
        if (search==A[i]) {
            printf("Number %d found in position %d\n", search, i+1);
            found =1;
        }
    }

    if (!found) {
        printf("Number %d NOT found\n", search);
    }
    

    system("pause");
    return 0;
}