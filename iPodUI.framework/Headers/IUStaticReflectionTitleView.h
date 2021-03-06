/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSString, UIColor;

@interface IUStaticReflectionTitleView : XXUnknownSuperclass {
	NSString *_title;	// 48 = 0x30
	UIColor *_textColor;	// 52 = 0x34
	UIColor *_reflectionColor;	// 56 = 0x38
	int _overdraw;	// 60 = 0x3c
}
@property(assign, nonatomic) int overdraw;	// G=0xab7c5; S=0xab7d5; @synthesize=_overdraw
@property(retain, nonatomic) UIColor *reflectionColor;	// G=0xab7e5; S=0xab7f5; @synthesize=_reflectionColor
@property(retain, nonatomic) UIColor *textColor;	// G=0xab819; S=0xab829; @synthesize=_textColor
@property(retain, nonatomic) NSString *title;	// G=0xab84d; S=0xab3c5; @synthesize=_title
// declared property getter: - (id)title;	// 0xab84d
// declared property setter: - (void)setTextColor:(id)color;	// 0xab829
// declared property getter: - (id)textColor;	// 0xab819
// declared property setter: - (void)setReflectionColor:(id)color;	// 0xab7f5
// declared property getter: - (id)reflectionColor;	// 0xab7e5
// declared property setter: - (void)setOverdraw:(int)overdraw;	// 0xab7d5
// declared property getter: - (int)overdraw;	// 0xab7c5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xab6fd
- (void)drawRect:(CGRect)rect;	// 0xab419
// declared property setter: - (void)setTitle:(id)title;	// 0xab3c5
- (void)dealloc;	// 0xab351
- (id)initWithFrame:(CGRect)frame;	// 0xab2c9
@end
