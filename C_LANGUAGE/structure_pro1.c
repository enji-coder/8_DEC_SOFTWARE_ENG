/*
structure : structure is a userdefined data type which is contain similar 
and dis-similar data elements 

structure which is one kind of group which contain dissimilar data elements 

array vs structure 

array can contain only similar data elements in single variable 

at that time structure can contain multiple elements of different data types in 
single variable 

structure syntax : 

structure which is represent by struct keyword 

struct <structurename>
{
    datatype var;
    datatype var;
    .
    .
};
*/

#include<stdio.h>
struct Student
{
	int id;
	int score;	
};
main()
{
	// variable declaration 
	struct Student s1;
	
	s1.id = 101;
	s1.score = 88;
	
	printf("\n id = %d",s1.id);
	printf("\n score = %d",s1.score);
}