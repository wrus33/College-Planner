/*
 * Assignment.h
 *
 *  Created on: May 8, 2018
 *      Author: williamrussell
 */

#include <string>

using namespace std;

#ifndef ASSIGNMENT_H_
#define ASSIGNMENT_H_

class Assignment {
public:
	Assignment();
	Assignment(string n, int due, string des, int p, int cat, int cou);
	Assignment(string n);
	virtual ~Assignment();
	string getName();
	void setName(string);
	int getDue();
	void setDue(int);
	string getDescription();
	void setDescription(string);
	int getCategory();
	void setCategory(int);
	int getCourse();
	void setCourse(int);
	void setPoints(int);
	int getPoints();


private:
	string name;
	int due;
	string description;
	int points;
	int category;
	int course;
};

#endif /* ASSIGNMENT_H_ */
