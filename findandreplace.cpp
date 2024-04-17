#include <iostream>
#include <string>
using namespace std;

string FindAndReplace(string text, string ftext, string ctext){
  if (text.find(ftext) > 0 && text.find(ftext) < text.length() ){
  string pre = "", next = ""; 
  int a = text.length(), b = text.find( ftext ), c = ftext.length();
  if ( b != 0 ) {  
        pre = text.substr( 0, b );  
      } 
      if ( b != a-1 ) {  
        next = text.substr( b+c, a );
      }
      text = pre+ctext+next;
  }
  return text;
}

int main() {
    string text = "This is a test string", ftext = "test", ctext = "working code", print = FindAndReplace(text,ftext,ctext);
    cout << print;
    return 0;
}
