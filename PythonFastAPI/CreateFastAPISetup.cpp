//
// Created by Ryan James on 7/8/2025.
//

#include "../Installation/Installing.cpp"

void createPytonScript() {

    if (std::ofstream file = saveFile(std::ofstream("main.py"), ""); file.is_open()) {

        file << "from fastapi import FastAPI \n";
        file << "\n";
        file << "app = FastAPI()\n";


        file.close();


    }
}
