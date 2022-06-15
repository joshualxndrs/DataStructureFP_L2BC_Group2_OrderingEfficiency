#include <iostream>
using namespace std;

// REFERENCED FROM FABIO'S CODE
// https://github.com/FabioSebs/DataStructureTA/blob/main/Week5/linkedlist.hpp

namespace dsa
{
    template <typename T>
    class Node
    {
    public:
        // PROPERTIES
        T data;
        Node<T> *next;

        // CONSTRUCTOR
        Node() : data(NULL), next(NULL){};
        Node(T x) : data(x), next(NULL){};

        // CLASS FUNCTIONS
        void setData(T data);

        T getData();

        void setNext(Node<T> *node);

        Node<T> getNext();
    };

    template <typename T>
    class LinkedList
    {
    public:
        // PROPERTIES
        dsa::Node<T> *head;
        dsa::Node<T> *tail;
        int listsize;

        // CONSTRUCTORS
        LinkedList() : head(NULL), tail(NULL), listsize(0){};

        // FUNCTIONS
        void add(T data);

        void display();

        int size();

        int totalsize();

        bool isEmpty();

        void remove();

        void peek();

        void clear();

        int findIndex(T data);
    };
};

// IMPLEMENATIONS -----------------------------------------------------------------------------------

// CLASS FUNCTIONS
// SET DATA IN NODE
template <typename T>
void dsa::Node<T>::setData(T data)
{
    this->data = data;
}

// GET DATA FROM NODE
template <typename T>
T dsa::Node<T>::getData()
{
    return this->data;
}

// SET NEXT NODE
template <typename T>
void dsa::Node<T>::setNext(Node<T> *node)
{
    this->next = node;
}

// GET NEXT NODE
template <typename T>
dsa::Node<T> dsa::Node<T>::getNext()
{
    return this->next;
}

// ADD ELEMENT TO LIST
template <typename T>
void dsa::LinkedList<T>::add(T data)
{
    // MAKING A NEW NODE FROM DATA
    dsa::Node<T> *newNode = new dsa::Node<T>(data);

    // IF LIST IS EMPTY
    // ADD TO HEAD
    if (listsize == 0)
    {
        this->head = newNode;
        this->tail = newNode;
        this->head->next = tail;
        this->listsize++;
        return;
    }

    // LIST IS NOT EMPTY
    this->tail->next = newNode;
    this->tail = newNode;
    this->listsize++;
    return;
}

//FINDING THE INDEX OF AN ELEMENT IN THE LIST
template <typename T>
int  dsa::LinkedList<T>::findIndex(T data){
    //Used to keep track of the Node Index
    int index = 0;  

    dsa::Node<T> *traverseNode = head;
    //LinkedList traversal for finding the node
    while(traverseNode!=NULL){
        if(traverseNode->data == data){         
            //If element found return index
            return index;               
        }
        traverseNode = traverseNode->next;
        index++;
    }   
    //If element not found
    return -1;                  
}

// PRINT ALL ELEMENTS IN THE LIST
template <typename T>
void dsa::LinkedList<T>::display()
{
    dsa::Node<T> *traverseNode = head;

    if(listsize>0){
        while (traverseNode != NULL)
        {
            cout << "Order No : " << findIndex(traverseNode->data) + 1 <<"\nCustomer Name : "<< traverseNode->data << "\n=============================="<<endl;
            traverseNode = traverseNode->next;
        }
    }
    
    else{
        cout<<"Order List is empty"<<endl;
        cout << traverseNode->data << endl;
    }
}

// GETS SIZE OF LIST
template <typename T>
int dsa::LinkedList<T>::size()
{
    return listsize;
}

// CHECK IF LIST IS EMPTY
template <typename T>
bool dsa::LinkedList<T>::isEmpty()
{
    return (size() == 0);
}


// REMOVE ELEMENT FROM LIST
template <typename T>
void dsa::LinkedList<T>::remove()
{
    dsa::Node<T> *traverseNode = head;
    if(traverseNode == NULL)
    {
        cout<<"Order list is empty."<<endl;
    }
    else
    {
        head = head -> next;
        free(traverseNode);
   }
}

// ClEAING ALL ELEMENT FROM LIST
template <typename T>
void dsa::LinkedList<T>::clear()
{
    dsa::Node<T> *traverseNode = head;
    if(listsize>0){
        while (traverseNode != NULL)
        {
            head = head -> next;
            free(traverseNode);
            traverseNode = traverseNode->next;
        }
    }
    
    else{
        cout<<"Order List is empty"<<endl;
    }
}

// PEAK THE TOP OF THE LIST
template <typename T>
void dsa::LinkedList<T>::peek()
{
    if (isEmpty())
    {
        cout << "Order Empty" << endl;
        return;
    }
    else
    {
        cout << "The 1st Order is " << this->head << endl;
    }
}
