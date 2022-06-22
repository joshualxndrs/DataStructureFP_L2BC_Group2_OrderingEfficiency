#include <iostream>
using namespace std;

template <class X>
class queue
{
    X *arr;         //an array to store queue elements
    int capacity;   //maximum capacity of the queue (size)
    int front;      //to track the first element in the queue
    int rear;       //to track the last element  in the queue
    int count;      //size count of the queue (to increment)
 
public:
    queue(int size = 100);     //constructor with default size 100
 
    void remove();            //the functions included in the class queue
    void add(X x);
    void peek();
    int size();
    bool isEmpty();
    bool isFull();
    void display();
    void formatToAdmin();
    int totalSize();
    void clear();

};
 
//Constructor
template <class X>
queue<X>::queue(int size)
{
    arr = new X[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}


//function to add an item to the queue
template <class X>
void queue<X>::add(X item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Order Full" << endl;
        return;
    }
    else
    {
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        count++;    
    }
}
 
//function to remove the front element
template <class X>
void queue<X>::remove()
{
    // check for queue underflow
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

//function to remove the front element
template <class X>
void queue<X>::clear()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Currently Empty" << endl;
        return;
    }
    else
    {
        for (int i = front; i <= rear; i++){
            front = (front + 1) % capacity;
            count--;
        }
    }
}

//function to print the front element of the queue
template <class X>
void queue<X>::peek()
{
    if (isEmpty())
    {
        cout << "Order Empty" << endl;
        return;
    }
    else
    {
        cout << "The 1st Order is " << arr[front] << endl;  
    }
}

//function to return the size of the queue
template <class X>
int queue<X>::size() {
    return count;
}


//function to check if the queue is empty or not
template <class X>
bool queue<X>::isEmpty() {
    return (size() == 0); //will return true if size()==0 and false if not.
}
 
//function to check if the queue is full or not
template <class X>
bool queue<X>::isFull() {
    return (size() == capacity); //will return true if size() is filled to the max capacity and false if not.
}

//function to check the max size of the queue
template <class X>
int queue<X>::totalSize() {
    return capacity; //will return the number that represents the declared size of the queue 
}

//function to display the elements inside the queue
template <class X>
void queue<X>::display()
{
    if (isEmpty())
    {
        cout<<"Order List is empty"<<endl;
    }
    else
    {
        for (int i = front; i <= rear; i++) //will traverse through the queue and print i element then increments itself to print the next element
            cout << "Order No : " << i+1 << "\nCustomer Name : " <<arr[i] << "\n=============================="  << endl;

    }
}





