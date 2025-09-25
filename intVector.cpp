#include <iostream>
#include <vector>

using namespace std;

class intVector
{
    private:
        int* number;
        int length;
    public:
        intVector(); // default constructor
        intVector(int, int); // overloaded constructor
        ~intVector(); // deconstructor
        void push_back(int); // mutator
        int& at(int&) const;
        int size() const;
};
intVector::intVector() 
{
    number = nullptr;
    length = 0;
}
intVector::intVector(int val, int n)
{
    number = new int[n];
    length = n;
    for (int i = 0; i < length; i++)
        number[i] = val;
    
}
intVector::~intVector()
{
    delete [] number;
    number = nullptr;
    length = 0;
}
void intVector::push_back(int val)
{
    int* temp_arr = new int[length + 1];

    for (int i = 0; i < length; i++)
        temp_arr[i] = number[i];

    temp_arr[length] = val;
    length++;
    number = temp_arr;

}
int& intVector::at(int& pos) const
{
    return number[pos];

}
int intVector::size()const
{
    return length;
}
int main()
{
    intVector i;
    cout << "size: " << i.size() << endl;
    i.push_back(2);
    i.push_back(4);
    cout << i.size();





    return 0;
}
