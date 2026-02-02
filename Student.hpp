#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include<iostream>
using namespace std;

class Student {
    private:
        string* name;
        int* age;

    public:
        Student();
        ~Student();

        void setName(string s);
        void setAge(int i);

        string getName() const;
        int getAge() const;        
        
};

#endif