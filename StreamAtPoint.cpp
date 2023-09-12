//
// by Weikton 05.09.23
//
#include "StreamAtPoint.h"

#include "StreamInfo.h"

StreamAtPoint::StreamAtPoint(const uint32_t color, std::string name,
                             const float distance, const VECTOR& position) noexcept
    : LocalStream(StreamType::LocalStreamAtPoint, color, std::move(name), distance)
    , position(position)
{}

void StreamAtPoint::SetPosition(const VECTOR& position) noexcept
{
    this->position = position;

    for(const auto& channel : this->GetChannels())
    {
    }
}

void StreamAtPoint::OnChannelCreate(const Channel& channel) noexcept
{
    static const BASS_3DVECTOR kZeroVector { 0, 0, 0 };

    this->LocalStream::OnChannelCreate(channel);
}
