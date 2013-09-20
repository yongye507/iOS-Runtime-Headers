/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDLineEnd, TSDShapeInfo;

@interface TSDShapeSetLineEndCommand : TSKCommand {
    BOOL mIsHeadLineEnd;
    TSDLineEnd *mLineEnd;
    TSDShapeInfo *mShape;
}

@property(readonly) BOOL isHeadLineEnd;
@property(readonly) TSDLineEnd * lineEnd;
@property(readonly) TSDShapeInfo * shape;

- (id)actionString;
- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithShape:(id)arg1 lineEnd:(id)arg2 isHeadLineEnd:(BOOL)arg3;
- (BOOL)isHeadLineEnd;
- (id)lineEnd;
- (void)p_do;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (id)shape;
- (void)undo;

@end