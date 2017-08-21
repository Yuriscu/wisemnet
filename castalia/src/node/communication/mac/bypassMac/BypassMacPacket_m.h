//
// Generated file, do not edit! Created by nedtool 5.0 from castalia/src/node/communication/mac/bypassMac/BypassMacPacket.msg.
//

#ifndef __BYPASSMACPACKET_M_H
#define __BYPASSMACPACKET_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "MacPacket_m.h"
// }}

/**
 * Class generated from <tt>castalia/src/node/communication/mac/bypassMac/BypassMacPacket.msg:19</tt> by nedtool.
 * <pre>
 * packet BypassMacPacket extends MacPacket
 * {
 *     int source;
 *     int destination;
 * }
 * </pre>
 */
class BypassMacPacket : public ::MacPacket
{
  protected:
    int source;
    int destination;

  private:
    void copy(const BypassMacPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BypassMacPacket&);

  public:
    BypassMacPacket(const char *name=nullptr, int kind=0);
    BypassMacPacket(const BypassMacPacket& other);
    virtual ~BypassMacPacket();
    BypassMacPacket& operator=(const BypassMacPacket& other);
    virtual BypassMacPacket *dup() const {return new BypassMacPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual int getSource() const;
    virtual void setSource(int source);
    virtual int getDestination() const;
    virtual void setDestination(int destination);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BypassMacPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BypassMacPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef __BYPASSMACPACKET_M_H
