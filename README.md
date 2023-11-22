# Hybrid
> A fun C Compiler Hack :)

## Overview
Hybrid is a custom patch for the C compiler, introducing a novel feature to support multiple return values from a function. Hybrid enables C programmers to return and manipulate multiple values conveniently within a single variable.

## Introduction
Traditional C functions are limited to a single return value, often requiring the use of structs or pointers to achieve a similar effect. Hybrid breaks this limitation by introducing a concise syntax that allows functions to return multiple values directly, enhancing the expressiveness of C code.

## Installation
1. Clone the Hybrid repository: git clone https://github.com/lvntky/hybrid.git
2. Navigate to the project directory: cd hybrid
3. Apply the Hybrid patch to your C compiler. Detailed instructions for specific compilers can be found in the [Installation](./docs/install.md) Guide.

## Usage
After installing the Hybrid patch, you can use the new syntax in your C code to return and handle multiple values. Declare a function as a hybrid function, and use the <...> syntax to return multiple values. To capture the returned values, assign them to a hybrid variable and access individual elements using square brackets.

```c
hybrid function()
{
    return <1, "abc", 3.14>;
}

int main()
{
    hybrid value = function();

    int firstValue = value[0];    // 1
    char* secondValue = value[1]; // "abc"
    double thirdValue = value[2];  // 3.14

    // Use the values as needed

    return 0;
}
```

## Example
For a detailed example, refer to the example directory in the repository. It demonstrates the usage of Hybrid in a real-world scenario.

## Contributing
Contributions to Hybrid are welcome! To contribute, follow the guidelines outlined in the Contribution Guide. Share your ideas, report issues, and submit pull requests to help improve and expand the functionality of Hybrid.

## License
Hybrid is released under the MIT License. Feel free to use, modify, and distribute it in your projects.

> Happy coding with Hybrid! If you have any questions or feedback, please don't hesitate to open an issue or reach out to the project contributors.