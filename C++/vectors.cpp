#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v) // it displays the elements entered in the vector
{
    for (int l = 0; l < v.size(); l++)
    {
        cout << v[l] << " ";
    }
    cout << endl;
};
int main()
{
    int size;
    cout << "What is the size of the vector you want ?" << endl; // i dont know why it is not working
    cin >> size;
    vector<int> vec1;
    static int element; // makes the element value to 0
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector" << endl;
        cin >> element;
        vec1.push_back(element); // it inserts the ele element ot the vector
    };
    vec1.pop_back();                           // pop_back function removes the last element
    vector<int>::iterator iter = vec1.begin(); // iterator function iterates the iter
    // begin functions starts counting from the 0 th place like it begins
    display(vec1);
    vec1.insert(iter + 1, 9, 911); // the second one shows the number of 911 you want to add
    // iter+1 inserts the number at this place
    // insert function inserts the number you want to insert

    display(vec1); // i tis updated display function

    return 0;
}