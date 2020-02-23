#include <iostream>

using namespace std;

template<typename T>
T maxelem(const T* arr, int size){
 T mx = arr[0];
 for(int i = 1; i < size; ++i){
    if(arr[i] > mx) mx = arr[i];
 }
 return mx;
}

int main()
{
    int ai[4] = {1,2,3,4};
    string as[4] = {"a","b","d","c"};

    cout << maxelem<int>(ai, 4) << endl;
    cout << maxelem<string>(as, 4) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
