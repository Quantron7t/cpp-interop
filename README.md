## FOLLOW INSTRUCTIONS TO GENERATE AND RUN CPP DLL

### Installing GCC on windows

Download MSYS2 64bit from https://www.msys2.org/
Run MSYS2 update commands 
- pacman -Syu
- pacman -Su

open mingw64 and Run commands
- pacman -S mingw-w64-x86_64-gcc
- pacman -S mingw-w64-x86_64-gdb

set variable 'path' @system level
C:\msys64\mingw64\bin

verify installation - run cmd - `gcc --version`

### Generating the cpp dll 
Run terminal command `./build.bat` to convert any changes made to .cpp or .h to a .dll

Creating and running the c# project in vscode
* dotnet new console 
* dotnet add package System.Runtime
* dotnet add package System.Runtime.InteropServices
* dotnet build
* dotnet run

>Dont forget to add correct dll path to DllImport