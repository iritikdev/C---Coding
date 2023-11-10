#include<bits/stdc++.h>
using namespace std;


class ArrayList {

    public:
    int size = 0;
    int capacity = 0;

        int *arr;
    
        ArrayList(int size) {
            arr = new int[size];
            capacity = size;
        }
    

    void print() {
        for (int i = 0; i < size; i++) 
            cout << *(arr + i) << " ";
    }

    void insert(int item) {
        if(capacity == size) {
            capacity = size * 2;
            int *newArray = new int[capacity];

            for (int i = 0; i < size; i++) 
                newArray[i] = arr[i];

            arr = newArray;
            
        }

        arr[size++] = item;
        
    }

    int indexOf(int item) {

        for (size_t i = 0; i < size; i++) 
            if(arr[i] == item)
                return i;
        
        return -1;
    }

    void removeAt(int index) {
        if(index < 0 || index >= size){
            cout <<"Invalid Index" << endl;
            return;
        }

        for (size_t i = index; i < size; i++)
            arr[i] = arr[i + 1];
        
        size--;
    }

    int max() {
        int max = INT16_MIN;
        for (size_t i = 0; i < size; i++) {
            if(max < arr[i]) max = arr[i];
        }
        return max;
    }

    int min() {
        int min = INT32_MAX;
        for (int i = 0; i < size; i++) {
            if(arr[i] < min)
                min = arr[i];
        }
        return min;
    }

    void reverse() {
        for (size_t i = 0, j = size - 1; i < j; i++, j--) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        
    }

    void insertAt(int item, int index) {
        // 10 20 30 40
        //        2
        if(capacity == size) {
            capacity = size * 2;
            int *newArray = new int[capacity];

            for (int i = 0; i < size; i++) 
                newArray[i] = arr[i];

            arr = newArray;
        }

        if(index < 0 || index > size) {
            cout << "Invalid syntax" << endl;
            return;
        }
           
        for (int i = size; i > index; i--)
            arr[i] = arr[i - 1];

        arr[index] = item;
        size++;
    }

    int at(int pos) {
        return arr[pos];
    }
    // find union
    // void unionArray(ArrayList items) {
    //     set<int> s;

    //     for (int i = 0; i < items.size; i++) 
    //         s.insert(items.at(i));
        
    //     for (int i = 0; i < size; i++)
    //         s.insert(at(i));

    //     for (auto itr = s.begin(); itr != s.end(); itr++) 
    //         cout << *itr << " ";
        
    // }

    void intersection(ArrayList items) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < items.size; j++) 
                if(arr[i] == items.at(j))
                    cout << arr[i]<<" ";
        }
    }

    void set(int item, int index) {
        arr[index] = item;
    }

    void rotation(int place) {
        for (int j = 0; j < place; j++) {
            int temp = arr[0];
            for (int i = 0; i < size-1; i++)
                arr[i] = arr[i + 1];
            arr[size - 1] = temp;
        }
    }


};

int main(int argc, char const *argv[])
{
    ArrayList a(3);

    a.insert(10);
    a.insert(20);
    a.insert(30);
    a.insert(40);

    ArrayList b(3);

    b.insert(10);
    b.insert(20);
    b.insert(30);
    b.insert(40);

    a.unionArray(b);
    a.print();

    return 0;
}
