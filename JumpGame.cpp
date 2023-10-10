#include <iostream>
#include <vector>

// Celem jest przejście do ostaniego elementu wektora, zaczynając od pierwszego nums[0].
// Liczba pod indeksem na ktorym się znajdujesz mówi ile maksymalnie możesz się przesunąć do przodu.
class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int v_size = nums.size();
        if (v_size < 2){
            return true;
        }
        return jump_(nums, 0, 0, v_size);
    }
private:
    bool jump_(std::vector<int>& nums, int current_idx, int distance, int v_size){
        if (current_idx >= v_size){
            return false;
        }
        if (current_idx == v_size - 1){
            return true;
        }
        distance = nums[current_idx];
        if (distance == 0){
            return false;
        }
        int max_distance = distance;
        for (int i = max_distance; i > 0; i--){
            bool zmienna = jump_(nums, current_idx + i, distance, v_size);
            if (zmienna){
                return true;
            }
        }
        return false;
    }
};

int main(){
    std::vector<int> wektor = {1, 2, 4, 2, 3, 0, 1, 2, 0, 1};
    Solution wynik;
    std::cout << wynik.canJump(wektor);
}
