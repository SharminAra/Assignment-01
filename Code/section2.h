#include <bits/stdc++.h>

using namespace std;
/*
1) Purpose        : The exam scores are saved in a two-dimensional array, where the row index corresponds
                    to the student number and the column index corresponds to the exam number.
2) Parameter(s)   : N/A
3) Precondition(s): N/A
4) Returns        : N/A
5) Side Effect    : N/A
*/
void store_student_score();
/*
1) Purpose        : Calculates the average score for each exam.
2) Parameter(s)   : N/A
3) Precondition(s): N/A
4) Returns        : N/A
5) Side Effect    : N/A
*/
void avg_score_each_exam();
/*
1) Purpose        : Uses the exam's average score to determine and present the student's grade for that
                    particular exam. For example, if the student's score falls within a range of ± 5 points
                    from the average, assign a grade of C.
2) Parameter(s)   : N/A
3) Precondition(s): N/A
4) Returns        : N/A
5) Side Effect    : N/A
*/
void calculate_display_grade();
/*
1) Purpose        : Create an output file that lists each student's name, their exam scores, and corresponding
                    grades in a neat format.
2) Parameter(s)   : N/A
3) Precondition(s): N/A
4) Returns        : N/A
5) Side Effect    : N/A
*/
void write_student_info();