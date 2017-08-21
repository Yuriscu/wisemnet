//
// Generated file, do not edit! Created by nedtool 5.0 from wise/src/node/application/wiseCameraKCF/WiseCameraKCFMsg.msg.
//

#ifndef __WISECAMERAKCFMSG_M_H
#define __WISECAMERAKCFMSG_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
	#include "WiseApplicationPacket_m.h"
	#include "WiseDefinitionsTracking.h"
	#include <opencv.hpp>
// }}

/**
 * Enum generated from <tt>wise/src/node/application/wiseCameraKCF/WiseCameraKCFMsg.msg:28</tt> by nedtool.
 * <pre>
 * enum WiseKCFCPacketType
 * {
 * 
 *     KCF_COLLABORATION_DATA1 = 1000;
 *     KCF_COLLABORATION_DATA2 = 1001;
 *     KCF_COLLABORATION_END = 1002;
 * }
 * </pre>
 */
enum WiseKCFCPacketType {
    KCF_COLLABORATION_DATA1 = 1000,
    KCF_COLLABORATION_DATA2 = 1001,
    KCF_COLLABORATION_END = 1002
};

/**
 * Class generated from <tt>wise/src/node/application/wiseCameraKCF/WiseCameraKCFMsg.msg:34</tt> by nedtool.
 * <pre>
 * packet WiseCameraKCFMsg extends WiseApplicationPacket
 * {
 *     unsigned int pktType; //WiseKCFCPacketType
 * 
 *     unsigned long trackingCount;  //already defined in WiseSimplePeriodicTrackerMessage
 *     unsigned long iterationStep;
 *     unsigned int targetID; //already defined in WiseSimplePeriodicTrackerMessage
 *     double positionX; //already defined in WiseSimplePeriodicTrackerMessage
 *     double positionY; //already defined in WiseSimplePeriodicTrackerMessage
 *     unsigned int TypeNeighbour; //already defined in WiseSimplePeriodicTrackerMessage
 * 
 *     double Vx; 	// x-velocity of the target
 *     double Vy;	// y-velocity of the target	
 *     cv::Mat IF_u; // information vector of the target estimation by the node
 *     cv::Mat IF_U; // information matrix of the target estimation by the node
 * }
 * </pre>
 */
class WiseCameraKCFMsg : public ::WiseApplicationPacket
{
  protected:
    unsigned int pktType;
    unsigned long trackingCount;
    unsigned long iterationStep;
    unsigned int targetID;
    double positionX;
    double positionY;
    unsigned int TypeNeighbour;
    double Vx;
    double Vy;
    cv::Mat IF_u;
    cv::Mat IF_U;

  private:
    void copy(const WiseCameraKCFMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WiseCameraKCFMsg&);

  public:
    WiseCameraKCFMsg(const char *name=nullptr, int kind=0);
    WiseCameraKCFMsg(const WiseCameraKCFMsg& other);
    virtual ~WiseCameraKCFMsg();
    WiseCameraKCFMsg& operator=(const WiseCameraKCFMsg& other);
    virtual WiseCameraKCFMsg *dup() const {return new WiseCameraKCFMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPktType() const;
    virtual void setPktType(unsigned int pktType);
    virtual unsigned long getTrackingCount() const;
    virtual void setTrackingCount(unsigned long trackingCount);
    virtual unsigned long getIterationStep() const;
    virtual void setIterationStep(unsigned long iterationStep);
    virtual unsigned int getTargetID() const;
    virtual void setTargetID(unsigned int targetID);
    virtual double getPositionX() const;
    virtual void setPositionX(double positionX);
    virtual double getPositionY() const;
    virtual void setPositionY(double positionY);
    virtual unsigned int getTypeNeighbour() const;
    virtual void setTypeNeighbour(unsigned int TypeNeighbour);
    virtual double getVx() const;
    virtual void setVx(double Vx);
    virtual double getVy() const;
    virtual void setVy(double Vy);
    virtual cv::Mat& getIF_u();
    virtual const cv::Mat& getIF_u() const {return const_cast<WiseCameraKCFMsg*>(this)->getIF_u();}
    virtual void setIF_u(const cv::Mat& IF_u);
    virtual cv::Mat& getIF_U();
    virtual const cv::Mat& getIF_U() const {return const_cast<WiseCameraKCFMsg*>(this)->getIF_U();}
    virtual void setIF_U(const cv::Mat& IF_U);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WiseCameraKCFMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WiseCameraKCFMsg& obj) {obj.parsimUnpack(b);}


#endif // ifndef __WISECAMERAKCFMSG_M_H
