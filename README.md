# COP3515-AHPA11
AHPA No. 11 (Changing Grades) Instructions
Hello everyone,

For this exercise, you will practice working with pointers in C. Please carefully follow the instructions below:

Instruction
Step 1: 

Create an array of fixed size 10, initialized to zeros.

Define a start pointer and an end pointer that indicate the valid values in the array.

Print the initialized array (all 10 elements).

Step 2:

Using only pointers, update the first 5 elements with the given scores: 90, 82, 65, 79, 67
Print the entire array (all 10 elements).
Step 3:

Using only pointers, add two additional scores to the array (again using pointers).
Print the entire array again (all 10 elements).
Step 4:

For any score between 60 and 69, update it to 70.
Print the final array after boosting.
Important Notes
You must use pointers to access and update the array. Indexing (e.g., arr[i]) is not allowed (not even for printing).
Grading:
Autograder: Check if you print the correct array after each step (4 prints in total).
Manual:
Pointer usage: if you don’t use pointers, you will lose the manual-grading portion.
Answering Questions: answer both questions (below) inside your .c file as comments.
Do not upload PDFs or text files—submit exactly one .c file.
Output Example
Below is an example of how your output may look. Your formatting may vary; what matters is that you print all 10 elements after each modification.

Print entire array before modification (locations 0-9):
 0  0  0  0  0  0  0  0  0  0
Load the contents of the finalExams array...
Print entire updated array (locations 0-9):
90 82 65 79 67  0  0  0  0  0
Adding new scores to the array...
Print entire array (locations 0-9):
90 82 65 79 67 81 72  0  0  0
Print entire array after boosting D scores to C (locations 0-9):
90 82 70 79 70 81 72  0  0  0

Questions (answer inside your .c as comments)
Assuming you had sized the finalExams array based on your class size (5), what just happened when you added the scores for the two additional students to your array? What would this mean in terms of programming security?
If you executed the code: testPtr = startPtr - endPtr and then tried to store the value "5" in location testPtr, what would happen?
