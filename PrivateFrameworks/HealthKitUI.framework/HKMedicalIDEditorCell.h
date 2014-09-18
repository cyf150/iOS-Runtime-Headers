/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class <HKMedicalIDEditorCellEditDelegate>, HKCaretOptionalTextField, NSString, UILabel, UIView;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate> {
    <HKMedicalIDEditorCellEditDelegate> *_editDelegate;
    UIView *_horizontalSeparatorView;
    HKCaretOptionalTextField *_inputTextField;
    UILabel *_labelLabel;
    double _minimumLabelWidth;
    UIView *_verticalSeparatorView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <HKMedicalIDEditorCellEditDelegate> * editDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) HKCaretOptionalTextField * inputTextField;
@property(retain) NSString * label;
@property(readonly) UILabel * labelLabel;
@property double minimumLabelWidth;
@property(readonly) Class superclass;

+ (bool)showsLabelAndValue;

- (void).cxx_destruct;
- (void)beginEditing;
- (void)commitEditing;
- (void)dealloc;
- (id)editDelegate;
- (id)formattedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputTextField;
- (id)label;
- (id)labelLabel;
- (void)layoutSubviews;
- (double)minimumLabelWidth;
- (void)setEditDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinimumLabelWidth:(double)arg1;
- (id)shortenedFormattedValue;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateValueLabel;
- (void)valueDidChange;

@end