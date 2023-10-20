#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& products, const std::string& target) {
    std::vector<int> indices;

    for (int i = 0; i < products.size(); i++) {
        if (products[i] == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    // Sample list of products
    std::vector<std::string> products = {"Apple", "Banana", "Orange", "Apple", "Grapes", "Apple"};

    // Target product to search for
    std::string target_product = "Apple";

    // Perform the linear search
    std::vector<int> result = linear_search_product(products, target_product);

    // Display the indices of the target product
    if (result.empty()) {
        std::cout << "Product not found." << std::endl;
    } else {
        std::cout << "Product found at indices: ";
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i];
            if (i < result.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
