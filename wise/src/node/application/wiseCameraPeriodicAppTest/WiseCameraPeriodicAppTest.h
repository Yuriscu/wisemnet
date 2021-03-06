// *****************************************************************************************
// Copyright (C) 2017 Juan C. SanMiguel and Andrea Cavallaro
// You may use, distribute and modify this code under the terms of the ACADEMIC PUBLIC
// license (see the attached LICENSE_WISE file).
//
// This file is part of the WiseMnet simulator
//
// Updated contact information:
//  - Juan C. SanMiguel - Universidad Autonoma of Madrid - juancarlos.sanmiguel@uam.es
//  - Andrea Cavallaro - Queen Mary University of London - a.cavallaro@qmul.ac.uk
//
// Please cite the following reference when publishing results obtained with WiseMnet:
//   J. SanMiguel & A. Cavallaro,
//   "Networked Computer Vision: the importance of a holistic simulator",
//   IEEE Computer, 50(7):35-43, Jul 2017, http://ieeexplore.ieee.org/document/7971873/
// *****************************************************************************************

/**
 * \file WiseCameraPeriodicAppTest.h
 * \author Juan C. SanMiguel (2017)
 * \brief Header file for the WiseCameraPeriodicAppTest class
 * \version 1.4
 */
#ifndef __WISECAMERAPERIODICAPP_TEST_H__
#define __WISECAMERAPERIODICAPP_TEST_H__

#include <opencv.hpp>

#include <wise/src/utils/WiseUtils.h>
#include <wiseCameraPeriodicApp/WiseCameraPeriodicApp.h>
#include <wiseCameraPeriodicApp/WiseCameraPeriodicAppPacket_m.h>//packet format

/*! \class WiseCameraPeriodicAppTest
 *  \brief This class demonstrates functionality of the template "WiseCameraPeriodicApp"
 *
 *  Description Currently it reads a video file and displays the sensed frames
 *
 */
class WiseCameraPeriodicAppTest : public WiseCameraPeriodicApp
{
private:
    std::ostringstream _win1; //!< window name to display results

protected:
   //Functions to be defined in sub-classes (mandatory)
   void at_timer_fired(int index){};  //!< Response to alarms generated by specific algorithm. To define in superclass (mandatory)
   void at_startup();                 //!< Initialize internal variables. To define in sub-classes for each specific algorithm (mandatory)
   void at_finishSpecific();           //!< Release resources. To define in sub-classes for each specific algorithm (mandatory)
   bool at_init();                     //!< Initialize resources based on sampled data. To define in sub-classes for each specific algorithm (mandatory)
   bool at_sample();                   //!< Operations for processing each sample. To define in sub-classes for each specific algorithm (mandatory)
   bool at_end_sample();               //!< Operations after processing each sample. To define in sub-classes for each specific algorithm (mandatory)
   void make_measurements(const std::vector<WiseTargetDetection>&) {} ; //!< Conversion of camera detections into ordered lists of measurements for tracking. To define in sub-classes for each specific algorithm (mandatory)
   bool process_network_message(WiseBaseAppPacket *m); //!< Operations for processing each packet from network. To define in sub-classes for each specific algorithm (mandatory)
   void handleDirectApplicationMessage(WiseBaseAppPacket *); //!< Process a received packet from a direct node-to-node links (to be implemented in superclasses of WiseBaseApp)
};

#endif // __WISECAMERAPERIODICAPP_TEST_H__
