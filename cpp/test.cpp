    #include <vector>
    #include <iostream>

    int main() {
        std::vector<int> myVector = {1, 2, 4, 5};
        // Emplace 3 at index 2
        myVector.emplace(myVector.begin() + 2, 3); 

        for (int x : myVector) {
            std::cout << x << " "; 
        }
        std::cout << std::endl; // Output: 1 2 3 4 5
        return 0;
    }