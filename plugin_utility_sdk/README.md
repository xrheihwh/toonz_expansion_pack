What this is, is a customized interface to the low level COM like SDK provided by toonz. The upstream core consists of 3 header files that cannot be changed without breaking the program. The rest is completely up to you, the core utility was designed to be compatible with C or C++, you can use OpenCV (There is a wrapper you are meant to use, the upstream wrapper uses OpenCV for image processing.) or you could substitute it with your own should you desire that.

Dwango intended you to be able to use this with C or C++, the 3 mandatory header files do not use things like references. While the official wrapper uses OpenCV, you don't have to. None of the core or utils pull in the OpenCV headers (Let alone the toonz application), you can use something else like gmic. What you'll find here is my own written C wrapper around the low level sdk and a few other wrappers and libs to show off how flexible the SDK truly is. So you can write your own wrapper or you can do this in C, the choice is completely up to you. The original sdk is under the 3-Clause BSD license, my stuff is under zlib.

Plugins are meant to be compiled against the operating system. They're to be built with gcc/clang if C or g++/clang++ if C++.

Tahoma2D and OpenToonz from toonz sources do show off a few additional utils not used by the wrapper. Its not part of this repo because its not a core part of the sdk. You can find the sources to wolf or dwango plugins [here](https://www.github.com/tahoma2d/tahoma2d_plugins) or under the opentoonz plugins repo.

In the include subdir is all the header files needed, you'll find as a reference the official wrapper named toonz_utility.hpp (Which is meant to be used with C++) as well as needed header files.
