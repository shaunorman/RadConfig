# RadConfig
Files to store common config properties among my Arduino projects.

For ease of use when using PlatformIO as your IDE, create a directory below your project called lib/ and place the repo in there.

In your platformio.ini file add
[platformio]
lib_dir = ../lib

Then it's just a matter of including the file to use any of the config values set.

#include <RadConfig.c>

To update or add your own config properties simply add them to RadConfig.c the same way as below.

#if !defined(CONFIG_GITHUB_PASSWORD)
    #define CONFIG_GITHUB_PASSWORD "YourPassword"
#endif

And to use in your project it's simply

#include <RadConfig.c>
Serial.println(CONFIG_GITHUB_PASSWORD);

> YourPassword

To override any of the config variables setup in RadConfig simply define them before including the file.

#define CONFIG_GITHUB_PASSWORD "SomeOtherPassword"
#include <RadConfig.c>
Serial.println(CONFIG_GITHUB_PASSWORD);

> SomeOtherPassword



