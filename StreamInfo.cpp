//
// by Weikton 05.09.23
//
#include "StreamInfo.h"

StreamInfo::StreamInfo(const StreamType type, const uint32_t color, std::string name, const float distance) noexcept
    : type(type), color(color), name(std::move(name)), distance(distance) {}

StreamType StreamInfo::GetType() const noexcept
{
    return this->type;
}

uint32_t StreamInfo::GetColor() const noexcept
{
    return this->color;
}

const std::string& StreamInfo::GetName() const noexcept
{
    return this->name;
}

float StreamInfo::GetDistance() const noexcept
{
    return this->distance;
}
