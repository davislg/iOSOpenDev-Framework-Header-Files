/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/UTF8Formatter.h>
#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/APFormatter.h>


__attribute__((visibility("hidden")))
@interface UTF8Formatter : APFormatter {
	unsigned _maxByteCount;	// 16 = 0x10
}
@property(assign) unsigned maxByteCount;	// G=0x8b979; S=0x8b969; converted property
+ (id)afpFormatter:(unsigned)formatter;	// 0x8b781
+ (id)utf8FormatterWithMaxByteCount:(unsigned)maxByteCount maxLength:(unsigned)length;	// 0x8b73d
+ (id)utf8Formatter:(unsigned)formatter;	// 0x8b6fd
+ (id)utf8Formatter;	// 0x8b6bd
// converted property getter: - (unsigned)maxByteCount;	// 0x8b979
// converted property setter: - (void)setMaxByteCount:(unsigned)count;	// 0x8b969
- (BOOL)isPartialStringValid:(id)valid newEditingString:(id *)string errorDescription:(id *)description;	// 0x8b8ad
- (id)initWithMaxByteCount:(unsigned)maxByteCount maxLength:(unsigned)length;	// 0x8b81d
@end

@interface UTF8Formatter (private)
+ (id)afpSet;	// 0x8b989
@end
