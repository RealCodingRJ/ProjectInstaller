#include <fstream>


inline std::ofstream saveFile(std::ofstream file, const std::string& data) {

    file << data.c_str();

    file.close();

    return file;
}