#ifndef A
#define A

string GetStr(){
string s;
cin>>s;
return s;
}

int GetLen(string s){
int l = 0;
for(int i = 0;s[i]!='\0';i++){
    l++;
}
return l;
}

int Eucl(int i1,int i2){
    while(i1!=0&&i2!=0){
        if(i1>=i2){
            i1%=i2;
        }else{i2%=i1;}
    }
    if(i1>0){
        return i1;
    }else{return i2;}
}

#endif
