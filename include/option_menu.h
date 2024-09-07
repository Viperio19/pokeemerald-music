#ifndef GUARD_OPTION_MENU_H
#define GUARD_OPTION_MENU_H

#define TRACKS_COUNT 3

struct Tracks
{
    u8 name[16];
    u16 song;
};

void CB2_InitOptionMenu(void);

#endif // GUARD_OPTION_MENU_H
