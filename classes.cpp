
class LRUCache : public Cache {
public:
    LRUCache(int capacity) {
        cp = capacity;
        head = NULL;
        tail = NULL;
    }

    void set(int key, int value) override {
  
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;
            moveToHead(node);
        } 

        else {
            Node* newNode = new Node(key, value);
            if (mp.size() == cp) {
        
                mp.erase(tail->key);
                Node* temp = tail;
                if (tail->prev) {
                    tail = tail->prev;
                    tail->next = NULL;
                } else {
                    head = tail = NULL;
                }
                delete temp;
            }
            
  
            if (!head) {
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            mp[key] = newNode;
        }
    }

    int get(int key) override {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        Node* node = mp[key];
        moveToHead(node);
        return node->value;
    }

private:
    void moveToHead(Node* node) {
        if (node == head) return;
        
      
        if (node == tail) {
            tail = tail->prev;
            tail->next = NULL;
        } else {
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }
        
  
        node->next = head;
        node->prev = NULL;
        head->prev = node;
        head = node;
    }
};
