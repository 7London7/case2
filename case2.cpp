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

string itc_plus(string str1, string str2){

 long long sum;
int i = 0;
string summa;

     itc_reverse_str(str1);
    itc_reverse_str(str2);
    if(itc_len(str1) > itc_len(str2)){
      sum = itc_len(str1) - itc_len(str2);
while(sum != 0){
str2 = str2 + '0';
}
    }else{
sum = itc_len(str2) - itc_len(str1);
while(sum != 0){
str1 = str1 + '0';
}
       }
while(str1[i] != '\0' && str2[i] != '\0'){
    summa = str1[i] + str2[i];
i++;
}

return summa;
}
