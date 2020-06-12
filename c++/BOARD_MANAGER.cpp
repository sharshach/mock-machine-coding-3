#include"BOARD.cpp"
class BOARD_MANAGER{
private:
    map <string,BOARD *> boards;
public:
    void BOARD_CREATE(){
        string name;
        cin>>name;
        BOARD *NEW=new BOARD(name);
        boards[NEW->getId()]=NEW;
        cout<<"NEW BOARD CREATED WITH ID: ";
        NEW->printId();
    }
    void SHOW_BOARDS(){
        for(auto i:boards){
            i.second->printId();
        }
    }
    void BOARD_DELETE(){
        string id;
        cin>>id;
        delete boards[id];
        boards.erase(id);
    }
};