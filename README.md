# NovaCrypt

NovaCrypt is a lightweight cryptographic library in C++ designed for simple encryption and decryption of text and file contents. It features customizable encryption parameters, including a secure key and salt, and supports basic file operations for encrypting and decrypting data. Ideal for educational purposes and lightweight encryption tasks.

## Features

- **Encryption and Decryption**: Encrypt and decrypt strings and files.
- **Customizable Parameters**: Define a secure key and salt for cryptographic operations.
- **File Operations**: Encrypt and decrypt file contents.

## Project Structure
- #### *Every language has an algorithm file and a use-case file.*

## Requirements

- C11 or later
- C++11 or later
- CMake 3.10 or higher
- A C++ compiler (e.g., g++, clang++)
- Python 2.7 or higher
- PHP 7.1 or higher
- Node 16 or higher

# Usage 
#### * CPP only

The NovaCrypt system provides a command-line interface to perform cryptographic operations. Upon running the executable, you will be prompted to choose a mode and enter the necessary parameters.

## Modes

- **Encryption**: Encrypt text data.
- **Decryption:** Decrypt text data.
- **Encrypt File**: Encrypt the contents of a file and save the result to another file.
- **Decrypt File**: Decrypt the contents of a file and save the result to another file.

# Example

**Encrypt Text**:
```bash
Enter SECURE_KEY(int): 12345
Enter SALT(int): 10
Enter MODE (1/2/31/32): 1
Enter the content: Hello, World!
```

**Output**:
```bash
Encrypted Data: [encrypted text]
```

**Encrypt File**:
```bash
Enter SECURE_KEY(int): 12345
Enter SALT(int): 10
Enter MODE (1/2/31/32): 31
Enter File Path for Encryption (Source): input.txt
Enter File Path for Decryption (Destination): encrypted_output.txt
```

**Output**:
```bash
Encrypted data saved to: encrypted_output.txt
```

# Contributing

## Contributions to the NovaCrypt project are welcome! Please follow these steps to contribute:

1. **Fork the repository.**
2. **Create a feature branch**:
   ```bash
   git checkout -b feature/your-feature
   ```
3. **Commit your changes**:
   ```bash
   git commit -m "Add new feature"
   ```
4. **Push to the branch**:
   ```bash
   git push origin feature/your-feature
   ```
5. **Open a Pull Request.**

# License

    This project is licensed under the MIT License - see the LICENSE file for details.

# Acknowledgements

- C Standard Library
- C++ Standard Library
- CMake
- Python
- PHP
- NodeJS
