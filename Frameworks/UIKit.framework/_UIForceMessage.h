/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing> {
    bool  _reset;
    unsigned long long  stage;
    double  timestamp;
    double  touchForce;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReset, nonatomic, readonly) bool reset;
@property (nonatomic) unsigned long long stage;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) double touchForce;

+ (id)observe:(id /* block */)arg1;
+ (id)reset;

- (bool)isReset;
- (void)setStage:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTouchForce:(double)arg1;
- (unsigned long long)stage;
- (double)timestamp;
- (double)touchForce;

@end