class LRUCache {
public:
    class Node{
        public:
        int key;
        int value;        
        Node*prev;
        Node*next;

        Node(int _key,int _value){
            key=_key;
            value=_value;
            prev=next=NULL;
        }
    };
    int capacity;
    unordered_map<int,Node*>mpp;
    Node*head;
    Node*tail;

    LRUCache(int capacity) {
        this->capacity=capacity;
        mpp.clear();
            head=new Node(-1,-1);
    tail=new Node(-1,-1);


        head->next=tail;
        tail->prev=head;
    }
    void addnode(Node*newnode){
        Node*headnext=head->next;
        newnode->next=headnext;
        headnext->prev=newnode;
        head->next=newnode;
        newnode->prev=head;
    }
    void deletenode(Node*deletenode){
        Node*delnodeprev=deletenode->prev;
        Node*delnodenext=deletenode->next;
        delnodeprev->next=delnodenext;
        delnodenext->prev=delnodeprev;

    }
    int get(int key) {
        if(mpp.find(key)!=mpp.end()){
         Node*resnode=mpp[key];
        deletenode(resnode);
        addnode(resnode);
        mpp[key]=head->next;
                 return resnode->value;


        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            Node*existingnode=mpp[key];
            deletenode(existingnode);

            mpp.erase(key);
            existingnode->value=value;
            addnode(existingnode);
            mpp[key]=existingnode;
            return;//        return; // ✅ don’t continue to create new node
            //\U0001f449mistake You was always creating a new node even when key already existed.


        }
        if(mpp.size()==capacity){
            Node*tailprev=tail->prev;
            mpp.erase(tailprev->key);
            deletenode(tailprev);
        }
        Node*newnode=new Node(key,value);
        addnode(newnode);
        mpp[key]=newnode;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */