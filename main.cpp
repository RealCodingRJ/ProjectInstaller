#include <iostream>
#include "Installation/Installing.cpp"
#include "Windows.h"


int main() {

    std::string commandURL;
    std::cin >> commandURL;

    std::ofstream file("Installs.data");
    ShellExecuteA(nullptr, "open", commandURL.c_str()
        , nullptr, nullptr, SW_SHOWDEFAULT);

    if (commandURL.contains("Node")) {

        ShellExecuteA(nullptr, "open", "choco install nodejs"
        , nullptr, nullptr, SW_SHOWDEFAULT);

    }

    if (commandURL.contains("React")) {


        std::string type;
        std::cin >> type;

        if (type.contains("npx")) {

            std::string nameOfProject;
            std::cin >> nameOfProject;


            ShellExecuteA(nullptr, "open", ("npx nano-react-app " + nameOfProject).c_str(),
            nullptr, nullptr, SW_SHOWDEFAULT);

            saveFile(std::move(file), nameOfProject);
        }

    }


    if (commandURL.contains("next")) {


        std::string nameOfProject;
        std::cin >> nameOfProject;


        ShellExecuteA(nullptr, "open", ("npx create-next-app " + nameOfProject).c_str(),
        nullptr, nullptr, SW_SHOWDEFAULT);


        saveFile(std::move(file), nameOfProject);

    }

    

    file.close();

    system("pause > 0");
    return 0;
}