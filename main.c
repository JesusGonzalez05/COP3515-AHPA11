#include <stdio.h>

int main(void) {
    int finalExams[10] = {0};
    int *startPtr = &finalExams[0];
    int *endPtr = &finalExams[9];
    int *ptr;

    printf("Print entire array before modification (locations 0-9):\n");
    for (ptr = startPtr; ptr <= endPtr; ptr++) {
        printf(" %d ", *ptr);
    }
    printf("\n");

    printf("Load the contents of the finalExams array...\n");

    // Load first 5 scores using pointers
    int scores[5] = {90, 82, 65, 79, 67};
    ptr = startPtr;
    for (int i = 0; i < 5; i++) {
        *ptr = scores[i];
        ptr++;
    }

    printf("Print entire updated array (locations 0-9):\n");
    for (ptr = startPtr; ptr <= endPtr; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    printf("Adding new scores to the array...\n");

    // Add two new scores using pointers
    ptr = startPtr + 5;
    *ptr++ = 81;
    *ptr++ = 72;

    printf("Print entire array (locations 0-9):\n");
    for (ptr = startPtr; ptr <= endPtr; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    // Boost D scores (60–69) to 70
    for (ptr = startPtr; ptr <= endPtr; ptr++) {
        if (*ptr >= 60 && *ptr <= 69) {
            *ptr = 70;
        }
    }

    printf("Print entire array after boosting D scores to C (locations 0-9):\n");
    for (ptr = startPtr; ptr <= endPtr; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
        /*

    QUESTIONS

    1) If you had sized the finalExams array based on your class size (5), 
       what just happened when you added scores for two additional students?

       buffer overflow, this can cause crashes and even allow hackers in.

    2) If you executed: testPtr = startPtr - endPtr and then tried to store 
       the value "5" in location testPtr, what would happen?

       it would point to an invalid memory location and undefined behavior. 

    */







    return 0;
}