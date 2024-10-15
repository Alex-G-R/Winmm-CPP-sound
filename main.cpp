#include <iostream>
#include <Windows.h>

#pragma comment(lib, "winmm")

int main()
{
    std::cout << "TEMPERATURA!\n";

    const char* soundFilePath = "C:\\Users\\uczen\\Desktop\\sound.wav";

    // Play the sound file
    if (PlaySoundA(soundFilePath, NULL, SND_FILENAME | SND_ASYNC)) {
        std::cout << "Playing sound...\n";
    }
    else {
        std::cerr << "Error playing sound - Check the file patd" << std::endl;
    }
    Sleep(300000); // Sleep for 300 seconds

    return 0;
}
