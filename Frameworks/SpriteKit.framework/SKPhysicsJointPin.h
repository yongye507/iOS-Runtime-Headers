/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointPin : SKPhysicsJoint {
    float _frictionTorque;
    float _lowerAngleLimit;
    BOOL _shouldEnableLimits;
    float _upperAngleLimit;
}

@property float frictionTorque;
@property float lowerAngleLimit;
@property BOOL shouldEnableLimits;
@property float upperAngleLimit;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3;

- (float)frictionTorque;
- (float)lowerAngleLimit;
- (void)setFrictionTorque:(float)arg1;
- (void)setLowerAngleLimit:(float)arg1;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (void)setUpperAngleLimit:(float)arg1;
- (BOOL)shouldEnableLimits;
- (float)upperAngleLimit;

@end