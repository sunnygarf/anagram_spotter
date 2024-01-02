# Anagram Spotter

This C program determines whether two input strings are anagrams. It encompasses fundamental concepts such as standard input parsing, conditionals, string manipulation, pointers, and modularisation of functions. The repository also emphasises a well-organised folder structure for clarity and maintainability and provides the corresponding makefile.

## Getting Started

1. This program is designed for Linux. For instructions on creating executables for other platforms, please refer to additional resources.
2. Clone or download the repository to your local machine.
3. Open a terminal and navigate to the project directory.
4. Execute the following commands:

   1. To build the program and ensure the program is up-to-date, use the command `make`.
   2. To run the program, execute `./run`.

## Method

The method for identifying anagrams follows these steps:

1. **Lexicographical Filtering:** Remove non-alphabetic characters from both strings.
2. **Lexicographical Sorting:** Sort the remaining alphabetic characters in both strings in lexicographical order using the bubble sort algorithm.
3. **Comparison:** Compare the cleaned strings; if they match, the input strings are considered anagrams.

## Examples

1. Anagram

```
enter string 1: slot machines
enter string 2: cash lost in 'em
anagram
```

2. Not an Anagram

```
enter string 1: chicken burger
enter string 2: juicy peach
not an anagram
```

## Coming Soon

We have exciting plans for future updates to enhance this project. Keep an eye out for upcoming features, including:

- **Unit Testing:** We are considering the implementation of unit testing framework to ensure individual components of the program function correctly in isolation.
- **Acceptance Testing:** We are exploring the introduction of acceptance tests to verify that the program meets specified requirements and behaves as expected.
- **User Stories:** We aim to incorporate user stories to better understand and prioritise user needs, ensuring a more user-centric development process.
