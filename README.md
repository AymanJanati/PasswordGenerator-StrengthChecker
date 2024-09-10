# PasswordGenerator-StrengthChecker

# PasswordGenerator/StrengthChecker

This project is a C++ application that generates strong passwords and checks the strength of user-provided passwords. It ensures that passwords meet specific security criteria such as length, uppercase and lowercase letters, digits, and special characters.

## Features

- **Generate Strong Passwords:** Automatically generates a strong password based on a specified length.
- **Password Strength Checker:** Evaluates the strength of a given password based on predefined criteria.

## Criteria for a Strong Password

1. At least 12 characters long.
2. Contains at least one uppercase letter.
3. Contains at least one lowercase letter.
4. Contains at least one digit.
5. Contains at least one special character.

## How to Use

1. **Generate a Password:**
   - Enter `1` when prompted to generate a strong password.
   - Specify the desired length (minimum 12 characters).
   - A strong password will be generated and displayed.

2. **Check Password Strength:**
   - Enter `2` to check the strength of your own password.
   - Input your password, and the program will evaluate its strength.

3. **Exit:**
   - Enter `99` to exit the program.

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/AymanJanati/PasswordGenerator-StrengthChecker.git
    ```

2. Navigate to the project directory:
    ```bash
    cd PasswordGenerator-StrengthChecker
    ```

3. Compile the program:
    ```bash
    g++ -o PasswordGenerator main.cpp
    ```

4. Run the program:
    ```bash
    ./PasswordGenerator
    ```

## Requirements

- A C++ compiler (e.g., g++)

## Contributing

Feel free to submit pull requests or open issues to improve the project.

## License

This project is open-source and available under the MIT License.

## Contact

For questions or suggestions, please contact aymanjanati08@gmail.com

