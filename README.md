# Binary Calculator

A simple C-based calculator that performs basic arithmetic operations using bitwise operations.

## Features

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/binary-calculator.git
   cd binary-calculator
   ```

2. Compile the project:
   ```sh
   gcc -o bin_calculator main.c calculator.c -I.
   ```

## Usage

Run the calculator:

```sh
./bin_calculator
```

Example usage in C:

```c
#include <stdio.h>
#include "calculator.h"

int main() {
    int result = calculate(10, 5, '+');
    printf("Result: %d\n", result);
    return 0;
}
```

## Compilation & Running

To compile and run:

```sh
gcc -o bin_calculator main.c calculator.c -I.
./bin_calculator
```

## License

This project is licensed under the MIT License.

