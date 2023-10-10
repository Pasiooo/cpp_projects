#include <iostream>
#include <vector>
#include <cmath>

// Sprawdzanie czy podana liczba wygląda identycznie od przodu jak od tyłu.
// Liczba ujemna jest od razu odrzucana bo podajemy ją z minusem.
class PalindromeCheck {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        std::vector<int> cyfry;
        int counter = 0;
        while (true){
            if (x < pow(10, counter)){
                counter--;
                break;
            } 
            counter++;
        }
        for (int i = counter; i >= 0; i--){
            int cyfra = x / pow(10, i);
            cyfry.push_back(cyfra);
            x -= cyfra * pow(10, i);
        }
        for (int i = 0; i < cyfry.size() / 2; i ++){
            if (cyfry[i] != cyfry[cyfry.size() - 1 - i]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    PalindromeCheck wynik;
    std::cout << wynik.isPalindrome(1234321);
}
