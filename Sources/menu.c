#include "cheats.h"
#include "notes.h"
#include <string.h>

void	my_menus(void)
{
	int index;
	int i;
	
	set_hid_address(0x10002000);
	
	new_entry("Super Hunter!", superHunter);
	
	
	new_spoiler("Player Speed:SELECT+L=ON,SELECT+R=OFF");
		new_radio_entry("Speed 1.5x!", speed1_5);
		new_radio_entry("Speed 2.0x!", speed2);
		new_radio_entry("Speed 2.5x!", speed2_5);
		new_radio_entry("Speed 3.0x!", speed3);
	exit_spoiler();
	
	
	new_spoiler("Buff Codes");
		new_entry("Siege Mode Infinite Shots", infiniteSiege);
		new_entry("Invinsibility!", invinsibility);
		new_entry("Item not decrease!", itemNotDecrease);
	exit_spoiler();
	
	
	new_spoiler("Item Codes");
		new_entry("Free Combo Item", comboNoMaterial);
		new_entry("Free Equipment make/upgrade", eqNoMaterial);
		new_entry("Infinite Gathering!", infinitePicking);
	exit_spoiler();
}



