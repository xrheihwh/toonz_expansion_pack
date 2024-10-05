# SHADERS
Toonz lets you make very flexible effects using OpenGL shaders from using GLSL. This lets you ship and develop effects
without having to compile a C or C++ plugin which is less portable.

# INSTALLING
There are several steps to making a new shader. Under the shaders subdir in the library directory, you will find a readme.txt file detailing the shading language itself,  but here is a summary of what must be done after you're done creating the program files:
* The following files must be edited or created:
  * toonzstuff > config > current.txt which hosts the association (Not locale dependant) between the fx, parameters, and names displayed in the GUI.
  * toonzstuff > profiles > layouts > fxs > fxs.lst which is a list of fxs as displayed in the right click contextual menus like Add Fx or Insert Fx
  * toonzstuff > profiles > layouts > fxs > SHADERNAME.xml is the parameters tabbing in the Fx parameters editor.
  * toonzstuff > shaders > SHADERNAME.xml (Must match) is the Fx interface and where toonz can find the .frag and .vert files that make up the program file.

 Each subdir in this directory contain the necessary files or edits that must be implemented.
