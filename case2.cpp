#include <iostream>
#include <string>
#include "case2.h"
using namespace std;
long long itc_math1(string str){
    int a = 0, st = 1; int i = str.size()-1;
while(i >= 0){
    a = a +  (str[i] - '0') * st; //1 2 4 8
    st = st * 2;
    i--;
}
return a;
}
long long itc_math(string str1, string str2, char oper){
 int i = 0;
 int sum;
 if(oper == '+'){
    sum =  itc_math1(str1) + itc_math1(str2);
 }
}
