/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MCContainer.h>

@class NSSet, NSArray, NSString, NSMutableSet, NSRecursiveLock;

@interface MCContainerParallelizer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSRecursiveLock *mPlugsLock;	// 32 = 0x20
	NSArray *mCachedZOrderedPlugs;	// 36 = 0x24
	CGColorRef mBackgroundColor;	// 40 = 0x28
	NSString *mPageIDAtStart;	// 44 = 0x2c
}
@property(assign) CGColorRef backgroundColor;	// G=0xc7dd; S=0xc671; @synthesize=mBackgroundColor
@property(copy) NSString *pageIDAtStart;	// G=0xbf3d; S=0xbf15; @synthesize=mPageIDAtStart
@property(readonly, assign) NSArray *zOrderedPlugs;	// G=0xbf55; 
@property(readonly, assign) NSSet *plugs;	// G=0xc5c1; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0xbe95
- (id)init;	// 0xbdcd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0xcd49
- (void)demolish;	// 0xcb29
- (id)imprint;	// 0xc961
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0xc8a1
// declared property getter: - (CGColorRef)backgroundColor;	// 0xc7dd
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0xc671
// declared property getter: - (id)plugs;	// 0xc5c1
- (unsigned)countOfPlugs;	// 0xc565
- (id)plugForID:(id)anId;	// 0xc425
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0xc225
- (void)removePlug:(id)plug;	// 0xc0c9
- (void)removePlugForID:(id)anId;	// 0xc099
// declared property getter: - (id)zOrderedPlugs;	// 0xbf55
// declared property getter: - (id)pageIDAtStart;	// 0xbf3d
// declared property setter: - (void)setPageIDAtStart:(id)start;	// 0xbf15
@end
