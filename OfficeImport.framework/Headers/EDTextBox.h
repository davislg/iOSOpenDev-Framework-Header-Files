/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class EDProtection, EDAlignmentInfo, EDString;

__attribute__((visibility("hidden")))
@interface EDTextBox : XXUnknownSuperclass {
@private
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id text;	// G=0x15ef45; S=0x15edb5; converted property
@property(retain) id alignmentInfo;	// G=0x252fe5; S=0x15ecf1; converted property
@property(retain) id protection;	// G=0x252ff5; S=0x15ed6d; converted property
+ (id)textBox;	// 0x15ec09
- (void)dealloc;	// 0x15ef65
// converted property getter: - (id)text;	// 0x15ef45
// converted property setter: - (void)setText:(id)text;	// 0x15edb5
// converted property getter: - (id)alignmentInfo;	// 0x252fe5
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x15ecf1
// converted property getter: - (id)protection;	// 0x252ff5
// converted property setter: - (void)setProtection:(id)protection;	// 0x15ed6d
@end