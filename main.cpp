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

void loadInData(vector <Assignment> &all);

int main(){

	vector <Assignment> allAssign;
	loadInData(allAssign);
	cout << allAssign[0].getName();
	cout << allAssign[0].getCourse();
	cout << allAssign[0].getDescription();
	cout << allAssign[1].getName();
	cout << "****Welcome to the College Planner**** \n";


	return 0;
}


void loadInData(vector <Assignment> &all){
	ifstream assignments;
	assignments.open ("assignments.txt");
	string tempName;
	string tempDue;
	string tempDes;
	string tempPoi;
	string tempCat;
	string tempCou;
	getline(assignments, tempName);
	getline(assignments, tempDue);
	getline(assignments, tempDes);
	getline(assignments, tempPoi);
	getline(assignments, tempCat);
	getline(assignments, tempCou);
	Assignment ass(tempName, stoi(tempDue), tempDes, stoi(tempPoi), stoi(tempCat), stoi(tempCou));
	all.push_back(ass);

	assignments.close();

	ifstream categories;
	categories.open ("categories.txt");


}
