Toonz along with OpenToonz and Tahoma2D has an SDK for plugins using a low level COM like API. The core consists of 3 header files that can be used with C or C++ (The core headers do not use C++ specific stuff like STL or any additional extra library), there are in addition a few util headers that are optional (Requires C++ however) and a wrapper header that's C++ specific which is how you're meant to use the low level SDK. Here is where you will find my wrapper to work with C. There is little required to create a plugin, the rest is for you to do to implement functionality.

Plugins are meant to be compiled against the operating system. They're to be built with gcc/clang if C or g++/clang++ if C++.

Tahoma2D and OpenToonz from toonz sources do show off a few additional utils not used by the wrapper. Its not part of this repo because its not a core part of the sdk. You can find the sources to wolf or dwango plugins [here](https://www.github.com/tahoma2d/tahoma2d_plugins) or under the opentoonz plugins repo.

In the include subdir is all the header files needed and the ctoonz_source contains the C wrapper sources. All my files are under zlib, Toonz soures are under the 3-Clause BSD license, libvips is under the LGPL.
