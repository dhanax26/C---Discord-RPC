#include <iostream>
#include "Discord.h"

Discord * g_Discord;

int main()
{
	g_Discord->Initialize();
	g_Discord->Update();
    std::cout << "Hello World!\n"; 
	system("PAUSE");
	//Lets See Its Works!
	//Its works but don't show the image
	//Now its work fine, its basic but many people don't know how to make it.
}
