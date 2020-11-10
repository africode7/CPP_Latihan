#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void setcolor(unsigned short color){
 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(hCon,color);
}
int main(){
 string inp,hasil;
 char c;
 cout << "---------------------------------------------------" << endl;
 setcolor(12);
 cout << "-- ";
 setcolor(10);
 cout << "name program : kerang ajaib" << endl;
 setcolor(12);
 cout << "-- ";
 setcolor(10);
 cout << "author : africode7" << endl;
 setcolor(12);
 cout << "-- ";
 setcolor(10);
 cout << "follow github : https://github.com/africode7" << endl;
 setcolor(7);
 cout << "---------------------------------------------------" << endl;
 do {

   int random = rand() % 1000 + 1;
   setcolor(12);
   cout << "[Masukan Input]";
   setcolor(10);
   cout << " >> ";
   setcolor(7);
   getline(cin,inp);
   if(random > 500){
     hasil = "ya";
   } else {
     hasil = "tidak";
   }
   if(inp == ""){
    setcolor(12);
    cout << "[INFO] ";
    setcolor(10);
    cout << ">> ";
    setcolor(7);
    cout << "Isi pertanyaan terlebih dahulu!" << endl;
   } else {
   setcolor(12);
   cout << "[Jawaban] ";
   setcolor(10);
   cout << ">> ";
   setcolor(7);
   cout << '"' << hasil << '"'<< endl;
   }

 } while (true);
   return 0;
}
