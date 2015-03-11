/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATIDSService, IDSDevice, IDSDeviceConnection;

@interface ATIDSSocket : ATSocket {
    unsigned int _btWriteBufferSize;
    IDSDevice *_device;
    IDSDeviceConnection *_deviceConnection;
    long long _priority;
    ATIDSService *_service;
    unsigned int _wifiWriteBufferSize;
}

@property(readonly) IDSDevice * device;
@property(readonly) long long priority;
@property(readonly) ATIDSService * service;

- (void).cxx_destruct;
- (void)addTransportUpgradeException;
- (void)closeDescriptor;
- (void)connectWithCompletion:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3;
- (bool)open;
- (long long)priority;
- (void)removeTransportUpgradeException;
- (id)service;

@end