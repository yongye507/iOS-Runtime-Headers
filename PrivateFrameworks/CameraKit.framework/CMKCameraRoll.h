/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCameraRoll : NSObject {
    NSMutableSet *__cachedChangeObservers;
    BOOL __hasLoadedCameraRollFrameworks;
    BOOL __hasPendingSessionAssets;
    NSMutableDictionary *__inflightAssets;
    NSMutableSet *__sessionAssetUUIDs;
    PHFetchResult *__userLibraryAssetsFetchResult;
    PHAssetCollection *__weakAssetCollection;
    PHFetchResult *__weakAssetCollectionFetchResult;
    BOOL __weakAssetCollectionLoaded;
    BOOL _changeNotificationsEnabled;
    NSDate *_sessionIdentifier;
}

@property (nonatomic, readonly) NSMutableSet *_cachedChangeObservers;
@property (nonatomic, readonly) BOOL _hasLoadedCameraRollFrameworks;
@property (nonatomic, readonly) BOOL _hasPendingSessionAssets;
@property (nonatomic, readonly) NSMutableDictionary *_inflightAssets;
@property (nonatomic, readonly) NSMutableSet *_sessionAssetUUIDs;
@property (nonatomic, readonly) PHFetchResult *_userLibraryAssetsFetchResult;
@property (nonatomic, readonly) PHAssetCollection *_weakAssetCollection;
@property (nonatomic, readonly) PHFetchResult *_weakAssetCollectionFetchResult;
@property (getter=_isWeakAssetCollectionLoaded, nonatomic, readonly) BOOL _weakAssetCollectionLoaded;
@property (nonatomic) BOOL changeNotificationsEnabled;
@property (nonatomic, readonly) NSDate *sessionIdentifier;

+ (id)sharedCameraRoll;

- (void).cxx_destruct;
- (id)_cachedChangeObservers;
- (void)_ensureFetchedSessionAssets;
- (void)_ensureWeakAssetCollection;
- (BOOL)_hasLoadedCameraRollFrameworks;
- (BOOL)_hasPendingSessionAssets;
- (id)_inflightAssets;
- (void)_invalidateAssetCollection;
- (BOOL)_isWeakAssetCollectionLoaded;
- (void)_registerAllChangeNotificationObservers;
- (void)_registerChangeNotificationObserver:(id)arg1;
- (void)_reloadSessionAssets;
- (void)_removeAllSessionAssets;
- (void)_removeSessionAssets:(id)arg1;
- (id)_sessionAssetUUIDs;
- (id)_sessionLocalIdentifiers;
- (void)_unregisterAllObjectsForChangeNotifications;
- (void)_unregisterChangeNotificationObserver:(id)arg1;
- (void)_updateWeakAlbumChangeNotificationsState;
- (void)_updateWeakAssetCollectionFromSessionChange;
- (id)_userLibraryAssetsFetchResult;
- (id)_weakAssetCollection;
- (id)_weakAssetCollectionFetchResult;
- (void)addChangeNotificationsObserver:(id)arg1;
- (void)addInflightAsset:(id)arg1;
- (void)addSessionAsset:(id)arg1;
- (id)album;
- (BOOL)changeNotificationsEnabled;
- (void)dealloc;
- (id)fetchResultContainingAssetCollection;
- (void)finishSession;
- (BOOL)hasInflightAssets;
- (id)init;
- (BOOL)isCameraSessionActive;
- (void)preflightCameraRollFrameworks;
- (id)realizedWeakAssetCollection;
- (void)removeChangeNotificationsObserver:(id)arg1;
- (void)removeInflightAsset:(id)arg1;
- (id)sessionIdentifier;
- (void)setChangeNotificationsEnabled:(BOOL)arg1;
- (void)startNewSession;
- (void)startNewSessionWithIdentifier:(id)arg1;
- (BOOL)updateFromChanges:(id)arg1;

@end