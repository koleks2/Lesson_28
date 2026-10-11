#include <iostream>
#include <string>;

int main() {
    // task 1
    
    std::string path;
    std::cout << "Enter file path: ";
    std::getline(std::cin, path);

    auto slash = std::string::npos;
    auto temp_pos = path.find('\\');
    while (temp_pos != std::string::npos) {
        slash = temp_pos;
        temp_pos = path.find('\\', slash + 1);
    }

    std::string filename;
    if (slash != std::string::npos) {
        filename = path.substr(slash + 1);
    }
    else {
        filename = path;
    }

    auto dot = std::string::npos;
    temp_pos = filename.find('.');
    while (temp_pos != std::string::npos) {
        dot = temp_pos;
        temp_pos = filename.find('.', dot + 1);
    }

    std::string name;
    std::string extension;

    if (dot != std::string::npos) {
        name = filename.substr(0, dot);
        extension = filename.substr(dot + 1);
    }
    else {
        name = filename;
        extension = "";
    }

    std::cout << "File name: " << name << std::endl;
    std::cout << "Extension: " << extension << std::endl;

    std::cout << std::endl;
    
    // task 2
    //
    //std::string text;
    //std::string word;

    //std::cout << "Enter text: ";
    //std::getline(std::cin, text);

    //std::cout << "Enter word to count: ";
    //std::getline(std::cin, word);

    //auto count = 0;
    //auto start_pos = 0;

    //while ((start_pos = text.find(word, start_pos)) != std::string::npos) {
    //    count++;
    //    start_pos += word.length();
    //}

    //std::cout << "Total occurrences found: " << count << std::endl;
    //
}