#include<bits/stdc++.h>
using namespace std;

int search_pattern(string str , string pattern){
    int str_length = str.length();
    int pattern_length = pattern.length();

    for(int i=0 ; i<=str_length - pattern_length ; i++){  //it's the iteration on string who's index to find
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
    string temp = "";

    for(int i=0 ; i<str.length() ; i++){
        if(i>=index && i<=index+pattern_length-1){
            continue;
        }
        temp+=str[i];
    }
    return temp;
}

int main(){
    string str = "hello i'm tanvir";
    string pattern = "ta";

    int index = search_pattern(str , pattern);   // starting index where pattern matches string
    
    while(index != -1){
        str = erase_pattern(str , index , pattern.length());
        index = search_pattern(str , pattern); 
    }
    cout << str << endl;
}