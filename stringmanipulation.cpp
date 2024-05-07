#include<iostream>
#include<string>
#define stf(s,e) string s;cout<<e<<"\t";cin>>s;
using namespace std;
void f1(){
cout<<"Enter the string :\t";
}
class sstring{
public:
string st;
sstring(string st){
this->st=st;
};
void addressEachCharacteer(){
const char* ptr=&st[0];
while(*ptr!='\0'){
cout<<*ptr<<'\t'<<static_cast<const void*>(ptr)<<endl;
ptr++;
}
}
string sstringConcate(string s2){
return st+s2;
}
bool compare(string s2){
return (st==s2);
}
int length(){
int count=0;
const char* ptr=&st[0];
while(*ptr!='\0'){
count++;
ptr++;
}
return count;
}
string upper(){
string s="";
for(int i=0;i<(st.size());i++){
s+=(int(st[i])>=97 && int(st[i])<=122)?char(int(st[i])-
32):st[i];
}
return s;
}
string reverse(){
string s="";
for(int i=st.size();i>=0;i--){
s+=st[i];
}
return s;
}
string insert(string s2,int index){
return st.substr(0,index)+s2+st.substr(index,st.size());
}
};
int main(){
cout<<"Enter the choice : \t";
string name="";
sstring o(name);
char ch='1';
while(ch!='d'){
cout<<R"(
Enter 1 for address of the string
Enter 2 for concatination of the strings
Enter 3 for comparision between strings
Enter 4 for finding the length of the string
Enter 5 for converting into uppercase
Enter 6 for reverse the string
Enter 7 for inserting the string into another string at particular index
Enter d for exit the program
)"<<endl;
cout<<"\nEnter the choice:\t";
cin>>ch;
if(ch=='1'){
f1();
cin>>o.st;
o.addressEachCharacteer();
}
else if(ch=='2'){
f1();
cin>>o.st;
string s2;
cout<<"Enter the second string :\t";
cin>>s2;
cout<<o.sstringConcate(s2)<<endl;
}
else if(ch=='3'){
cout<<"Enter the first string :\t";cin>>o.st;
stf(s2,"Enter the second string :\t");
cout<<"The given string are "<<
((o.compare(s2))?"":"not")<<"same"<<endl;
}
else if(ch=='4'){
f1();
cin>>o.st;
cout<<"The length of the string is :\t"<<o.length()<<endl;
}
else if(ch=='5'){
f1();
cin>>o.st;
cout<<o.upper()<<endl;
}
else if(ch=='6'){
f1();
cin>>o.st;
cout<<"The reverse of the string is :\t"<<o.reverse()<<endl;
}
else if(ch=='d'){
cout<<"Program completed"<<endl;
}
else if(ch=='7'){
f1();
cin>>o.st;
stf(s2,"Enter the string :\t");
int n;
cout<<"Enter the index :\t";
cin>>n;
cout<<o.insert(s2,n)<<endl;
}
else{
cout<<"unvalid Command"<<endl;
}
}
return 0;
}
