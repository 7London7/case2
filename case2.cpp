#include <iostream>
#include <string>
#include "case2.h"
using namespace std;

long long itc_math(string str1, string str2, char oper){
 int i = 0;
char sum;
 if(oper == '+'){
    while(str1[i] != '\0' && str2[i] != '\0'){
     sum = (str1[i] - '0') + (str2[i] - '0');
     i++;
 }
 if(oper == '-'){
    return a - b;
 }
 if(oper == '*'){
    return a * b;
 }
}
