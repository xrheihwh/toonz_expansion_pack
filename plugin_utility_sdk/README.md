Toonz along with OpenToonz and Tahoma2D has an SDK for plugins using a low level COM like API. The core consists of 3 header files that can be used with C or C++ (The core headers do not use C++ specific stuff like STL or any additional extra library), there are in addition a few util headers that are optional (Requires C++ however) and a wrapper header that's C++ specific which is how you're meant to use the low level SDK. Because this will easily get well out of scope, I will be showing off a C wrapper and a couple of examples. I won't be using OpenCV or any specific image processing library to show how agnostic Toonz truly is. If you do however build the official wrapper and/or any of the Dwango/Wolf plugins then OpenCV is needed.

Plugins are meant to be compiled against the operating system. They're to be built with gcc/clang if C or g++/clang++ if C++.

Tahoma2D and OpenToonz from toonz sources do show off a few additional utils not used by the wrapper. Its not part of this repo because its not a core part of the sdk. You can find the sources to wolf or dwango plugins [here](https://www.github.com/tahoma2d/tahoma2d_plugins) or under the opentoonz plugins repo.

In the include subdir is all the header files needed and the ctoonz_source contains the C wrapper sources. All my files are under zlib, rest is under the 3-Clause BSD license.
