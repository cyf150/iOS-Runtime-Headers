/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrackSwooshViewController : SKUISwooshViewController <SKUIItemStateCenterObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SKUITrackSwooshCollectionViewLayout *_collectionViewLayout;
    BOOL _didInitialReload;
    NSObject<OS_dispatch_source> *_doubleTapTimer;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    SKUISwooshView *_swooshView;
    SKUISwooshPageComponent *_trackSwoosh;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUITrackSwooshViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (nonatomic, readonly) NSArray *lockups;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } seeAllButtonFrame;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDoubleTapTimer;
- (void)_seeAllAction:(id)arg1;
- (void)_timeoutDoubleTapTimer;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtIndex:(int)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithTrackSwoosh:(id)arg1;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (id)itemOfferButtonAppearance;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadView;
- (id)lockups;
- (void)reloadCellsForLockups:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })seeAllButtonFrame;
- (void)setColorScheme:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
