#include <bits/stdc++.h>

using namespace std;

struct student {
	int numOfExamScores;
	string name;
	double avgExamScore;
	string letterGrade;
	vector <double> examScores;
};

vector <student> allStudent;

double average_score(vector <double> scores) {
	double total = 0;
	for(auto s: scores) {
		total += s;
	}
	return total / scores.size();
}

string letter_grade(double mark) {
	if(mark >= 95) return "A";
	if(mark >= 91.67) return "A-";
	if(mark >= 88.3) return "B+";
	if(mark >= 85) return "B";
	if(mark >= 81.67) return "B-";
	if(mark >= 78.33) return "C+";
	if(mark >= 75) return "C";
	if(mark >= 71.67) return "C-";
	if(mark >= 68.33) return "D+";
	if(mark >= 65) return "D";
	if(mark >= 61.67) return "D-";
	return "F";
}

string grade_check(double avg, double score) {
	if(score >= avg - 5 and score <= avg + 5) return "C";
	else if(score > avg + 15) return "A";
	else if(score > avg + 5) return "B";
	else if(score < avg - 15) return "F";
	return "D";
}