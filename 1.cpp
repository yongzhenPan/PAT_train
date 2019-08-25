#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string str = "";
    getline(cin,str);
    int broken = 0;
    for(int i=0;;++i){
        if(str[i]==' ')
        broken=i;
    }
    string str1 = str.substr(0,broken);
    string str2 = str.substr(broken+1,str.length()-1-broken);

    stringstream ss;
    ss<<str1;
    int i1 =0;
    ss>>i1;
    ss.clear();
    ss<<str2;
    int i2=0;
    ss>>i2;
    ss.clear();

    int i3=i1+i2;
    ss<<i3;
    string str3 ="";
    ss>>str3;

    int count = 3;
    for(int i=str3.length()-1;i!=0;--i){
        --count;
        if(count==0 && str3[i-1]!='-'){
            count=3;
            str3.insert(i,",");
        }
    }
    printf("%s",str3.c_str());

    return 0;  
}
