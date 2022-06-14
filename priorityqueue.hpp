#include <iostream>
#include <map>
#include <vector>
using namespace std;

class priorityqueue {

    map<int, vector<string>> pq;
    int pqsize;

public:
    int size();
    bool isEmpty();
    void add(int p, string s);
    string remove();
};

// GET SIZE OF PRIORITY QUEUE
int priorityqueue::size(){
    return priorityqueue::pqsize;
}

// CHECK IF PRIORITY QUEUE IS EMPTY
bool priorityqueue::isEmpty(){
    return (size() == 0);
}

// ADD ELEMENT
void priorityqueue::add(int priority, string str) {
    // IF POSITION OF PRIORITY IS EMPTY
    if(!pq[priority].empty()) {
        // PUSH STRING TO QUEUE
        pq[priority].push_back(str);
    }
    
    // IF POSITION OF PRIORITY IS NOT EMPTY
    else {
        vector<string> vec;
        vec.push_back(str);
        pq[priority] = vec;
    }
}

string priorityqueue::remove() {
    if(!pq.begin()->second.empty()) {
        string temp = pq.begin()->second[0];
        pq.begin()->second.erase(pq.begin()->second.begin());
        if(pq.begin()->second.empty())
            pq.erase(pq.begin());
        return temp;
    }

    return "";
}