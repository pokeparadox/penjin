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
*/
#include "KeyMapDigitalJoyAxis.h"

KeyMapDigitalJoyAxis::KeyMapDigitalJoyAxis()
{
    //ctor
    device = DEV_DIGITAL_JOYSTICK_AXIS;
    axis =0;
    trigger = 0;
    target = SJ_UNMAPPED;
    setDeviceID(0);
}

KeyMapDigitalJoyAxis::~KeyMapDigitalJoyAxis()
{
    //dtor
}


KeyMapDigitalJoyAxis::KeyMapDigitalJoyAxis(CRstring SJ,CRint a,CRint triggerVal,CRuchar id)
{
    axis = a;
    setSJMap(SJ);
    setDeviceID(id);
    device = DEV_DIGITAL_JOYSTICK_AXIS;
    trigger = triggerVal * 32767;
}
