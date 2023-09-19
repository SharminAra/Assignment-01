#include <bits/stdc++.h>
#include "student.cpp"

using namespace std;

void read_student_data() {
	fstream myFile;
  myFile.open("grades.txt", ios::in);

  if(myFile.is_open()) {
    string line;

    while(getline(myFile, line)) {
    	student s;
    	stringstream ss(line);  
	    string word;
	    while (ss >> word) {
	        if(word[0] >= '0' and word[0] <= '9') {
	        	s.numOfExamScores = stoi(word);

	        	for(int i = 0; i < s.numOfExamScores; i++) {
	        		ss >> word;
	        		s.examScores.push_back(stoi(word));
	        	}
	        	break;
	        }

	        s.name += word + ' ';
	    }
	    s.avgExamScore = average_score(s.examScores);
	    s.letterGrade = letter_grade(s.avgExamScore);

	    allStudent.push_back(s);
    }
  }

  myFile.close();
}

void output_each_student_details() {
	for(auto student: allStudent) {
		cout << "Student Name       = " << student.name << endl;
		cout << "Average Exam Score = " << student.avgExamScore << endl;
	  cout << "Letter Grade       = " << student.letterGrade << endl << endl << endl;
	}
}

void all_student_information() {
	for(auto student: allStudent) {
		cout << "Student Name       = " << student.name << endl;
		cout << "Num of Exam Scores = " << student.numOfExamScores << endl;
		cout << "All exam scores    = ";
		for(auto sc: student.examScores) cout << sc << " "; cout << endl;
		cout << "Average Exam Score = " << student.avgExamScore << endl;
	  cout << "Letter Grade       = " << student.letterGrade << endl << endl << endl;
	}
}