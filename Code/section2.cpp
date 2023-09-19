#include <bits/stdc++.h>

using namespace std;

double examScores[100][100], averages[100];
string studentName[100];
int numOfStudent, numOfExam;

void store_student_score() {
	fstream myFile;
  myFile.open("grades_Section2.txt", ios::in);

  if(myFile.is_open()) {
    string line;
    char c;
    int stundetNumber = 0;
    myFile >> numOfStudent >> numOfExam >> c;

    while(getline(myFile, line)) {
    	student s;
    	int examNumber = 0;
    	stringstream ss(line);  
	    string word, name;
	    while (ss >> word) {
	        if(word[0] >= '0' and word[0] <= '9') {
	        	examScores[stundetNumber][examNumber++] = stoi(word);
	        }
	        else name += word + " ";
	    }

	    studentName[stundetNumber] = name;
	    stundetNumber++;
    }
  }

  myFile.close();
}


void avg_score_each_exam() {
	for(int i = 0; i < numOfExam; i++) {
		double totalExamScore = 0;

		for(int j = 0; j < numOfStudent; j++) {
			totalExamScore += examScores[j][i];
		}
		double average = totalExamScore / numOfStudent;
		averages[i] = average;
		cout << "Average Score for Exam " << i+1 << " = " << average << endl;
	}
	cout << endl;
}

void calculate_display_grade() {
	for(int i = 0; i < numOfStudent; i++) {
		cout << "Student Name = " << studentName[i] << endl;
		for(int j = 0; j < numOfExam; j++) {
			cout << "Exam " << j+1 << " grade = " << grade_check(averages[j], examScores[i][j]) << endl;
		}
		cout << endl;
	}
}

void write_student_info() {
	fstream myFile;
  myFile.open("student_info.txt", ios::out);

  for(int i = 0; i < numOfStudent; i++) {
  	myFile << "Student Name = " << studentName[i] << endl;

  	for(int j = 0; j < numOfExam; j++) {
  		myFile << "Grade for Exam " << j+1 << " is = " << grade_check(averages[j], examScores[i][j]) << " for score " << examScores[i][j] << endl; 
  	}
  	myFile << endl;
  }

  myFile.close();
}
