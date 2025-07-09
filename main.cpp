#include <iostream>
#include "Windows.h"
#include "FileName.c"
#include "Command.c"
#include "Args.c"


int main() {

    std::string commandURL;
    printMessage("Enter URL for Project: ");
    std::cin >> commandURL;

    ShellExecuteA(nullptr, "open", commandURL.c_str()
        , nullptr, nullptr, SW_SHOWDEFAULT);

    if (commandURL == ("Node")) {

        ShellExecuteA(nullptr, "open", "choco install nodejs"
        , nullptr, nullptr, SW_SHOWDEFAULT);

    }

    if (commandURL == ("React")) {

        std::string type;
        printMessage("Enter Type: ");
        std::cin >> type;

        if (type == "npx") {

            std::string nameOfProject;
            std::cin >> nameOfProject;


            ShellExecuteA(nullptr, "open", ("npx nano-react-app " + nameOfProject).c_str(),
            nullptr, nullptr, SW_SHOWDEFAULT);

            const FILE * file = generateFile(nameOfProject.c_str(), "Main.txt");

            if (file == nullptr) {

                std::cout << "NULL";
            }
        }

    }

    if (commandURL == "next") {


        std::string nameOfProject;
        printMessage("Enter Name of Project Selected: ");
        std::cin >> nameOfProject;


        ShellExecuteA(nullptr, "open", ("npx create-next-app " + nameOfProject).c_str(),
        nullptr, nullptr, SW_SHOWDEFAULT);

        const FILE * file = generateFile(commandURL.c_str(), "");

        if (file == nullptr) {

            std::cout << "NULL";
        }

    }

    if (commandURL == "Express") {



        args("");
    }

    system("pause > 0");
    return 0;
}
