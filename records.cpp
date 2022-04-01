#include "records.h"
#include <iostream>

using namespace std;

Student::Student(int id_i, string name_i){
	id = id_i;
	name = name_i;
}
int Student::get_id(){
	return id;
}
string Student::get_name(){
	return name;
}
void Student::set_id(int new_id) {
	id = new_id;
}
void Student::set_name(string new_name) {
	name = new_name;
}

Course::Course(int id_j, string name_j, int credits_j){
	id = id_j;
	name = name_j;
	credits = credits_j;
}
int Course::get_id(){
	return id;
}
string Course::get_name(){
	return name;
}
int Course::get_credits(){
	return credits;
}
void Course::set_id(int new_id) {
	id = new_id;
}
void Course::set_name(string new_name) {
	name = new_name;
}
void Course::set_credits(int new_credits) {
	credits = new_credits;
}

Grade::Grade(int student_id_k, int course_id_k, unsigned char grade_k){
	student_id = student_id_k;
	course_id = course_id_k;
	grade = grade_k;
}
int Grade::get_student_id(){
	return student_id;
}
int Grade::get_course_id(){
	return course_id;
}
char Grade::get_grade(){
	return grade;
}
void Grade::set_student_id(int new_student_id) {
	student_id = new_student_id;
}
void Grade::set_course_id(int new_course_id) {
	course_id = new_course_id;
}
void Grade::set_grade(unsigned char new_grade) {
	grade = new_grade;
}



