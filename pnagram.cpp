#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int str;
cin>>str;
int arr[26]={0};
if(n<26){cout<<"NO";}
else{
    for(int i=0;i<n;i++){
        int num;
        if(str[i]>='a' && str[i]<='z'){
            num=str[i]-'a';}
        else{num=str[i]-'A';}
        arr[num]-=1;    
    }int count=0; 
    for(int i=0;i<26;i++){
        if(arr[i]==0){count++;}
    }
    if(count==0){cout<<"YES";}
    else{cout<<"NO";}
}
return 0;
}