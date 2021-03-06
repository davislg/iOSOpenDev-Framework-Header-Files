/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDProcessor.h>
#import <OfficeImport/CHPValueAxisFormatting.h>
#import <OfficeImport/OfficeImport-Structs.h>


__attribute__((visibility("hidden")))
@interface CHPValueAxisFormatting : EDProcessor {
}
- (bool)isObjectSupported:(id)supported;	// 0x170159
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x175771
@end

@interface CHPValueAxisFormatting (CHDInternal)
- (id)dataPointFormattingInSeriesCollection:(id)seriesCollection;	// 0x175a75
- (id)dataPointFormattingInData:(id)data;	// 0x175b21
- (id)dataPointFormattingInSources:(id)sources;	// 0x1f75c9
- (bool)isPercentageFormattingInContentFormatString:(id)contentFormatString edValue:(EDValue *)value;	// 0x175c01
@end
