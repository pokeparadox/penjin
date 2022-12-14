/*
	Penjin is Copyright (c)2005, 2006, 2007, 2008, 2009, 2010 Kevin Winfield-Pantoja

	This file is part of Penjin.

	Penjin is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Penjin is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with Penjin.  If not, see <http://www.gnu.org/licenses/>.
*/#ifndef PENJINRENDEROBJECT_H
#define PENJINRENDEROBJECT_H

#include "PenjinObject.h"
#include "GFX.h"

class PenjinRenderObject : public PenjinObject,PenjinSizeObject
{
    public:
        /** Default constructor */
        PenjinRenderObject();
        /** Default destructor */
        virtual ~PenjinRenderObject();

        virtual void render()=0;
        virtual void render(SDL_Surface* screen)=0;

    protected:
        #ifdef PENJIN_SDL
            SDL_Surface* screen;    //  The pointer to the screen surface.
        #endif
    private:
};

#endif // PENJINRENDEROBJECT_H
