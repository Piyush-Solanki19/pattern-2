#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=25;j++){
            if(i==1 && (j>=9 && j<=17 )||i==2 &&(j==8 ||j==18)
               ||i==3&&(j==7 || j==19)||i==4&&(j==8 || j==18)
               ||i==5&&(j==9 || j==17)||i==6&&(j==10 || j==16)
               ||i==7&&(j==11 || j==15)
               ||i==8&&(j==12 || j==14)||i==9 && j==13  )   
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}