#pragma once

#ifndef RECORDS_H
#define RECORDS_H
#include <string>

class Student {
public:
	Student(int id_i, std::string name_i);
	int get_id();
	std::string get_name();
	void set_name(std::string new_name);
	void set_id(int new_id);
private:
	int id;
	std::string name;
};

class Course {
public:
	Course(int id_j, std::string name_j, int credits_j);
	int get_id();
	std::string get_name();
	int get_credits();
	void set_id(int new_id);
	void set_name(std::string new_name);
	void set_credits(int new_credits);
private:
	int id;
	std::string name;
	int credits;
};

class Grade {
public:
	Grade(int student_id_k, int course_id_k, unsigned char grade_k);
	int get_student_id();
	int get_course_id();
	char get_grade();
	void set_student_id(int new_student_id);
	void set_course_id(int new_course_id);
	void set_grade(unsigned char new_grade);

private:
	int student_id;
	int course_id;
	char grade;
};
#endif // RECORDS_H