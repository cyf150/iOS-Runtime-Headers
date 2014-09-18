/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {
    unsigned long long _maxNumbersAllowed;
    NSMutableCharacterSet *_numericTrimmingSet;
    bool_allowsNewlineAcceptance;
    bool_autoAcceptWhenMaxNumbersMet;
}

@property bool allowsNewlineAcceptance;
@property bool autoAcceptWhenMaxNumbersMet;
@property unsigned long long maxNumbersAllowed;

- (void)_appendString:(id)arg1;
- (void)_deleteLastCharacter;
- (bool)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(id)arg1;
- (bool)allowsNewlineAcceptance;
- (bool)autoAcceptWhenMaxNumbersMet;
- (void)dealloc;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (unsigned long long)maxNumbersAllowed;
- (bool)resignFirstResponder;
- (void)setAllowsNewlineAcceptance:(bool)arg1;
- (void)setAutoAcceptWhenMaxNumbersMet:(bool)arg1;
- (void)setMaxNumbersAllowed:(unsigned long long)arg1;
- (bool)shouldInsertPasscodeText:(id)arg1;

@end