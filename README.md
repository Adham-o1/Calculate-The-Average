# Arithmetic Mean (C++)

**A small console program to calculate the arithmetic mean of positive integers entered by the user.**

---

## Overview

This lightweight C++ program repeatedly accepts **positive integer** inputs from the user until a non-positive number (zero or negative) is entered. It calculates and prints the arithmetic mean (average) of all positive numbers entered.

The program is ideal as a beginner exercise for console I/O, loops, and basic arithmetic in C++.

---

## Features

* Accepts any number of positive integers from the user.
* Stops reading input when the user enters `0` or a negative number.
* Computes the arithmetic mean using the sum and count of the entered values.
* Simple, clear console prompts and output.

---

## Requirements

* A C++ compiler that supports C++11 or later (e.g., `g++`, `clang++`, MSVC).
* Optional: Visual Studio Code or any text editor / IDE.

---

## Files

* `main.cpp` — contains the program source code.

---

## How to compile

Open a terminal in the directory containing `main.cpp` and run one of the following commands depending on your environment:

### Using g++ (Linux / macOS / Windows with MinGW)

```
g++ -std=c++11 -O2 -Wall -Wextra -o mean_app main.cpp
```

### Using clang++

```
clang++ -std=c++11 -O2 -Wall -Wextra -o mean_app main.cpp
```

### Using MSVC (Developer Command Prompt)

```
cl /EHsc /O2 main.cpp
```

---

## How to run

After compiling, run the executable from the terminal:

```
./mean_app    # Linux / macOS
mean_app.exe  # Windows
```

Follow the prompt `Enter Positive Numbers Only:` and type positive integers one after another. To finish and compute the mean, enter `0` or a negative number.

---

## Example session

```
Enter Positive Numbers Only: 5
Enter Positive Numbers Only: 10
Enter Positive Numbers Only: 8
Enter Positive Numbers Only: 0
The Arithmetic Mean: 7.66667
```

---

## Implementation notes & suggestions for improvement

* The program currently uses `int` for sum and count and `double` for the mean. For large inputs consider using `long long` for `sum` to avoid overflow.
* Input validation currently treats non-positive numbers as termination. If you want to ignore invalid inputs instead of terminating, add an error message and continue the loop.
* Consider adding support for floating-point numbers if the user needs to enter non-integers.
* Improve UX by printing instructions at start (e.g., "Enter positive integers; enter 0 or negative to finish").

---

## Contributing

Feel free to open issues or submit pull requests if you want enhancements (e.g., file input, GUI, statistical summaries like median and standard deviation).

---

## License

This project is released under the MIT License. See `LICENSE` for details.

---

## Author

Adham Hossam
