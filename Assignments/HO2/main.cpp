//## H01 - Commenting Code
//### Alexia Ducreay
//### Description:

//This program implements a list data structure that links together nodes of integers.

//### Files

//|   #   | File     | Description                      |
//| :---: | -------- | -------------------------------- |
//|   1   | main.cpp | Main driver of my list program . |


//### Instructions

//- This program does not require any non standard libraries

//### Example Command

//- None for now.


#include <iostream> //header file for input output streams

using namespace std;

int A[100]; //set size of array 'A' to 100

struct Node
{
    int x;    //declare a variable of type int called x 
    Node *next;  // a pointer variable to store the address of a new next node having same datatype
    Node()
    {
        x = -1; //initialize x to -1
        next = NULL; //point next to null
    }
    Node(int n)
    {
        x = n; 
        next = NULL;
    }
};

class List //name of class is List
{
  private:
    Node *Head;// pointer variable holding the address of the node with first value
    Node *Tail;// pointer variable holding the address of the node with last value
    int Size;//declare a variable of type int called Size

  public:
    List() //constructor 
    {
        Head = Tail = NULL; // makes head and tail = NULL
        Size = 0;//initialize Size to 0
    }

    void Push(int val) //adding values to the end of the list
    {
        // allocate new memory and init node
        Node *Temp = new Node(val);

        if (!Head && !Tail) // Head  ! = NULL && Tail ! = NULL
        {
            Head = Tail = Temp;// Head points to Tail and and Tailpoints to Temp so Head and Tail = Temp 
        }
        else
        {
            Tail->next = Temp; //Temp will point to the space after tail 
            Tail = Temp; //Taill will point to temp
        }
        Size++; //Size is incramented by one
    }

    void Insert(int val)
    {
        // allocate new memory and init node
        Node *Temp = new Node(val);

        // figure out where it goes in the list

        Temp->next = Head; //node next to temp will point to head
        Head = Temp;
        if (!Tail)  //if Tail is not equal to Null
        {
            Tail = Head; // point tail to head
        }
        Size++; //increment Size by 0ne
    }

    void PrintTail() //function to print the Tail of a Lst
    {
        cout << Tail->x << endl;
    }

    string Print() //printing out an linked using to_string
    {
        Node *Temp = Head;// Get a reference to beginning of local list
        string list;
         
        // Loop through local list and  print values
        while (Temp != NULL)
        {
            list += to_string(Temp->x) + "->";
            Temp = Temp->next;
        }

        return list;
    }

    // not implemented 
    int Pop()
    {
        Size--;
        return 0; //
    }

    List operator+(const List &Rhs)
    {
        // Create a new list that will contain both when done
        List NewList;

        // Get a reference to beginning of local list
        Node *Temp = Head;

        // Loop through local list and Push values onto new list
        while (Temp != NULL)
        {
            NewList.Push(Temp->x);
            Temp = Temp->next;
        }

        // Get a reference to head of Rhs
        Temp = Rhs.Head;

        // Same as above, loop and push
        while (Temp != NULL)
        {
            NewList.Push(Temp->x);
            Temp = Temp->next;
        }

        // Return new concatenated version of lists
        return NewList;
    }

    // Implementation of [] operator.  This function returns an
    // int value as if the list were an array.
    int operator[](int index)
    {
        Node *Temp = Head; // Get a reference to beginning of local list

        if (index >= Size) //if index is greater than or equal to Size
        {
            cout << "Index out of bounds, exiting";
            exit(0);// successful termination of the program
        }
        else
        {

            for (int i = 0; i < index; i++)
            {
                Temp = Temp->next;
            }
            return Temp->x;
        }
    }
    //declares a non-member function, and makes it friend of the class
    // meaning it can access the private and protected members of the class List.
    friend ostream &operator<<(ostream &os, List L)
    {
        os << L.Print();
        return os;
    }
};

int main(int argc, char **argv)
{
    List L1;
    List L2;
    //push value of 'i' on L1 24 times 
    for (int i = 0; i < 25; i++)
    {
        L1.Push(i); //push value of 'i' on L1
      
          }

    //push value of 'i' on L2 for 49 times
    for (int i = 50; i < 100; i++)
    {
        L2.Push(i); //push value of 'i' on L2
    }

    //cout << L1 << endl;
    L1.PrintTail(); // print Tail of L1
    L2.PrintTail();// print Tail of L2

    List L3 = L1 + L2; 
    cout << L3 << endl;//print out L3

    cout << L3[5] << endl;//print out position 5 of L3
    return 0;
}
