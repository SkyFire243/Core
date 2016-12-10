/*
 * Copyright (C) 2010-2017 Project SkyFire <https://www.projectskyfire.org/>
 * Copyright (C) 2010-2017 Oregon <http://www.oregoncore.com/>
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2017 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _WARDEN_MAC_H
#define _WARDEN_MAC_H

#include "ARC4.h"
#include "BigNumber.h"
#include "ByteBuffer.h"

#include <map>

class WorldSession;
class WardenBase;

class WardenMac : WardenBase
{
    public:
        WardenMac();
        ~WardenMac();

        void Init(WorldSession *pClient, BigNumber *K);
        ClientWardenModule *GetModuleForClient(WorldSession *session);
        void InitializeModule();
        void RequestHash();
        void HandleHashResult(ByteBuffer &buff);
        void RequestData();
        void HandleData(ByteBuffer &buff);
};

#endif
