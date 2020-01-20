#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

json j;

void Collatz (long numero){
    
    cout << numero << ",";
    j.push_back(numero);
    if (numero == 4) {
        cout << "2,1";
        j.push_back(2);
        j.push_back(1);
    }
    else{
        if(numero%2==0){
            numero = numero/2;
        }else {
            numero = (numero*3)+1;
        }
        Collatz(numero);
    }  
}


int main()
{
    long numero;
    cin >> numero; 
    Collatz(numero);
    return 0;
}
