#include <iostream>
#include <string>
using namespace std;
#include "A.h"

int main(){
cout<<"Please enter your message\r\n>";
string mess = GetStr();
int len = GetLen(mess);
int a=0;
int b=0;
int m=26;
while(1){
    cout<<"Enter your first key(relatively prime to 26)\r\n>";
    cin>>a;
    if(Eucl(a,m)==1){
        break;
    }
}
cout<<"Enter your second key\r\n>";
cin>>b;
string encr;
for(int i = 0;i<len;i++){
    int ch = mess[i];
    ch-=97;
    ch=a*ch+b;
    ch%=m;
    ch+=97;
    encr+=(char)ch;
}
cout<<"Your encrypted message is : ";
cout<<encr<<endl;
//Decryption
string decr;
for(int i = 0;i<len;i++){
    int ch = encr[i];
    ch-=97;
    //modular inverse
    int intt = 1;
    while(1){
        if(a*intt%m==1){
           break;
        }
        intt++;
    }
    intt=intt*(ch+m-b);
    intt%=m;
    while(intt<0){
        intt+=26;
    }
    intt+=97;
    decr+=(char)intt;
}
cout<<"Your decrypted message is : ";
cout<<decr;
return 0;
}
