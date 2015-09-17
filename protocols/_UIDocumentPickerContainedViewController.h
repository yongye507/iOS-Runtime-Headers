/* Generated by RuntimeBrowser.
 */

@protocol _UIDocumentPickerContainedViewController <NSObject, UISearchControllerDelegate>

@required

- (NSArray *)indexPathsForSelectedItems;
- (BOOL)isEditing;
- (void)scrollSortViewToVisible;
- (UIScrollView *)scrollView;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIndexPathsForSelectedItems:(NSArray *)arg1;
- (void)setPinnedHeaderView:(UIView *)arg1 animated:(BOOL)arg2;
- (void)setServiceViewController:(id <_UIDocumentPickerServiceViewController>)arg1;
- (void)setSortView:(_UIDocumentPickerSortOrderView *)arg1;

@end