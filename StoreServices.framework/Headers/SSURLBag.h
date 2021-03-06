/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class NSMutableArray, SSURLBagContext, NSDictionary, SSXPCConnection;

@interface SSURLBag : XXUnknownSuperclass {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	SSURLBagContext *_context;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	double _expirationTime;	// 20 = 0x14
	NSMutableArray *_pendingLookups;	// 28 = 0x1c
}
@property(readonly, assign) SSURLBagContext *URLBagContext;	// G=0x40f49; 
+ (id)URLBagForContext:(id)context;	// 0x40bf9
- (void)_loadWithCompletionBlock:(id)completionBlock;	// 0x41795
- (void)_loadURLBag;	// 0x41405
- (void)_drainPendingLookupsWithError:(id)error;	// 0x41215
- (id)_connection;	// 0x411b5
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x411a5
- (id)valueForKey:(id)key error:(id *)error;	// 0x40f81
// declared property getter: - (id)URLBagContext;	// 0x40f49
- (void)loadValueForKey:(id)key completionBlock:(id)block;	// 0x40e7d
- (void)invalidate;	// 0x40d75
- (void)dealloc;	// 0x40af1
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x40a19
- (id)init;	// 0x409b9
@end
