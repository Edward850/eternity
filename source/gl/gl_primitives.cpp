// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// Copyright(C) 2011 James Haley
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//-----------------------------------------------------------------------------
//
// DESCRIPTION:
//   
//  OpenGL Primitives
//  haleyjd 05/15/11
//
//-----------------------------------------------------------------------------

#ifdef EE_FEATURE_OPENGL

#include "gl_includes.h"
#include "gl_primitives.h"

//
// GL_OrthoQuadTextured
//
// Push a textured quad of size (w, h) at upper-left-hand coordinate (x, y) with
// texture coordinates starting from the (x, y) corner. Intended for use in an
// ortho projection. Bind texture beforehand and call glBegin(GL_QUADS).
// 
void GL_OrthoQuadTextured(GLfloat x, GLfloat y, GLfloat w, GLfloat h,
                          GLfloat smax, GLfloat tmax)
{
   glTexCoord2f(0.0f, 0.0f);
   glVertex2f(x, y);
   glTexCoord2f(0.0f, tmax);     
   glVertex2f(x, y + h);
   glTexCoord2f(smax, tmax);
   glVertex2f(x + w, y + h);
   glTexCoord2f(smax, 0.0f);
   glVertex2f(x + w, y);
}

#endif

// EOF
