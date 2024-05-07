#include <iostream>
using namespace std;
int main(){
 
 FILE *inputFile = fopen("input.txt", "r");
 FILE *outputFile = fopen("output.txt", "w");
 int ch;
 while ((ch = fgetc(inputFile)) != EOF){
 
 if (!isspace(ch)){
 
 fputc(ch, outputFile);
 }
 }
 fclose(inputFile);
 fclose(outputFile);
 cout<<"done"<<endl;
 return 0;
}