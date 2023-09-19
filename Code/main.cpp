#include <bits/stdc++.h>
#include "section1.cpp"
#include "section2.cpp"

using namespace std;

int main() {
	// Section 1
	read_student_data();
	output_each_student_details();
	all_student_information();


	// Section 2
	store_student_score();
	avg_score_each_exam();
	calculate_display_grade();
	write_student_info();
}