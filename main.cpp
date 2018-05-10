/*
 * main.cpp
 *
 *  Created on: May 8, 2018
 *      Author: williamrussell
 */

#include <fstream>
#include <iostream>
#include <string>
#include "Assignment.h"
#include <vector>


using namespace std;

void loadInData(vector <Assignment> &all, vector <string> &cats, vector <string> &courses);
void displayAllAssignments(vector <Assignment> &all);
void newAssign(vector <Assignment> &all);

int main(){
	vector <string> allCat;
	vector <Assignment> allAssign;
	vector <string> allCourses;
	loadInData(allAssign, allCat, allCourses);
	newAssign(allAssign);
	cout << "****Welcome to the College Planner**** \n";
	displayAllAssignments(allAssign);

	return 0;
}


void loadInData(vector <Assignment> &all, vector <string> &cats, vector <string> &courses){
	ifstream assignments;
	assignments.open ("assignments.txt");


	Assignment tempAssignment;
	string tempName;
	string tempDue;
	string tempDes;
	string tempPoi;
	string tempCat;
	string tempCou;
for(int i = 0; i < 2; i++){
	getline(assignments, tempName);
	tempAssignment.setName(tempName);
	getline(assignments, tempDue);
	tempAssignment.setDue(stoi(tempDue));
	getline(assignments, tempDes);
	tempAssignment.setDescription(tempDes);
	getline(assignments, tempPoi);
	tempAssignment.setPoints(stoi(tempPoi));
	getline(assignments, tempCat);
	tempAssignment.setCategory(stoi(tempCat));
	getline(assignments, tempCou);
	tempAssignment.setCourse(stoi(tempCou));
	all.push_back(tempAssignment);
}
	assignments.close();

	ifstream categories;
	categories.open ("categories.txt");
	string cat;
	while (!categories.eof()){
		getline(categories, cat);
		cats.push_back(cat);
	}

	categories.close();

	ifstream courseList;
	courseList.open ("courses.txt");
	string course;
	while (!courseList.eof()){
		getline(courseList, course);
		courses.push_back(course);
	}
	courseList.close();



}
void displayAllAssignments(vector <Assignment> &all){
	for (int i = 0; i < all.size();i ++){
		cout << all[i].getName() << endl;
	}
}
void newAssign(vector <Assignment> &all){
	string name, des;
	int points, course, category, due;
	cout << "Assignment name?  \n" << endl;
	cin >> name;
	cout << endl << "Description?  \n" << endl;
	cin >> des;
	cout << endl << "Class? \n" << endl;
	cin >> course; //TODO class vector check/add
	cout << endl << "Points? \n";
	cin >> points;
	cout << endl << "Due Date? \n" << endl;
	cin >> due; //TODO due date check
	cout << "Category?  \n" << endl;
	cin >> category; //TODO category check/add
	Assignment tempAss(name, due, des, points, category, course);
	all.push_back(tempAss);

}
