
#include<iostream>
#include<string>

using namespace std;

int main(){
    string str ;
    cout<<"enter a word : ";
    cin>>str;
    int i=0;
    int j=str.length() -1;
    
    while(i<j){
      char temp = str[i];
      str[i] = str[j];
      str[j]=temp;

      i++;
      j--;
    }
    cout<<"the reversed word is "<<str<<endl;
    return 0;
    
}   