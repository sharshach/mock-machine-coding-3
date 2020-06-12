#include"BOARD_MANAGER.cpp"
int main(){
    BOARD_MANAGER BM;
    string s1,s2;
loop:
    cout<<"\033[1;34mharsha@terminal:~$ \033[0m";
    cin>>s1;
    if(s1=="END")goto end;
    cin>>s2;
    if("BOARD"==s1){
        if("CREATE"==s2){
            BM.BOARD_CREATE();
        }else if("DELETE"==s2){
            BM.BOARD_DELETE();
        }else if("ADD_MEMBER"==s2){
            
        }else if("REMOVE_MEMBER"==s2){

        }else if("name"==s2){

        }else if("privacy"==s2){

        }else{
            cout<<"WRONG INPUT"<<endl;
        }
    }else if("LIST"==s1){

    }else if("CARD"==s1){

    }
    else if("SHOW"==s1){
        if("BOARDS"==s2){
            BM.SHOW_BOARDS();
        }else{
            cout<<"WRONG INPUT"<<endl;
        }
    }else{
        cout<<"WRONG INPUT"<<endl;
    }
    goto loop;
end:
    cout<<"BYE BYE"<<endl;
}