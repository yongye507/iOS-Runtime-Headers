/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationDataStoreRepositoryServerClient : FBBasicSystemServiceFacilityClient {
    <FBApplicationDataStoreRepositoryServerClientDelegate> * _delegate;
    bool  _interestedInAllChanges;
    bool  _observingChanges;
    NSSet * _prefetchedKeys;
    NSMutableDictionary * _prefetchedKeysPendingChangesByBundleID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <FBApplicationDataStoreRepositoryServerClientDelegate> *delegate;
@property (nonatomic) bool interestedInAllChanges;

- (bool)_checkPendingChangeForKey:(id)arg1 application:(id)arg2;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_sendValueChangedForObject:(id)arg1 key:(id)arg2 bundleID:(id)arg3;
- (void)_updateObservers;
- (void)_valueChanged:(id)arg1;
- (void)clearPendingChangeForKey:(id)arg1 application:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithSystemServiceClient:(id)arg1;
- (bool)interestedInAllChanges;
- (void)setDelegate:(id)arg1;
- (void)setInterestedInAllChanges:(bool)arg1;
- (void)setPendingChangeForKey:(id)arg1 application:(id)arg2;
- (void)setPrefetchedKeys:(id)arg1 withDataStore:(id)arg2 resultHandler:(id /* block */)arg3;

@end
