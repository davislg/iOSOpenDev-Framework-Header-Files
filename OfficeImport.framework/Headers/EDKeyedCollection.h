/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDKeyedCollection.h>
#import <OfficeImport/EDCollection.h>

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection {
@private
	TSUPointerKeyDictionary *mMap;	// 8 = 0x8
}
- (void)dealloc;	// 0x1114f5
- (id)copyWithZone:(NSZone *)zone;	// 0x1f8fdd
- (unsigned)addObject:(id)object;	// 0xd8815
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0xe4ef1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x250209
- (void)removeObjectAtIndex:(unsigned)index;	// 0x250199
- (void)removeAllObjects;	// 0x250145
- (id)objectWithKey:(int)key;	// 0xfd955
@end

@interface EDKeyedCollection (Private)
- (bool)isObjectInMap:(id)map;	// 0x2500c5
- (void)insertIntoMap:(id)map;	// 0xd88e5
- (void)removeFromMap:(id)map;	// 0x250101
- (bool)isOverwritingKeyOK;	// 0x2500c1
@end
