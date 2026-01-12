#include <iostream>
#include <vector>
#include <stack>

bool isValid(std::string str){
    std::stack<char> sc;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ')'){
            if(sc.empty()){
                return false;
            }
            else{
                sc.pop();
            }
        }else{
            sc.push('(');
        }
    }

    return sc.empty();
}
std::vector<char> chars {'(', ')'};

void generate(int n, std::string str){
    if(str.size() == n * 2){
        if(isValid(str))
        std::cout << str << "\n";
        return;
    }
    for(int i = 0; i < chars.size(); i++){
        str += chars[i];
        generate(n, str);
        str.pop_back();
    }

}
void Solve(int n){
    generate(n, "");
}
int main(){

    Solve(3);
    return 0;
}




