This is the utility plugin SDK for toonz. It consists of several header files and must be used with a wrapper to properly register and work with the low level COM like SDK.

Dwango intended you to be able to use this with C or C++, the 3 mandatory header files do not use things like references. What you'll find here is my own written C wrapper around the low level sdk, so you can write your own wrapper or you can do this in C. The original sdk is under the 3-Clause BSD license, my stuff is under zlib.

Tahoma2D and OpenToonz from toonz sources do show off a few additional utils not used by the wrapper. Its not part of this repo because its not a core part of the sdk. You can find the sources to wolf or dwango plugins [here](https://www.github.com/tahoma2d/tahoma2d_plugins) or under the opentoonz plugins repo.

In the wrapper_sdk directory contains all the necessary headers and sources for the C wrapper. Just run the Makefile to build. Later on I'll make a few example samples to show how to use it. Note, you will need the OpenCV development libraries to build this.