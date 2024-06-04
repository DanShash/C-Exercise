Sure, here's a `README.md` file for your C++ program using a generic vector:

```markdown
# Generic Vector in C++

This repository contains a C++ program that demonstrates the use of a template class for a generic vector. The program includes methods to push elements into the vector, retrieve the last element, and print all elements with a specific precision.

## Table of Contents

- [Description](#description)
- [Code](#code)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Description

The `GenericVector` class template allows for the storage and manipulation of elements of any data type. The class provides the following methods:
- `push(T value)`: Adds an element to the end of the vector.
- `last()`: Returns the last element of the vector.
- `print()`: Prints all elements in the vector with a fixed precision of two decimal places.

## Code

```cpp
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
```

## Usage

1. **Compile the Program**: Use a C++ compiler to compile the program. For example, with `g++`, you can compile it using the following command:
    ```sh
    g++ -o generic_vector generic_vector.cpp
    ```

2. **Run the Program**: Execute the compiled binary:
    ```sh
    ./generic_vector
    ```

3. **Output**: The program will output the last element in the vector and print all elements with a precision of two decimal places.

    Example output:
    ```
    Last element: 1.23
    All elements: 3.14 2.71 1.23 
    ```

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request or open an Issue for any bugs, suggestions, or improvements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

This `README.md` file provides a comprehensive overview of your program, including its purpose, usage instructions, and the complete code.
