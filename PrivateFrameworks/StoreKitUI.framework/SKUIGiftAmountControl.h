/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate> {
    NSMutableArray *_amountButtons;
    UIView *_customAmountBackgroundView;
    UITextField *_customAmountField;
    SKUIGiftConfiguration *_giftConfiguration;
    int _selectedAmount;
    int _trackingAmount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int selectedAmount;
@property (nonatomic, readonly) NSString *selectedAmountString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadSelectedButton;
- (void)_textFieldDidBeginEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_textFieldDidEndEditing:(id)arg1;
- (void)_updateButtonsWithTouch:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;
- (void)layoutSubviews;
- (int)selectedAmount;
- (id)selectedAmountString;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;

@end
