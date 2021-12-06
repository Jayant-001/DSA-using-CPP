#include<bits/stdc++.h>
using namespace std;
class student{
 private:
 	int roll;
 	string name;
 public:
 	student(int roll,string s)
 	{
 		this ->roll = roll;
 		this ->name = s;

 	}
 	string getName() {
 		return name;
 	}
};