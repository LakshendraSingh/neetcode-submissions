class MyHashMap {
public:
    vector <vector <int>> v;
    int max=100001;
    MyHashMap() {
        v.resize(max,vector(2,-1));
    }
    int loc(int key){
        return (key % max);
    }
    void put(int key, int value) {
        v[loc(key)][0]=key;
        v[loc(key)][1]=value;
    }
    
    int get(int key) {
        return (v[loc(key)][1]);
    }
    
    void remove(int key) {
        v[loc(key)][0]=-1;
        v[loc(key)][1]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */