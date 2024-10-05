/*
Copyright (c) 2024, Matthew Polk

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _CTOONZ_UTILITY_H_
#define _CTOONZ_UTILITY_H_

/*
The upstream toonz SDK consists of 3 header files, 4 optional util headers,
and a wrapper around the 3 headers.

This single header is going to implement as much as possible for C.
*/

#include <stdio.h>
#include <stdint.h>

//toonz_hostif pulls in toonz_params and toonz_plugin for me.
#include "toonz_hostif.h"

/*The toonz wrapper has 3 different enums to write:
1. ports which is inputs (Handled by toonz_hostif.h)
2. param_groups which is type of parameters (Handled by toonz_params.h)
3. params for the parameters you the user set (Also by toonz_param.h)

As for toonz_plugin.h, it handles the registration information such as version
or name or anything of the sort.

There are 4 additional headers of note:
1. affine.hpp which is about affine transformations
https://wikipedia.org/wiki/Affine_transformation

affine.hpp imports the toonz_hostif.h file.
2. rect.hpp are math related. It doesn't use any of the core headers.
3. param_traits.hpp imports all 3 of the core headers. It contains helper
functions around parameters.
4. interf_holder.hpp imports toonz_hostif.h nad toonz_plugin.h.
It contains just two functions, grab_interf and release_interf. As the name
indicates, this is about the interface.

What the toonz wrapper, toonz_utility.hpp does, is two things:
1. Implement what is necessary to create a plugin (Which isn't much).
2. Implement some functionality with OpenCV.*/










#endif
