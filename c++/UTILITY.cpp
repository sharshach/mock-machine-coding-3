string generateId(int i=16){
    string s="";
    while(i--){
        s.push_back(65+(rand()%26));
    }
    return s;
}