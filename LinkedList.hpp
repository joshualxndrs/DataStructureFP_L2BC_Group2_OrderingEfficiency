#include <iostream>
using namespace std;

// DECLARATIONS ---------------------------------------------------------------------------------------------
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
        int size;

        // CONSTRUCTORS
        LinkedList() : head(NULL), tail(NULL), size(0){}, capacity = size, count = 0;

        // FUNCTIONS
        void add(T data);

        void display();

        int size();

        int totalsize();

        void checkCap();

        bool isEmpty();

        void remove();

        void peek();
    };
};

// IMPLEMENATIONS -----------------------------------------------------------------------------------

// CLASS FUNCTIONS
template <typename T>
void dsa::Node<T>::setData(T data)
{
    this->data = data;
}

template <typename T>
T dsa::Node<T>::getData()
{
    return this->data;
}

template <typename T>
void dsa::Node<T>::setNext(Node<T> *node)
{
    this->next = node;
}

template <typename T>
dsa::Node<T> dsa::Node<T>::getNext()
{
    return this->next;
}

template <typename T>
void dsa::LinkedList<T>::add(T data)
{
    // MAKING A NEW NODE FROM DATA
    dsa::Node<T> *newNode = new dsa::Node<T>(data);

    // LIST IS EMPTY
    if (size == 0)
    {
        this->head = newNode;
        this->tail = newNode;
        this->head->next = tail;
        this->size++;
        return;
    }
    // LIST IS NOT EMPTY
    this->tail->next = newNode;
    this->tail = newNode;
    this->size++;
    return;
}

template <typename T>
void dsa::LinkedList<T>::display()
{
    dsa::Node<T> *traverseNode = this->head;

    while (traverseNode != NULL)
    {
        cout << traverseNode->data << endl;
        traverseNode = traverseNode->next;
    }
}

template <typename T>
int dsa::LinkedList<T>::size()
{
    return count;
}

template <typename T>
int dsa::LinkedList<T>::totalsize()
{
    return capacity;
}

template <typename T>
void dsa::LinkedList<T>::checkCap()
{
    if (isEmpty())
    {
        cout << "The List is empty\n";
    }
    else if (isFull())
    {
        cout << "The List is full\n";
    }
    else
    {
        cout << "The List is not empty\n";
    }
}

template <typename T>
bool dsa::LinkedList<T>::isEmpty()
{
    return (size() == 0);
}

template <typename T>
void dsa::LinkedList<T>::remove()
{
    // check for  underflow
    if (isEmpty())
    {
        cout << "Currently Empty" << endl;
        return;
    }
    else
    {
        front = (front + 1) % capacity;
        count--;
    }
}

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
        cout << "The 1st Order is " << arr[head] << endl;
    }
}