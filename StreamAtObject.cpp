//
// by Weikton 05.09.23
//
#include "../main.h"
#include "../game/game.h"
#include "../net/netgame.h"

#include "StreamAtObject.h"

#include "StreamInfo.h"

extern CNetGame *pNetGame;

StreamAtObject::StreamAtObject(const uint32_t color, std::string name,
                               const float distance, const WORD objectId) noexcept
    : LocalStream(StreamType::LocalStreamAtObject, color, std::move(name), distance)
    , objectId(objectId)
{}

void StreamAtObject::Tick() noexcept
{
    this->LocalStream::Tick();

    if(!pNetGame) return;

    CObjectPool *pObjectPool = pNetGame->GetObjectPool();
    if(!pObjectPool) return;

    CObject *pObject = pObjectPool->GetAt(this->objectId);
    if(!pObject) return;

    MATRIX4X4 pObjectMatrix;
    pObject->GetMatrix(&pObjectMatrix);

    for(const auto& channel : this->GetChannels())
    {
        if(channel->HasSpeaker())
        {
        }
    }
}

void StreamAtObject::OnChannelCreate(const Channel& channel) noexcept
{
    static const BASS_3DVECTOR kZeroVector { 0, 0, 0 };

    this->LocalStream::OnChannelCreate(channel);

    if(!pNetGame) return;

    CObjectPool *pObjectPool = pNetGame->GetObjectPool();
    if(!pObjectPool) return;

    CObject *pObject = pObjectPool->GetAt(this->objectId);
    if(!pObject) return;

    MATRIX4X4 pObjectMatrix;
    pObject->GetMatrix(&pObjectMatrix);
}
