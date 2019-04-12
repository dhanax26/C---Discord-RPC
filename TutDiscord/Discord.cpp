#include "Discord.h"
#include <time.h>
#include <chrono>
static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();


void Discord::Initialize()
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("566291882435411978", &Handle, 1, NULL); //Your Api Key
}

void Discord::Update()
{
	//Copy Your Api Pre-Visualize
	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.state = "Discord Tutorial";
	discordPresence.details = "Yeee";
	discordPresence.startTimestamp = eptime;
	discordPresence.largeImageKey = "icon";
	discordPresence.largeImageText = "Discord Tutorial C++";
	discordPresence.smallImageKey = "icon";
	Discord_UpdatePresence(&discordPresence);
}