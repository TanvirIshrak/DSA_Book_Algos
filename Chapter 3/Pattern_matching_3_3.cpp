#include<bits/stdc++.h>
using namespace std;

int pattern_matching(string str , int str_len , string pattern , int pattern_len){
    if(pattern_len > str_len) return -1;

    int max = str_len - pattern_len + 1;
    for(int i= 0 ; i< max ; i++ ){
        for(int j=0 ; j<pattern_len ; j++){
            if(str[i+j] != pattern[j]){
                break;
            }
            if(j+1 == pattern_len) 
                return i;
        }
    }
    return -1;
}

int main(){
    string str = "hello i'm tanvir";
    string pattern = "tan";

    int match = pattern_matching(str , str.length() , pattern, pattern.length());
    cout<<"Index matched = "<< match << endl;

}