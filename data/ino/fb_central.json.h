/*
 Scan type: wigle
 Networks: 15
 Target lat, lon: 37.484543200000005, -122.1493071
 Comment: Facebook HQ central
 Generated: Feb 04, 2019 17:56:02
 (open + close this sketch to reload changes)
*/

// Copy and paste this to the networks.h file
/*
#include "networks/fb_central.h"
extern const byte NN_NN_FB_CENTRAL;
extern char* ssids_fb_central[];
extern byte bssids_[][6];
extern byte rssis_[]
extern byte channels_fb_central[];
extern String name_fb_central;
extern String city_fb_central;
*/

// Number of networks
const byte NN_FB_CENTRAL = 15;

// Name and location for OLED
String name_fb_central = "Facebook (C)";
String city_fb_central = "Menlo Park, CA";

// SSIDs for display on OLED
char* ssids_fb_central[NN_FB_CENTRAL] = {
	"lighth",
	"Terrag",
	"Terrag",
	"HUAWEI",
	"fbatc",
	"fbgues",
	"None",
	"fbatc",
	"UNITE-",
	"lighth",
	"lighth",
	"talo_l",
	"None",
	"fbgues",
	"fbatc"
};

// BSSIDs (MAC addresses)
byte bssids_fb_central[NN_FB_CENTRAL][6] = {
	{0x18, 0x64, 0x72, 0x60, 0x36, 0x40},
	{0x1C, 0xB9, 0xC4, 0x33, 0xDD, 0x38},
	{0x1C, 0xB9, 0xC4, 0x34, 0x08, 0x18},
	{0x02, 0x1A, 0x11, 0xFD, 0x6B, 0xBA},
	{0x18, 0x64, 0x72, 0x60, 0xEB, 0xE3},
	{0x04, 0xBD, 0x88, 0x57, 0x09, 0xC0},
	{0x18, 0x64, 0x72, 0x33, 0x6C, 0xC2},
	{0x18, 0x64, 0x72, 0x33, 0xD0, 0xA3},
	{0x08, 0xBD, 0x43, 0x2E, 0x79, 0xF7},
	{0x18, 0x64, 0x72, 0x34, 0x21, 0x00},
	{0x18, 0x64, 0x72, 0x60, 0x74, 0x60},
	{0x18, 0x64, 0x72, 0x60, 0x74, 0x63},
	{0x18, 0x64, 0x72, 0x33, 0xD4, 0x02},
	{0x18, 0x64, 0x72, 0x33, 0xD4, 0x01},
	{0x18, 0x64, 0x72, 0x33, 0xD4, 0x03}
};

// RSSIs, experimental
byte rssis_fb_central[NN_FB_CENTRAL] = {
20, 20, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19
};

byte channels_fb_central[NN_FB_CENTRAL] = {
 1, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 8, 9, 10, 11  
};