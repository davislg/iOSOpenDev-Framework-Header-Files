/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, UIImageView, UILabel;

@interface SURatingControl : XXUnknownSuperclass {
	UIImageView *_backgroundImageView;	// 72 = 0x48
	UILabel *_explanationLabel;	// 76 = 0x4c
	UIImageView *_foregroundImageView;	// 80 = 0x50
	CGSize _hitPadding;	// 84 = 0x54
	float _starWidth;	// 92 = 0x5c
	CGPoint _trackingLastPoint;	// 96 = 0x60
	CGPoint _trackingStartPoint;	// 104 = 0x68
	float _value;	// 112 = 0x70
}
@property(assign, nonatomic) float value;	// G=0x3bc85; S=0x3bc65; 
@property(assign, nonatomic) float starWidth;	// G=0x3c1ed; S=0x3c1fd; @synthesize=_starWidth
@property(retain, nonatomic) NSString *explanationText;	// G=0x3bb51; S=0x3bb85; 
// declared property setter: - (void)setStarWidth:(float)width;	// 0x3c1fd
// declared property getter: - (float)starWidth;	// 0x3c1ed
- (void)_updateValueForPoint:(CGPoint)point;	// 0x3c049
- (id)_newExplanationLabel;	// 0x3bf25
- (CGRect)_foregroundImageClipBounds;	// 0x3beb5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3be79
- (CGRect)hitRect;	// 0x3bdfd
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3bd91
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3bcd9
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3bc9d
- (BOOL)canHandleSwipes;	// 0x3bc99
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3bc95
// declared property getter: - (float)value;	// 0x3bc85
// declared property setter: - (void)setValue:(float)value;	// 0x3bc65
// declared property setter: - (void)setExplanationText:(id)text;	// 0x3bb85
- (void)setHitPadding:(CGSize)padding;	// 0x3bb71
// declared property getter: - (id)explanationText;	// 0x3bb51
- (void)sizeToFit;	// 0x3bac5
- (void)layoutSubviews;	// 0x3b9bd
- (void)dealloc;	// 0x3b949
- (id)initWithBackgroundImage:(id)backgroundImage foregroundImage:(id)image;	// 0x3b7bd
@end