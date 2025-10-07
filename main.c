#include <stdio.h>

int main (){
    int finalExams[10] = {0};        // Step 1: Create and initialize array of size 10
    int *startPtr = finalExams;      // Points to start of array
    int *endPtr = finalExams + 10;   // Points to one past the end of array
    int *ptr;  

    printf("Print entire array before modification (locations 0-9):\n");
    for (ptr = startPtr; ptr < endPtr; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    // Step 2: Update first 5 elements using only pointers
    int scores1[5] = {90, 82, 65, 79, 67};
    ptr = startPtr;
    for (int i = 0; i < 5; i++) {
        *ptr = scores1[i];
        ptr++;
    }

    printf("Print entire updated array (locations 0-9):\n");
    for (ptr = startPtr; ptr < endPtr; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");


    // Step 3: Add two additional scores (using pointers only)

    // Step 4: Boost any score between 60–69 to 70

        /*

    QUESTIONS

    1) If you had sized the finalExams array based on your class size (5), 
       what just happened when you added scores for two additional students?

    2) If you executed: testPtr = startPtr - endPtr and then tried to store 
       the value "5" in location testPtr, what would happen?

    */







    return 0;
}