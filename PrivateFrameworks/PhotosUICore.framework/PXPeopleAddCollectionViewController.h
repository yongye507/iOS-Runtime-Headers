/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleAddCollectionViewController : PXPeopleCollectionViewController {
    <PXPeopleAddCollectionViewControllerDelegate> * _delegate;
    NSString * _titleString;
}

@property (nonatomic) <PXPeopleAddCollectionViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSString *titleString;

- (void).cxx_destruct;
- (void)_updateForSelectionChange;
- (void)cancel:(id)arg1;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)confirm:(id)arg1;
- (id)delegate;
- (id)selectionModeTitle;
- (void)setDelegate:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)titleString;
- (void)viewDidLoad;

@end
