/*
 * Assignment.cpp
 *
 *  Created on: May 8, 2018
 *      Author: williamrussell
 */

#include "Assignment.h"
#include <string>


Assignment::Assignment(string n){
	name = n;
		this->due = 0;
		description = " ";
		points = 0;
		category = 0;
		course = 0;
}
Assignment::Assignment(){
	name = " ";
	this->due = 0;
	description = " ";
	points = 0;
	category = 0;
	course = 0;
}
Assignment::Assignment(string n, int due, string des, int p, int cat, int cou){
	name = n;
	this->due = due;
	description = des;
	points = p;
	category = cat;
	course = cou;

}

Assignment::~Assignment() {
	// TODO Auto-generated destructor stub
}
string Assignment::getName(){
	return name;
}
void Assignment::setName(string n){
	name = n;
}
int Assignment::getDue(){
	return due;
}
void Assignment::setDue(int d){
	due = d;
}
string Assignment::getDescription(){
	return description;
}
void Assignment::setDescription(string d){
	description = d;
}
int Assignment::getCategory(){
	return category;
}
void Assignment::setCategory(int c){
	category = c;
}
int Assignment::getCourse(){
	return course;
}
void Assignment::setCourse(int c){
	course = c;
}
int Assignment::getPoints(){
	return points;
}
void Assignment::setPoints(int p){
	points = p;
}
