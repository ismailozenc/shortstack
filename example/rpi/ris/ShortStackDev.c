/*
 * THIS FILE IS MACHINE-GENERATED. DO NOT EDIT.
 *
 * Content generated by Echelon IzoT Interface Interpreter 1.10.03 at 24-Feb-2015 13:10
 * Copyright (c) Echelon Corporation 2015
 *
 * Target: Echelon IzoT ShortStack (SS430_FT6050_SYS20000kHz)
 *
 * Use of this code is subject to your compliance with the terms of the
 * Echelon IzoT(tm) ShortStack License Agreement which is
 * available at www.echelon.com
 */
#include <string.h>
#include "ShortStackDev.h"
#include "ShortStackApi.h"

/*
 * Message tag initialization
 */
static void tags_init(void) {
}   // tags_init

/* end Message tag initialization */

/*
 * Device datapoint initialization
 */
static void device_datapoints_init(void) {
}   // device_datapoints_init

/* end Device datapoint initialization */

/*
 * Device property initialization
 */
static void device_properties_init(void) {
}   // device_properties_init

/* end Device property initialization */

/*
 * Block initialization
 */
static SCPTdevMajVer nodeObject__nciDevMajVer;
static SCPTdevMinVer nodeObject__nciDevMinVer;
static SCPTlocation nodeObject__nciLocation;
static SCPTnwrkCnfg nodeObject__nciNetConfig;
static SCPTminDeltaCO2 deluxeCO2__0__nvoCO2ppm__nciCO2MinDelta;
static SCPToffsetCO2 deluxeCO2__0__nvoCO2ppm__nciCO2Offset;
static SCPTmaxSendTime deluxeCO2__0__nciMaxSendTime;
static SCPTminSendTime deluxeCO2__0__nciMinSendTime;
static SCPTminDeltaCO2 deluxeCO2__1__nvoCO2ppm__nciCO2MinDelta;
static SCPToffsetCO2 deluxeCO2__1__nvoCO2ppm__nciCO2Offset;
static SCPTmaxSendTime deluxeCO2__1__nciMaxSendTime;
static SCPTminSendTime deluxeCO2__1__nciMinSendTime;
static SCPTminDeltaCO2 deluxeCO2__2__nvoCO2ppm__nciCO2MinDelta;
static SCPToffsetCO2 deluxeCO2__2__nvoCO2ppm__nciCO2Offset;
static SCPTmaxSendTime deluxeCO2__2__nciMaxSendTime;
static SCPTminSendTime deluxeCO2__2__nciMinSendTime;
static SCPTminDeltaCO2 deluxeCO2__3__nvoCO2ppm__nciCO2MinDelta;
static SCPToffsetCO2 deluxeCO2__3__nvoCO2ppm__nciCO2Offset;
static SCPTmaxSendTime deluxeCO2__3__nciMaxSendTime;
static SCPTminSendTime deluxeCO2__3__nciMinSendTime;

static void blocks_init(void) {
   memset(&nodeObject, 0, sizeof(nodeObject));
   nodeObject.global_index = 0;
   nodeObject.nviRequest.global_index = 0;
   nodeObject.nvoStatus.global_index = 1;
   nodeObject.nciDevMajVer = &nodeObject__nciDevMajVer;
   {
      const LonByte init[] = {1};
      memcpy(&nodeObject__nciDevMajVer, init, sizeof(init));
   }
   nodeObject.nciDevMinVer = &nodeObject__nciDevMinVer;
   memset(&nodeObject__nciDevMinVer, 0, sizeof(nodeObject__nciDevMinVer));
   nodeObject.nciLocation = &nodeObject__nciLocation;
   memset(&nodeObject__nciLocation, 0, sizeof(nodeObject__nciLocation));
   nodeObject.nciNetConfig = &nodeObject__nciNetConfig;
   {
      const LonByte init[] = {1};
      memcpy(&nodeObject__nciNetConfig, init, sizeof(init));
   }
   memset(&deluxeCO2, 0, sizeof(deluxeCO2));
   deluxeCO2[0].global_index = 1;
   deluxeCO2[0].nvoCO2ppm.global_index = 6;
   deluxeCO2[0].nvoCO2ppm.nciCO2MinDelta = &deluxeCO2__0__nvoCO2ppm__nciCO2MinDelta;
   deluxeCO2[0].nvoCO2ppm.nciCO2Offset = &deluxeCO2__0__nvoCO2ppm__nciCO2Offset;
   memset(&deluxeCO2__0__nvoCO2ppm__nciCO2Offset, 0, sizeof(deluxeCO2__0__nvoCO2ppm__nciCO2Offset));
   deluxeCO2[0].nciMaxSendTime = &deluxeCO2__0__nciMaxSendTime;
   deluxeCO2[0].nciMinSendTime = &deluxeCO2__0__nciMinSendTime;
   deluxeCO2[1].global_index = 2;
   deluxeCO2[1].nvoCO2ppm.global_index = 11;
   deluxeCO2[1].nvoCO2ppm.nciCO2MinDelta = &deluxeCO2__1__nvoCO2ppm__nciCO2MinDelta;
   deluxeCO2[1].nvoCO2ppm.nciCO2Offset = &deluxeCO2__1__nvoCO2ppm__nciCO2Offset;
   memset(&deluxeCO2__1__nvoCO2ppm__nciCO2Offset, 0, sizeof(deluxeCO2__1__nvoCO2ppm__nciCO2Offset));
   deluxeCO2[1].nciMaxSendTime = &deluxeCO2__1__nciMaxSendTime;
   deluxeCO2[1].nciMinSendTime = &deluxeCO2__1__nciMinSendTime;
   deluxeCO2[2].global_index = 3;
   deluxeCO2[2].nvoCO2ppm.global_index = 16;
   deluxeCO2[2].nvoCO2ppm.nciCO2MinDelta = &deluxeCO2__2__nvoCO2ppm__nciCO2MinDelta;
   deluxeCO2[2].nvoCO2ppm.nciCO2Offset = &deluxeCO2__2__nvoCO2ppm__nciCO2Offset;
   memset(&deluxeCO2__2__nvoCO2ppm__nciCO2Offset, 0, sizeof(deluxeCO2__2__nvoCO2ppm__nciCO2Offset));
   deluxeCO2[2].nciMaxSendTime = &deluxeCO2__2__nciMaxSendTime;
   deluxeCO2[2].nciMinSendTime = &deluxeCO2__2__nciMinSendTime;
   deluxeCO2[3].global_index = 4;
   deluxeCO2[3].nvoCO2ppm.global_index = 21;
   deluxeCO2[3].nvoCO2ppm.nciCO2MinDelta = &deluxeCO2__3__nvoCO2ppm__nciCO2MinDelta;
   deluxeCO2[3].nvoCO2ppm.nciCO2Offset = &deluxeCO2__3__nvoCO2ppm__nciCO2Offset;
   memset(&deluxeCO2__3__nvoCO2ppm__nciCO2Offset, 0, sizeof(deluxeCO2__3__nvoCO2ppm__nciCO2Offset));
   deluxeCO2[3].nciMaxSendTime = &deluxeCO2__3__nciMaxSendTime;
   deluxeCO2[3].nciMinSendTime = &deluxeCO2__3__nciMinSendTime;
}   // blocks_init

/* end Block initialization */

/*
 * Datapoint table
 */
#define DVPTR(item) (void* const)&(item.data)   /* produces an NV value pointer */
#define PVPTR(item) (void* const)&item          /* produces a property value pointer */

static const LonNvDescription nvTable[] = {
   {DVPTR(nodeObject.nviRequest), 3, 0x00},
   {DVPTR(nodeObject.nvoStatus), 6, 0x80},
   {PVPTR(nodeObject__nciDevMajVer), 1, 0x40},
   {PVPTR(nodeObject__nciDevMinVer), 1, 0x40},
   {PVPTR(nodeObject__nciLocation), 31, 0x40},
   {PVPTR(nodeObject__nciNetConfig), 1, 0x40},
   {DVPTR(deluxeCO2[0].nvoCO2ppm), 2, 0x80},
   {PVPTR(deluxeCO2__0__nvoCO2ppm__nciCO2MinDelta), 2, 0x40},
   {PVPTR(deluxeCO2__0__nvoCO2ppm__nciCO2Offset), 2, 0x40},
   {PVPTR(deluxeCO2__0__nciMaxSendTime), 2, 0x40},
   {PVPTR(deluxeCO2__0__nciMinSendTime), 2, 0x40},
   {DVPTR(deluxeCO2[1].nvoCO2ppm), 2, 0x80},
   {PVPTR(deluxeCO2__1__nvoCO2ppm__nciCO2MinDelta), 2, 0x40},
   {PVPTR(deluxeCO2__1__nvoCO2ppm__nciCO2Offset), 2, 0x40},
   {PVPTR(deluxeCO2__1__nciMaxSendTime), 2, 0x40},
   {PVPTR(deluxeCO2__1__nciMinSendTime), 2, 0x40},
   {DVPTR(deluxeCO2[2].nvoCO2ppm), 2, 0x80},
   {PVPTR(deluxeCO2__2__nvoCO2ppm__nciCO2MinDelta), 2, 0x40},
   {PVPTR(deluxeCO2__2__nvoCO2ppm__nciCO2Offset), 2, 0x40},
   {PVPTR(deluxeCO2__2__nciMaxSendTime), 2, 0x40},
   {PVPTR(deluxeCO2__2__nciMinSendTime), 2, 0x40},
   {DVPTR(deluxeCO2[3].nvoCO2ppm), 2, 0x80},
   {PVPTR(deluxeCO2__3__nvoCO2ppm__nciCO2MinDelta), 2, 0x40},
   {PVPTR(deluxeCO2__3__nvoCO2ppm__nciCO2Offset), 2, 0x40},
   {PVPTR(deluxeCO2__3__nciMaxSendTime), 2, 0x40},
   {PVPTR(deluxeCO2__3__nciMinSendTime), 2, 0x40},
};
/* end Datapoint table */

/*
 * Self-identification data
 */
static const LonByte siData[] =
{
   0x02, 0xDB, 0x1A, 0x01, 0x00, 0x00, 0x8E, 0x5C,
   0x8E, 0x5D, 0x8F, 0x00, 0x8F, 0x00, 0x8F, 0x24,
   0x8F, 0x45, 0x8E, 0x1D, 0x8F, 0x1D, 0x8F, 0x1D,
   0x8F, 0x6B, 0x8F, 0x6B, 0x8E, 0x1D, 0x8F, 0x1D,
   0x8F, 0x1D, 0x8F, 0x6B, 0x8F, 0x6B, 0x8E, 0x1D,
   0x8F, 0x1D, 0x8F, 0x1D, 0x8F, 0x6B, 0x8F, 0x6B,
   0x8E, 0x1D, 0x8F, 0x1D, 0x8F, 0x1D, 0x8F, 0x6B,
   0x8F, 0x6B, 0x26, 0x33, 0x2E, 0x34, 0x40, 0x30,
   0x6E, 0x6F, 0x64, 0x65, 0x4F, 0x62, 0x6A, 0x65,
   0x63, 0x74, 0x2C, 0x31, 0x30, 0x37, 0x30, 0x5B,
   0x34, 0x43, 0x4F, 0x32, 0x00, 0x30, 0x6E, 0x76,
   0x69, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74,
   0x00, 0x40, 0x30, 0x7C, 0x31, 0x00, 0x30, 0x6E,
   0x76, 0x6F, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73,
   0x00, 0x40, 0x30, 0x7C, 0x32, 0x00, 0x30, 0x6E,
   0x63, 0x69, 0x44, 0x65, 0x76, 0x4D, 0x61, 0x6A,
   0x56, 0x65, 0x72, 0x00, 0x26, 0x31, 0x2C, 0x30,
   0x2C, 0x30, 0x84, 0x2C, 0x31, 0x36, 0x35, 0x00,
   0x30, 0x6E, 0x63, 0x69, 0x44, 0x65, 0x76, 0x4D,
   0x69, 0x6E, 0x56, 0x65, 0x72, 0x00, 0x26, 0x31,
   0x2C, 0x30, 0x2C, 0x30, 0xA4, 0x2C, 0x31, 0x36,
   0x36, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x4C, 0x6F,
   0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x26,
   0x31, 0x2C, 0x30, 0x2C, 0x30, 0x80, 0x2C, 0x31,
   0x37, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x4E, 0x65,
   0x74, 0x43, 0x6F, 0x6E, 0x66, 0x69, 0x67, 0x00,
   0x26, 0x31, 0x2C, 0x30, 0x2C, 0x30, 0x80, 0x2C,
   0x32, 0x35, 0x00, 0x30, 0x6E, 0x76, 0x6F, 0x43,
   0x4F, 0x32, 0x70, 0x70, 0x6D, 0x00, 0x40, 0x31,
   0x7C, 0x31, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x43,
   0x4F, 0x32, 0x4D, 0x69, 0x6E, 0x44, 0x65, 0x6C,
   0x74, 0x61, 0x00, 0x26, 0x32, 0x2C, 0x36, 0x2C,
   0x30, 0x80, 0x2C, 0x36, 0x33, 0x00, 0x30, 0x6E,
   0x63, 0x69, 0x43, 0x4F, 0x32, 0x4F, 0x66, 0x66,
   0x73, 0x65, 0x74, 0x00, 0x26, 0x32, 0x2C, 0x36,
   0x2C, 0x30, 0x80, 0x2C, 0x36, 0x38, 0x00, 0x30,
   0x6E, 0x63, 0x69, 0x4D, 0x61, 0x78, 0x53, 0x65,
   0x6E, 0x64, 0x54, 0x69, 0x6D, 0x65, 0x00, 0x26,
   0x31, 0x2C, 0x31, 0x2C, 0x30, 0x80, 0x2C, 0x34,
   0x39, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x4D, 0x69,
   0x6E, 0x53, 0x65, 0x6E, 0x64, 0x54, 0x69, 0x6D,
   0x65, 0x00, 0x26, 0x31, 0x2C, 0x31, 0x2C, 0x30,
   0x80, 0x2C, 0x35, 0x32, 0x00, 0x30, 0x6E, 0x76,
   0x6F, 0x43, 0x4F, 0x32, 0x70, 0x70, 0x6D, 0x31,
   0x00, 0x40, 0x32, 0x7C, 0x31, 0x00, 0x30, 0x6E,
   0x63, 0x69, 0x43, 0x4F, 0x32, 0x4D, 0x69, 0x6E,
   0x44, 0x65, 0x6C, 0x74, 0x61, 0x31, 0x00, 0x26,
   0x32, 0x2C, 0x31, 0x31, 0x2C, 0x30, 0x80, 0x2C,
   0x36, 0x33, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x43,
   0x4F, 0x32, 0x4F, 0x66, 0x66, 0x73, 0x65, 0x74,
   0x31, 0x00, 0x26, 0x32, 0x2C, 0x31, 0x31, 0x2C,
   0x30, 0x80, 0x2C, 0x36, 0x38, 0x00, 0x30, 0x6E,
   0x63, 0x69, 0x4D, 0x61, 0x78, 0x53, 0x65, 0x6E,
   0x64, 0x54, 0x69, 0x6D, 0x65, 0x31, 0x00, 0x26,
   0x31, 0x2C, 0x32, 0x2C, 0x30, 0x80, 0x2C, 0x34,
   0x39, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x4D, 0x69,
   0x6E, 0x53, 0x65, 0x6E, 0x64, 0x54, 0x69, 0x6D,
   0x65, 0x31, 0x00, 0x26, 0x31, 0x2C, 0x32, 0x2C,
   0x30, 0x80, 0x2C, 0x35, 0x32, 0x00, 0x30, 0x6E,
   0x76, 0x6F, 0x43, 0x4F, 0x32, 0x70, 0x70, 0x6D,
   0x32, 0x00, 0x40, 0x33, 0x7C, 0x31, 0x00, 0x30,
   0x6E, 0x63, 0x69, 0x43, 0x4F, 0x32, 0x4D, 0x69,
   0x6E, 0x44, 0x65, 0x6C, 0x74, 0x61, 0x32, 0x00,
   0x26, 0x32, 0x2C, 0x31, 0x36, 0x2C, 0x30, 0x80,
   0x2C, 0x36, 0x33, 0x00, 0x30, 0x6E, 0x63, 0x69,
   0x43, 0x4F, 0x32, 0x4F, 0x66, 0x66, 0x73, 0x65,
   0x74, 0x32, 0x00, 0x26, 0x32, 0x2C, 0x31, 0x36,
   0x2C, 0x30, 0x80, 0x2C, 0x36, 0x38, 0x00, 0x30,
   0x6E, 0x63, 0x69, 0x4D, 0x61, 0x78, 0x53, 0x65,
   0x6E, 0x64, 0x54, 0x69, 0x6D, 0x65, 0x32, 0x00,
   0x26, 0x31, 0x2C, 0x33, 0x2C, 0x30, 0x80, 0x2C,
   0x34, 0x39, 0x00, 0x30, 0x6E, 0x63, 0x69, 0x4D,
   0x69, 0x6E, 0x53, 0x65, 0x6E, 0x64, 0x54, 0x69,
   0x6D, 0x65, 0x32, 0x00, 0x26, 0x31, 0x2C, 0x33,
   0x2C, 0x30, 0x80, 0x2C, 0x35, 0x32, 0x00, 0x30,
   0x6E, 0x76, 0x6F, 0x43, 0x4F, 0x32, 0x70, 0x70,
   0x6D, 0x33, 0x00, 0x40, 0x34, 0x7C, 0x31, 0x00,
   0x30, 0x6E, 0x63, 0x69, 0x43, 0x4F, 0x32, 0x4D,
   0x69, 0x6E, 0x44, 0x65, 0x6C, 0x74, 0x61, 0x33,
   0x00, 0x26, 0x32, 0x2C, 0x32, 0x31, 0x2C, 0x30,
   0x80, 0x2C, 0x36, 0x33, 0x00, 0x30, 0x6E, 0x63,
   0x69, 0x43, 0x4F, 0x32, 0x4F, 0x66, 0x66, 0x73,
   0x65, 0x74, 0x33, 0x00, 0x26, 0x32, 0x2C, 0x32,
   0x31, 0x2C, 0x30, 0x80, 0x2C, 0x36, 0x38, 0x00,
   0x30, 0x6E, 0x63, 0x69, 0x4D, 0x61, 0x78, 0x53,
   0x65, 0x6E, 0x64, 0x54, 0x69, 0x6D, 0x65, 0x33,
   0x00, 0x26, 0x31, 0x2C, 0x34, 0x2C, 0x30, 0x80,
   0x2C, 0x34, 0x39, 0x00, 0x30, 0x6E, 0x63, 0x69,
   0x4D, 0x69, 0x6E, 0x53, 0x65, 0x6E, 0x64, 0x54,
   0x69, 0x6D, 0x65, 0x33, 0x00, 0x26, 0x31, 0x2C,
   0x34, 0x2C, 0x30, 0x80, 0x2C, 0x35, 0x32, 0x00,
   0xC0, 0x00, 0x7F
};

/*
 * Application initialization data
 *
 * The Micro Server uses a 16 bit signature while IzoT Interface Interpreter
 * supports a stronger 32-bit signature. The initialialization
 * data below uses a 16-bit signature derived from the 32 bit
 * version by folding the higher 16 bits into the lower 16 bits
 * with an exclusive-or combination.
 */
static const LonByte appInitData[] =
{
   /* Folded signature */
   0xAB, 0x6D,
   /* Program Id */
   0x9F, 0xFF, 0xFF, 0x0A, 0x46, 0x04, 0x04, 0x01,
   /* Communication parameters */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   LON_USE_DEFAULT_COMMPARAMS | LON_EXPLICIT_ADDRESSING | LON_SERVICE_PIN_TIMER,
   LON_NV_COUNT,
   /* NV registration data */
   0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00,
   0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
   0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
   0x00, 0x00
};

/*
 * onUpdate event handler specifications
 */
extern void onNviRequest(const unsigned index, const LonReceiveAddress* const pSourceAddress);
/* end onUpdate event handler specifications */

/*
 * onUpdate event dispatcher
 */
void deluxeLonNvUpdateOccurred(
   const unsigned index,
   const LonReceiveAddress* const pSourceAddress
) {
   if (
       index == 0 // nodeObject.nviRequest
   ) {
      onNviRequest(index, pSourceAddress);
   }
}
/* end onUpdate event dispatcher */

/*
 * onComplete event dispatcher
 */
void deluxeLonNvUpdateCompleted(
   const unsigned index,
   const LonBool success
) {
}
/* end onComplete event dispatcher */

/*
 * IzotGetCurrentDatapointSize event handler
 */
const unsigned deluxeLonGetCurrentNvSize(const unsigned index) {
   unsigned result = (unsigned)nvTable[index].DeclaredSize;
   return result;
}
/* end IzotGetCurrentDatapointSize event handler */

/*
 * onOnline event dispatcher
 */
void deluxeLonOnline(void) {
}
/* end onOnline event dispatcher */

/*
 * onOffline event dispatcher
 */
void deluxeLonOffline(void) {
}
/* end onOffline event dispatcher */

/*
 * onReset event dispatcher
 */
void deluxeLonResetOccurred(const LonResetNotification* const pResetNotification) {
}
/* end onReset event dispatcher */

/*
 * onService event dispatcher
 */
static void onService_dispatcher(LonBool held) {
}

void deluxeLonServicePinPressed(void) {
   onService_dispatcher(FALSE);
}

void deluxeLonServicePinHeld(void) {
   onService_dispatcher(TRUE);
}

/* end onService event dispatcher */

/*
 * onWink event dispatcher
 */
void deluxeLonWink(void) {
}
/* end onWink event dispatcher */

const LonByte* deluxeLonGetSiData(unsigned* pLength) {
   *pLength = (unsigned)sizeof(siData);
   return siData;
}

const LonByte* deluxeLonGetAppInitData(void) {
   return appInitData;
}

void* deluxeLonGetNvTable(void) {
   return (void*)nvTable;
}

unsigned deluxeLonGetNvCount(void) {
   return LON_NV_COUNT;
}

unsigned deluxeLonGetMtCount(void) {
   return LON_MT_COUNT;
}

LonUbits32 deluxeLonGetSignature(void) {
   return (LonUbits32)LON_APP_SIGNATURE;
}

void deluxeLonFrameworkInit(void) {
   /* called by LonInit */
   tags_init();
   device_datapoints_init();
   device_properties_init();
   blocks_init();
}
