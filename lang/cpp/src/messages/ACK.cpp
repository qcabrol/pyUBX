// File lang/cpp/src/messages/ACK.cpp
// Auto-generated by pyUBX generateCPP.py v0.2 on 2023-06-07T13:38:14.186856
// See https://github.com/mayeranalytics/pyUBX
// DO NOT MODIFY THIS FILE!

 #include "ACK.hpp"
#include <sstream>

const std::string classIDName("ACK");

uint8_t ubx::ACK::ACK::getClassId(void) const { return ubx::ACK::classID; }
uint8_t ubx::ACK::ACK::getMessageId(void) const { return messageID; }
const std::string &ubx::ACK::ACK::getClassName(void) const { return classIDName; }
std::string ubx::ACK::ACK::getMessageName(void) const { return std::string("ACK"); };
std::string ubx::ACK::ACK::getDescription(void) const {
    std::stringstream ret;
    ret << "{\"classId\":" << std::to_string(getClassId()) << ",\"messageId\":" << std::to_string(getMessageId()) << ",\"classIdName\":\"" << getClassName() << "\",\"messageIdName\":\"" << getMessageName() << "\"";
    ret << ", \"clsID\":" << std::to_string(data.clsID) << ", \"msgID\":" << std::to_string(data.msgID);
    ret << "}";
    return ret.str();
}
uint8_t* ubx::ACK::ACK::getDataStartAddress(void) const { return (uint8_t*)&data; }
uint16_t ubx::ACK::ACK::getDataSize(void) const { return sizeof(data); }
uint8_t ubx::ACK::NAK::getClassId(void) const { return ubx::ACK::classID; }
uint8_t ubx::ACK::NAK::getMessageId(void) const { return messageID; }
const std::string &ubx::ACK::NAK::getClassName(void) const { return classIDName; }
std::string ubx::ACK::NAK::getMessageName(void) const { return std::string("NAK"); };
std::string ubx::ACK::NAK::getDescription(void) const {
    std::stringstream ret;
    ret << "{\"classId\":" << std::to_string(getClassId()) << ",\"messageId\":" << std::to_string(getMessageId()) << ",\"classIdName\":\"" << getClassName() << "\",\"messageIdName\":\"" << getMessageName() << "\"";
    ret << ", \"clsID\":" << std::to_string(data.clsID) << ", \"msgID\":" << std::to_string(data.msgID);
    ret << "}";
    return ret.str();
}
uint8_t* ubx::ACK::NAK::getDataStartAddress(void) const { return (uint8_t*)&data; }
uint16_t ubx::ACK::NAK::getDataSize(void) const { return sizeof(data); }
