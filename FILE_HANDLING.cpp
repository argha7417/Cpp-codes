//FILE HANDLING_______C++
#include<iostream> 
#include<fstream> 

using namespace std; 
 
int main() 
{ 
 int no_of_student,i,roll; 
 char name; 
 cout<<"How many students?"; 
 cin>>no_of_student; 
 ofstream fout; 
 fout.open("sample.txt"); 
 fout<<"Name"<<"\t"<<"Roll"<<endl; 
 for(i=0;i<no_of_student;i++) 
 { 
  cout<<"Name: "<<endl; 
  cin>>name; 
  cout<<"Roll: "<<endl; 
  cin>>roll; 
  fout<<name<<"\t"<<roll<<endl; 
 } 
 fout.close(); 
 return 0; 
}
