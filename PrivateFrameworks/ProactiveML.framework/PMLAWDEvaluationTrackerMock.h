/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter * _adapter;
}

@property (readonly) NSArray *trackedEvaluations;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(struct NSString { Class x1; }*)arg1;

- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)trackedEvaluations;

@end