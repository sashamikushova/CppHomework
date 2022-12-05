//13.7
#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
string output;
int kol=1;
getline(cin, s);
int znak=0;
int j=0;
while (s[j]==' '){
   j++;
}
for (int i = j; i < s.size(); i++) {
     if ((s[i]==' ') && (znak==0)) {
        output.push_back(',');
        znak++;
     }
     else if((s[i]!=' ')){
        output.push_back(s[i]); 
        znak=0;
     }
}
cout<<output;
 }