#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

 
int main(){

    std::vector<int> arr {1, 2, 2, 2, 3,3,4, 4, 5 };

    for(int i : arr)
        std::cout << i << " ";
    std::cout << "\n";

    auto it = std::remove_if(arr.begin(), arr.end(), [&arr](int a){
        int n = 0;
        for(int i = 0; i < arr.size(); i++)
            if(arr[i] == a) n++;
        return n > 1;

    });
    arr.erase(it, arr.end());
    for(int i : arr)
        std::cout << i << " ";
    std::cout << "\n";


    return 0;
}