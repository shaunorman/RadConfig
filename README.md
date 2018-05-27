# RadConfig
A basic class to store all my config variables so they can be accessed in various places.

For ease of use when using PlatformIO in your IDE, create a directory below your project called lib/ and place the repo in there.

In your platformio.ini file add
[platformio]
lib_dir = ../lib

Then it's just a matter of including the file to use any of the config values set.

#include <RadConfig.h>

> RadConfig config = RadConfig();
> config.wifi_password

Bare with me, my C knowledge is pretty low so I wasn't quite sure how to set this up. I'm sure i'll change it over time as I learn things.
