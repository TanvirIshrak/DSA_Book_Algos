#include<bits/stdc++.h>
using namespace std;

int search_pattern(string str, string pattern){
    int str_length = str.length();
    int pattern_length = pattern.length();

    for(int i=0 ; i<=str_length - pattern_length ; i++){
        for(int j=0 ; j<pattern_length ; j++){
            if(str[i+j] != pattern[j]){
                break;
            }
            else if(j == pattern_length - 1){
                return i;
            }
        }
    }
    return -1;
}

string erase_pattern(string str , int index , int pattern_length){
    string temp="";

    for(int i=0 ; i<str.length() ;i++){
        if(i >= index && i <= index + pattern_length - 1){
            continue;
        }
        temp+=str[i];
    }
    return temp;
}

string insert_replace(string str , int index , string placeholder){
    string temp = "";

    for(int i=0 ; i<str.length() ; i++){
        if(i == index){
            temp += placeholder;
        }
        temp += str[i];
    }
    // if pattern is the end word  (worst case)
    if(index == str.length()){
        temp += placeholder;
    }
    return temp;
}


int main(){
    //(worst case)
    // string str = "hello i'm tanvir";
    // string pattern = "tanvir";
    // string placeholder = "sirius";

    string str = "hello i'm tanvir";
    string pattern = "i'm";
    string placeholder = "he's";

    int index = search_pattern(str,pattern);
    str = erase_pattern(str , index , pattern.length());
    str = insert_replace(str , index , placeholder);

    cout<< str <<endl;
}