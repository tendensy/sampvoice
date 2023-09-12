//
// by Weikton 05.09.23
//
#pragma once

class RecordBuffer {
public:
    RecordBuffer(int bufferSize);
    ~RecordBuffer();

    short *getRecordBuffer();
    short *getNowBuffer();

public:
    short **buffer;
    int index = -1;
};