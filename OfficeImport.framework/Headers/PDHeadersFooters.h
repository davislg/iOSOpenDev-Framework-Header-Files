/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : XXUnknownSuperclass {
@private
	BOOL mHasDateTime;	// 4 = 0x4
	BOOL mHasNowDateTime;	// 5 = 0x5
	BOOL mHasUserDateTime;	// 6 = 0x6
	BOOL mHasSlideNumber;	// 7 = 0x7
	BOOL mHasHeader;	// 8 = 0x8
	BOOL mHasFooter;	// 9 = 0x9
	int mDateTimeFormat;	// 12 = 0xc
	NSString *mUserDateTime;	// 16 = 0x10
	NSString *mHeader;	// 20 = 0x14
	NSString *mFooter;	// 24 = 0x18
}
@property(assign) BOOL hasDateTime;	// G=0x21938d; S=0x21939d; converted property
@property(assign) BOOL hasNowDateTime;	// G=0x2193ad; S=0x2193bd; converted property
@property(assign) BOOL hasUserDateTime;	// G=0x2193cd; S=0x2193dd; converted property
@property(assign) BOOL hasSlideNumber;	// G=0x2193ed; S=0x2193fd; converted property
@property(assign) BOOL hasHeader;	// G=0x21940d; S=0x21941d; converted property
@property(assign) BOOL hasFooter;	// G=0x21942d; S=0x21943d; converted property
@property(retain) id userDateTime;	// G=0x21944d; S=0x21947d; converted property
@property(retain) id header;	// G=0x21945d; S=0x2194bd; converted property
@property(retain) id footer;	// G=0x21946d; S=0x2194fd; converted property
- (void)dealloc;	// 0x21953d
// converted property getter: - (BOOL)hasDateTime;	// 0x21938d
// converted property setter: - (void)setHasDateTime:(BOOL)time;	// 0x21939d
// converted property getter: - (BOOL)hasNowDateTime;	// 0x2193ad
// converted property setter: - (void)setHasNowDateTime:(BOOL)time;	// 0x2193bd
// converted property getter: - (BOOL)hasUserDateTime;	// 0x2193cd
// converted property setter: - (void)setHasUserDateTime:(BOOL)time;	// 0x2193dd
// converted property getter: - (BOOL)hasSlideNumber;	// 0x2193ed
// converted property setter: - (void)setHasSlideNumber:(BOOL)number;	// 0x2193fd
// converted property getter: - (BOOL)hasHeader;	// 0x21940d
// converted property setter: - (void)setHasHeader:(BOOL)header;	// 0x21941d
// converted property getter: - (BOOL)hasFooter;	// 0x21942d
// converted property setter: - (void)setHasFooter:(BOOL)footer;	// 0x21943d
// converted property getter: - (id)userDateTime;	// 0x21944d
// converted property setter: - (void)setUserDateTime:(id)time;	// 0x21947d
// converted property getter: - (id)header;	// 0x21945d
// converted property setter: - (void)setHeader:(id)header;	// 0x2194bd
// converted property getter: - (id)footer;	// 0x21946d
// converted property setter: - (void)setFooter:(id)footer;	// 0x2194fd
@end
