#include <iostream>
#include <vector>
#include <iomanip>

template <typename T>
class GenericVector {
private:
    std::vector<T> vec;

public:
    void push(T value) {
        vec.push_back(value);
    }

    T last() {
        return vec.back();
    }

    void print() {
        for (const auto& element : vec) {
            std::cout << std::fixed << std::setprecision(2) << element << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    GenericVector<double> myVector;

    myVector.push(3.14);
    myVector.push(2.71);
    myVector.push(1.23);

    std::cout << "Last element: " << myVector.last() << std::endl;
    std::cout << "All elements: ";
    myVector.print();

    return 0;
}
