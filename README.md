# Simple Calculator

This project is a simple calculator built using C++. It allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It also handles invalid input gracefully and gives the user prompts to retry.

## Features
- **Addition**, **Subtraction**, **Multiplication**, and **Division** operations.
- **Input validation** to ensure only valid operations are accepted.
- **Clear error handling** for invalid inputs, with prompts for re-entry.
- Option to **exit** the program gracefully by typing **"Q"** or **"q"**.

## Getting Started

### Prerequisites

Make sure you have a C++ compiler (such as `g++` or Visual Studio) installed on your machine.

### Installation

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/your-username/Simple-Calculator.git
    ```

2. Navigate to the project directory:

    ```bash
    cd Simple-Calculator
    ```

3. Compile the code using a C++ compiler:

    ```bash
    g++ -o Simple_Calculator main.cpp Calculator.cpp
    ```

4. Run the program:

    ```bash
    ./Simple_Calculator
    ```

## Usage

Upon running the program, the user will be prompted to enter a valid operation. The available operations are:

- **`+`** for **Addition**
- **`-`** for **Subtraction**
- **`*`** for **Multiplication**
- **`/`** for **Division**
- **`Q`** or **`q`** to quit the program

If the user enters an invalid option, such as a non-number or unsupported operator, the program will display an error message and ask for a valid input again.

### Example:

```text
Type the operator of the FIVE options below
------------------------------------
+ | Addition
- | Subtraction
* | Multiplication
/ | Division
Q | EXIT
Option: +
Enter the first number: 5
Enter the second number: 3
The result is: 8
 ```

## Contributing

Feel free to fork this project, create pull requests, and report issues. Contributions are welcome!

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-name`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-name`).
5. Create a new pull request.

## License

This project is NOT Licensed.

