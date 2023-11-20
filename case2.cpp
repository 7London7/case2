#include <iostream>
#include <string>
#include "case.h"
using namespace std;

long long itc_len(string str){
    int i = 0;
    int k = 0;
    while(str[i] != '\0'){
        k = k + 1;
    i++;
    }
    return k;
}

string itc_reverse_str(string str){
 string reverse = "";
for(long long i = itc_len(str) - 1; i >= 0;i--){
        reverse = reverse + str[i];
}
 return reverse;
}

string itc_plus(string str1, string str2, char oper){
 int i = 0;
 string sum = "";
 if(oper == '+'){
     itc_reverse_str(str1);
    itc_reverse_str(str2);
    if(itc_len(str1) > itc_len(str2))
        
     for(int i = 0; i < str1.size(); i++){
         sum = sum + '0';
 }
}
}
