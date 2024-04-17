// write 1 to 0 in patten
#include<iostream>
using namespace std;
int main(){
    int row,col,space=1;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            if(col==3 || row==5 || row==2 && col==2 || row==3 && col==1)    //1
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(row==1 ||row==3 || row==5 || row==4 && col==1 || row==2 && col==5)    //2
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(col==5 || row==5 || row==1|| row==3 )    //3
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(col==4 || row==4 || row==3 && col==2 )    //4
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(row==3 || row==5 || row==2 && col==1 || row==4 && col==5||row==1)    //5
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(col==1 ||row==1||row==5||row==3||row==4 && col==5 )    //6
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(col==5 || row==1)    //7
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(col==5 || row==5 || row==1 || row==3 || col==1)    //8
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(col==5 || row==3 || row==1 || row==2 && col==1)    //9
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (space=1;space<=3;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=5;col++)
        {
            if(row==1 || row==5 || col==1 || col==5)    //0
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}