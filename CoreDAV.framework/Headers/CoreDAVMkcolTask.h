/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVTask {
	NSSet *_propertiesToSet;	// 120 = 0x78
	BOOL _sendOrder;	// 124 = 0x7c
	int _absoluteOrder;	// 128 = 0x80
	NSURL *_priorOrderedURL;	// 132 = 0x84
}
@property(retain) NSSet *propertiesToSet;	// G=0x20d29; S=0x20d3d; @synthesize=_propertiesToSet
@property(assign, nonatomic) int absoluteOrder;	// G=0x20d61; S=0x20ca9; @synthesize=_absoluteOrder
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x20d71; S=0x20ccd; @synthesize=_priorOrderedURL
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property getter: - (id)priorOrderedURL;	// 0x20d71
// declared property getter: - (int)absoluteOrder;	// 0x20d61
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x20d3d
// declared property getter: - (id)propertiesToSet;	// 0x20d29
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x20ccd
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x20ca9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x20a81
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x209f1
- (id)requestBody;	// 0x207c5
- (id)additionalHeaderValues;	// 0x20655
- (id)httpMethod;	// 0x20649
- (id)description;	// 0x20495
- (void)dealloc;	// 0x20435
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x203dd
- (id)initWithURL:(id)url;	// 0x203c9
@end
