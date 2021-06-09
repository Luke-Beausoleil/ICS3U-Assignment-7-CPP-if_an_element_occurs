// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: June 2021
// This  program checks whether an element occurs in a list

#include <iostream>
#include <string>
#include <list>

std::string SearchElements(std::list<std::string> inputs,
                           std::string inputToSearch) {
    // this function checks if the element is in the list

    // declaration
    std::string result = "The element is not in the list";

    // process
    for (std::string counter : inputs) {
        if (counter == inputToSearch) {
            result = counter;
            break;
        }
    }

    // output
    return result;
}

int main() {
    // this function receives input and calls a function

    // declaration
    std::list<std::string> inputs;  // list
    std::string inputToSearch;  // variable
    std::string element;  // variable
    std::string answer;  // variable

    // input
    std::cout << "Which element would you like to check for?: ";
    std::cin >> inputToSearch;
    std::cout << "Enter elements to add to the list."
          "Enter 'STOP' to end inputting:" << std::endl;
    std::cout << "Element: ";
    std::cin >> element;
    inputs.push_back(element);
    while (element != "STOP") {
        std::cout << "Element: ";
        std::cin >> element;
        if (element == "STOP") {
            break;
        }
        inputs.push_back(element);
    }
    // output & call function
    answer = SearchElements(inputs, inputToSearch);
    if (answer != "The element is not in the list") {
        std::cout << answer << " was found in the list\nDone." << std::endl;
    } else {
        std::cout << answer << "\nDone." << std::endl;
    }
}
