#include<bits/stdc++.h>
using namespace std;
int main(){
  int a=10;
int b=0;
try{
if(b==0)throw 0;
cout<<a/b<<endl;
}
  catch(...){
cout<<"throw from the try block,!"<<endl;
  }
cout<<"program ended normally"<<endl;
return 0;
}
