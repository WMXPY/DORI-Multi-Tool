#ifndef MD5_H
#define MD5_H

#include <node.h>
#include <v8.h>
#include <nan.h>
#include <memory.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fstream>

using namespace v8;

#define s11 7
#define s12 12
#define s13 17
#define s14 22
#define s21 5
#define s22 9
#define s23 14
#define s24 20
#define s31 4
#define s32 11
#define s33 16
#define s34 23
#define s41 6
#define s42 10
#define s43 15
#define s44 21

#define READ_DATA_SIZE 1024
#define MD5_SIZE 16
#define MD5_STR_LEN (MD5_SIZE * 2)

#define F(x, y, z) (((x) & (y)) | ((~x) & (z)));
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)));
#define H(x, y, z) ((x) ^ (y) ^ (z));
#define I(x, y, z) ((y) ^ ((x) | (~z)));

typedef struct
{
    unsigned int count[2];
    unsigned int state[4];
    unsigned char buffer[64];
} MD5_CTX;

#define ROTATELEFT(num, n) (((num) << (n)) | ((num) >> (32 - (n))))

#define FF(a, b, c, d, x, s, ac)    \
    {                               \
        (a) += F((b), (c), (d));    \
        (a) += (x) + ac;            \
        (a) = ROTATELEFT((a), (s)); \
        (a) += (b);                 \
    \
}
#define GG(a, b, c, d, x, s, ac)    \
    {                               \
        (a) += G((b), (c), (d));    \
        (a) += (x) + ac;            \
        (a) = ROTATELEFT((a), (s)); \
        (a) += (b);                 \
    \
}
#define HH(a, b, c, d, x, s, ac)    \
    {                               \
        (a) += H((b), (c), (d));    \
        (a) += (x) + ac;            \
        (a) = ROTATELEFT((a), (s)); \
        (a) += (b);                 \
    \
}
#define II(a, b, c, d, x, s, ac)    \
    {                               \
        (a) += I((b), (c), (d));    \
        (a) += (x) + ac;            \
        (a) = ROTATELEFT((a), (s)); \
        (a) += (b);                 \
    \
}

const char *ToCString(const String::Utf8Value &value);
void MD5Update(MD5_CTX *context, unsigned char *input, unsigned int inputlen);
void MD5Final(MD5_CTX *context, unsigned char digest[16]);
void MD5Transform(unsigned int state[4], unsigned char block[64]);
void MD5Encode(unsigned char *output, unsigned int *input, unsigned int len);
void MD5Decode(unsigned int *output, unsigned char *input, unsigned int len);

#include "md5.cc"

#endif