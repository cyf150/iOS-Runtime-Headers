/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSavedModeTableView : UITableView <PTSHUDControl> {
    int _alignment;
    BOOL _enabled;
    _UISettings *_settings;
    NSString *_valueKeyPath;
}

@property (nonatomic) int alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic) _UISettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *valueKeyPath;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;

- (void).cxx_destruct;
- (int)alignment;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSettings:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (id)valueKeyPath;

@end
