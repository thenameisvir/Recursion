#include<iostream>
#include<cstring>
using namespace std;
void sequence(string str,string output,int index){
  if(index>=str.length()){
    cout<<output<<endl;
    return; 
  }
  char ch = str[index];

  sequence(str,output,index+1);

  output.push_back(ch);

  sequence(str,output,index+1);

}
int main(){
  string str  = "abc";
  string output = "";
  int index = 0;
  sequence(str,output,index);

}