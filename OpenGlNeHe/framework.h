// header.h : include file for standard system include files,
// or project specific include files
//

#pragma once



#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#pragma comment(lib,"GLFiles/lib/Glaux.lib")
#pragma comment(lib,"GLFiles/lib/GLU32.lib")
#pragma comment(lib,"GLFiles/lib/glui32.lib")
#pragma comment(lib,"GLFiles/lib/glut32.lib")
#pragma comment(lib,"GLFiles/lib/OPENGL32.lib")

#include "GLFiles/include/GL/GL.H"
#include "GLFiles/include/GL/GLAux.h"
#include "GLFiles/include/GL/GLU.H"
#include "GLFiles/include/GL/glui.h"
#include "GLFiles/include/GL/glut.h"
