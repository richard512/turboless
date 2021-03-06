//
//  Const.h
//  TurboMaps
//
//  Created by Ziv Levy on 8/17/15.
//  Copyright (c) 2015 ZivApps. All rights reserved.
//

#ifndef TurboMaps_Const_h
#define TurboMaps_Const_h


#define DEBUG_MODE 0

#define kBaseURL @"http://104.197.5.131:3001"
#define FEET_PER_METER 3.28084

#define kColorNone [Helpers r:255 g:255 b:255 alpha:0.8]
#define kColorLight [Helpers r:2 g:115 b:1 alpha:1.0]
#define kColorLightModerate [Helpers r:34 g:127 b:255 alpha:1.0]
#define kColorModerate  [Helpers r:251 g:230 b:0 alpha:1.0]
#define kColorSevere [Helpers r:255 g:0 b:0 alpha:1.0]
#define kColorExtream [Helpers r:0 g:0 b:0 alpha:1.0]

#define kAltitude_Min 10
#define kAltitude_NumberOfSteps 15
#define kAltitude_Step 2
#define kAltitude_MoveToAutoAltitudeMode 20

//UIColors
#define kColorViewBackground [Helpers r:39 g:40 b:44 alpha:1.0]
#define kColorToolbarBackground [Helpers r:39 g:44 b:54 alpha:1.0]
//notifications
#define kNotification_turbulenceServerNewFile @"turbulenceServerNewFile"
#define kNotification_IOSAccelerometerDataRecieved @"IOSAccelerometerDataRecieved"
#define kNotification_LocationStatusChanged @"LocationStatusChanged"
#define kNotification_NewGPSLocation @"NewGPSLocation"

#define kNotification_TurbulenceEvent @"TurbulenceEvent"
#define kNotification_TurbulenceEventWrittenToFile @"TurbulenceEventWrittenToFile"
#define kNotification_DeviceInMotion @"DeviceInMotion"
#define kNotification_DeviceInStatic @"DeviceInStatic"

#define kNotification_FlightNumberChanged @"FlightNumberChanged"
#endif
