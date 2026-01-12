#include <iostream>
#include <vector>



void solve(std::string str, std::string sub, int index){

    
    std::cout << sub << "\n";
    for(int i = index; i < str.size(); i++){
        sub += str[i];
        solve(str, sub, i + 1);
        sub.pop_back();
    }

}

void GenerateSubsets(std::string str){
    solve(str, "", 0);

}
int main(){
    GenerateSubsets("ABC");
    return 0;
}