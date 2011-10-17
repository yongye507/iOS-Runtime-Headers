/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class SCROBrailleEvent, NSLock;

@interface SCROBrailleEventDispatcher : NSObject  {
    NSLock *_queueLock;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_queueSource;
    struct __CFArray { } *_queue;
    SCROBrailleEvent *_brailleQueue;
    id _target;
    BOOL _isValid;
}


- (void)_processQueue;
- (void)enqueueEvent:(id)arg1;
- (void)start;
- (void)invalidate;
- (id)initWithTarget:(id)arg1;
- (BOOL)isValid;
- (void)dealloc;

@end