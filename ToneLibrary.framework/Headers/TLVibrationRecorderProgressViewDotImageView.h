/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <ToneLibrary/XXUnknownSuperclass.h>


@interface TLVibrationRecorderProgressViewDotImageView : XXUnknownSuperclass {
	double _timeInterval;	// 52 = 0x34
	double _duration;	// 60 = 0x3c
	double _previousPauseTimeInterval;	// 68 = 0x44
	double _previousPauseDuration;	// 76 = 0x4c
}
@property(assign, nonatomic) double previousPauseDuration;	// G=0x1b579; S=0x1b591; @synthesize=_previousPauseDuration
@property(assign, nonatomic) double previousPauseTimeInterval;	// G=0x1b54d; S=0x1b565; @synthesize=_previousPauseTimeInterval
@property(assign, nonatomic) double duration;	// G=0x1b521; S=0x1b539; @synthesize=_duration
@property(assign, nonatomic) double timeInterval;	// G=0x1b4f5; S=0x1b50d; @synthesize=_timeInterval
// declared property setter: - (void)setPreviousPauseDuration:(double)duration;	// 0x1b591
// declared property getter: - (double)previousPauseDuration;	// 0x1b579
// declared property setter: - (void)setPreviousPauseTimeInterval:(double)interval;	// 0x1b565
// declared property getter: - (double)previousPauseTimeInterval;	// 0x1b54d
// declared property setter: - (void)setDuration:(double)duration;	// 0x1b539
// declared property getter: - (double)duration;	// 0x1b521
// declared property setter: - (void)setTimeInterval:(double)interval;	// 0x1b50d
// declared property getter: - (double)timeInterval;	// 0x1b4f5
- (unsigned long long)accessibilityTraits;	// 0x1b4b5
- (CGRect)accessibilityFrame;	// 0x1b451
- (id)accessibilityValue;	// 0x1b201
- (id)accessibilityLabel;	// 0x1b181
- (BOOL)isAccessibilityElement;	// 0x1b161
@end
