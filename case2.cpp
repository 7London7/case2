#include <iostream>
#include <string>
#include "case2.h"
using namespace std;

long long itc_math(long long a, long long b, char oper){
 if(oper == '+'){
    return a + b;
 }
 if(oper == '-'){
    return a - b;
 }
 if(oper == '*'){
    return a * b;
 }
}
