//
// by Weikton 05.09.23
//
#include "ControlPacket.h"

uint32_t ControlPacket::GetFullSize()
{
    return sizeof(*this) + this->length;
}
