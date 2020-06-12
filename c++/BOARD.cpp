#include<bits/stdc++.h>
using namespace std;
#include"UTILITY.cpp"
class BOARD{
    string id;
    string name;
    bool privacy;//true if private
    string url;
    vector <string> members;
    vector <string> lists;
public:
    BOARD(string name){
        id=generateId();
        this->name=name;
        privacy=false;
        url="sharshach.github.io/boards/"+id; 
    }
    void printId(){
        cout<<id<<endl;
    }
    string getId(){
        return this->id;
    }
    void setName(string name){
        this->name=name;
    }
    void setPrivacy(bool privacy){
        this->privacy=privacy;
    }
};