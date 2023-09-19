#include <bits/stdc++.h>

using namespace std;

/*
1) Purpose        : Utilize a vector to store all the values and calculate the average score.
2) Parameter(s)   : scores
3) Precondition(s): N/A
4) Returns        : double
5) Side Effect    : N/A
*/
double average_score(vector <double> scores);
/*
1) Purpose        : Determines the grade based on the students exam marks.
2) Parameter(s)   : mark
3) Precondition(s): N/A
4) Returns        : string
5) Side Effect    : N/A
*/
string letter_grade(double mark);
/*
1) Purpose        : Evaluate the students' grades by comparing them to the average score.
2) Parameter(s)   : avg,score
3) Precondition(s): N/A
4) Returns        : string
5) Side Effect    : N/A
*/
string grade_check(double avg, double score);