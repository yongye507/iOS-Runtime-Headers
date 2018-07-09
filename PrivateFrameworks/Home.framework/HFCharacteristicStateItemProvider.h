/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicStateItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    NSSet * _batteryItems;
    NSSet * _characteristicStateItems;
    HMService * _service;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) NSSet *batteryItems;
@property (nonatomic, retain) NSSet *characteristicStateItems;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_createBatteryItemWithSourceItem:(id)arg1 characteristicType:(id)arg2 valueFormatBlock:(id /* block */)arg3;
+ (id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3;
+ (id)standardCharacteristicTypes;

- (void).cxx_destruct;
- (id)_reloadBatteryItems;
- (id)_reloadCharacteristicStateItems;
- (id)accessory;
- (id)batteryItems;
- (id /* block */)characteristicStateItemComparator;
- (id)characteristicStateItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2 service:(id)arg3;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)service;
- (void)setBatteryItems:(id)arg1;
- (void)setCharacteristicStateItems:(id)arg1;
- (id)valueSource;

@end