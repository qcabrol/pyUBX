// File lang/cpp/src/messages/ESF.hpp
// Auto-generated by pyUBX generateCPP.py v0.1 on 2023-04-08T18:03:13.547988
// See https://github.com/mayeranalytics/pyUBX
// DO NOT MODIFY THIS FILE!

#ifndef __ESF_H__
#define __ESF_H__
#include "Ubx.hpp"

/* Message class ESF.
 */
namespace ubx
{
namespace ESF {

constexpr uint8_t classID = 16;

struct __attribute__((packed)) MEAS : public SerializeCommon
{
    uint16_t repeatedLen; /* Set N-count array dimension of repeated structure. Do not serialize this byte*/
    static const uint16_t repeatedSize;
    virtual uint8_t getClassId(void) const override;
    virtual uint8_t getMessageId(void) const override;
    virtual const std::string &getClassName(void) const override;
    virtual std::string getMessageName(void) const override;
    virtual std::string getDescription(void) const override;
    virtual uint8_t* getDataStartAddress(void) const override;
    virtual uint16_t getDataSize(void) const override;

    static constexpr uint8_t messageID = 2;

    struct __attribute__((packed)) _data {
        uint32_t timeTag;
        uint16_t flags;
        uint16_t id;

        struct __attribute__((packed)) _repeated {
            uint32_t data;
        } repeated [0]; /* [0] -> to pass compilation. Length is set by repeatedLen. Do not forget alloc enough space*/

    } data;
};

} // namespace ESF
} // namespace ubx
#endif // ifndef __ESF_H__