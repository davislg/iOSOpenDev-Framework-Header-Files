/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORoute.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NSData;

@interface GEORoute : PBCodable {
	int _type;	// 4 = 0x4
	NSData *_latLngVertices;	// 8 = 0x8
	XXStruct_19EQxD _streetSegmentIDs;	// 12 = 0xc
	NSMutableArray *_steps;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	NSString *_phoneticName;	// 32 = 0x20
	NSString *_transitCost;	// 36 = 0x24
	BOOL _hasDepartureTimestamp;	// 40 = 0x28
	double _departureTimestamp;	// 44 = 0x2c
	BOOL _hasDepartureTimezoneOffset;	// 52 = 0x34
	int _departureTimezoneOffset;	// 56 = 0x38
	BOOL _hasArrivalTimestamp;	// 60 = 0x3c
	double _arrivalTimestamp;	// 64 = 0x40
	BOOL _hasArrivalTimezoneOffset;	// 72 = 0x48
	int _arrivalTimezoneOffset;	// 76 = 0x4c
	BOOL _hasDistance;	// 80 = 0x50
	int _distance;	// 84 = 0x54
	BOOL _hasExpectedTime;	// 88 = 0x58
	int _expectedTime;	// 92 = 0x5c
	BOOL _hasDelayTime;	// 96 = 0x60
	int _delayTime;	// 100 = 0x64
	NSData *_unpackedLatLngVertices;	// 104 = 0x68
}
@property(retain, nonatomic) NSData *unpackedLatLngVertices;	// G=0x1816d; S=0x1817d; @synthesize=_unpackedLatLngVertices
@property(readonly, assign, nonatomic) BOOL hasUnpackedLatLngVertices;	// G=0x17205; 
@property(assign, nonatomic) int delayTime;	// G=0x1815d; S=0x171e1; @synthesize=_delayTime
@property(assign, nonatomic) BOOL hasDelayTime;	// G=0x1813d; S=0x1814d; @synthesize=_hasDelayTime
@property(assign, nonatomic) int expectedTime;	// G=0x1812d; S=0x171bd; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x1810d; S=0x1811d; @synthesize=_hasExpectedTime
@property(assign, nonatomic) int distance;	// G=0x180fd; S=0x17199; @synthesize=_distance
@property(assign, nonatomic) BOOL hasDistance;	// G=0x180dd; S=0x180ed; @synthesize=_hasDistance
@property(assign, nonatomic) int arrivalTimezoneOffset;	// G=0x180cd; S=0x17175; @synthesize=_arrivalTimezoneOffset
@property(assign, nonatomic) BOOL hasArrivalTimezoneOffset;	// G=0x180ad; S=0x180bd; @synthesize=_hasArrivalTimezoneOffset
@property(assign, nonatomic) double arrivalTimestamp;	// G=0x18095; S=0x17149; @synthesize=_arrivalTimestamp
@property(assign, nonatomic) BOOL hasArrivalTimestamp;	// G=0x18075; S=0x18085; @synthesize=_hasArrivalTimestamp
@property(assign, nonatomic) int departureTimezoneOffset;	// G=0x18065; S=0x17125; @synthesize=_departureTimezoneOffset
@property(assign, nonatomic) BOOL hasDepartureTimezoneOffset;	// G=0x18045; S=0x18055; @synthesize=_hasDepartureTimezoneOffset
@property(assign, nonatomic) double departureTimestamp;	// G=0x1802d; S=0x170f9; @synthesize=_departureTimestamp
@property(assign, nonatomic) BOOL hasDepartureTimestamp;	// G=0x1800d; S=0x1801d; @synthesize=_hasDepartureTimestamp
@property(retain, nonatomic) NSString *transitCost;	// G=0x17fd9; S=0x17fe9; @synthesize=_transitCost
@property(readonly, assign, nonatomic) BOOL hasTransitCost;	// G=0x170e1; 
@property(retain, nonatomic) NSString *phoneticName;	// G=0x17fa5; S=0x17fb5; @synthesize=_phoneticName
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x170c9; 
@property(retain, nonatomic) NSString *name;	// G=0x17f71; S=0x17f81; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x170b1; 
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x17f3d; S=0x17f4d; @synthesize=_steps
@property(readonly, assign, nonatomic) long long *streetSegmentIDs;	// G=0x16f11; 
@property(readonly, assign, nonatomic) unsigned streetSegmentIDsCount;	// G=0x16efd; 
@property(retain, nonatomic) NSData *latLngVertices;	// G=0x17f09; S=0x17f19; @synthesize=_latLngVertices
@property(readonly, assign, nonatomic) BOOL hasLatLngVertices;	// G=0x16ee5; 
@property(assign, nonatomic) int type;	// G=0x17ee9; S=0x17ef9; @synthesize=_type
// declared property setter: - (void)setUnpackedLatLngVertices:(id)vertices;	// 0x1817d
// declared property getter: - (id)unpackedLatLngVertices;	// 0x1816d
// declared property getter: - (int)delayTime;	// 0x1815d
// declared property setter: - (void)setHasDelayTime:(BOOL)time;	// 0x1814d
// declared property getter: - (BOOL)hasDelayTime;	// 0x1813d
// declared property getter: - (int)expectedTime;	// 0x1812d
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x1811d
// declared property getter: - (BOOL)hasExpectedTime;	// 0x1810d
// declared property getter: - (int)distance;	// 0x180fd
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x180ed
// declared property getter: - (BOOL)hasDistance;	// 0x180dd
// declared property getter: - (int)arrivalTimezoneOffset;	// 0x180cd
// declared property setter: - (void)setHasArrivalTimezoneOffset:(BOOL)offset;	// 0x180bd
// declared property getter: - (BOOL)hasArrivalTimezoneOffset;	// 0x180ad
// declared property getter: - (double)arrivalTimestamp;	// 0x18095
// declared property setter: - (void)setHasArrivalTimestamp:(BOOL)timestamp;	// 0x18085
// declared property getter: - (BOOL)hasArrivalTimestamp;	// 0x18075
// declared property getter: - (int)departureTimezoneOffset;	// 0x18065
// declared property setter: - (void)setHasDepartureTimezoneOffset:(BOOL)offset;	// 0x18055
// declared property getter: - (BOOL)hasDepartureTimezoneOffset;	// 0x18045
// declared property getter: - (double)departureTimestamp;	// 0x1802d
// declared property setter: - (void)setHasDepartureTimestamp:(BOOL)timestamp;	// 0x1801d
// declared property getter: - (BOOL)hasDepartureTimestamp;	// 0x1800d
// declared property setter: - (void)setTransitCost:(id)cost;	// 0x17fe9
// declared property getter: - (id)transitCost;	// 0x17fd9
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x17fb5
// declared property getter: - (id)phoneticName;	// 0x17fa5
// declared property setter: - (void)setName:(id)name;	// 0x17f81
// declared property getter: - (id)name;	// 0x17f71
// declared property setter: - (void)setSteps:(id)steps;	// 0x17f4d
// declared property getter: - (id)steps;	// 0x17f3d
// declared property setter: - (void)setLatLngVertices:(id)vertices;	// 0x17f19
// declared property getter: - (id)latLngVertices;	// 0x17f09
// declared property setter: - (void)setType:(int)type;	// 0x17ef9
// declared property getter: - (int)type;	// 0x17ee9
- (void)writeTo:(id)to;	// 0x17b3d
- (BOOL)readFrom:(id)from;	// 0x1772d
- (id)dictionaryRepresentation;	// 0x1728d
- (id)description;	// 0x1721d
// declared property getter: - (BOOL)hasUnpackedLatLngVertices;	// 0x17205
// declared property setter: - (void)setDelayTime:(int)time;	// 0x171e1
// declared property setter: - (void)setExpectedTime:(int)time;	// 0x171bd
// declared property setter: - (void)setDistance:(int)distance;	// 0x17199
// declared property setter: - (void)setArrivalTimezoneOffset:(int)offset;	// 0x17175
// declared property setter: - (void)setArrivalTimestamp:(double)timestamp;	// 0x17149
// declared property setter: - (void)setDepartureTimezoneOffset:(int)offset;	// 0x17125
// declared property setter: - (void)setDepartureTimestamp:(double)timestamp;	// 0x170f9
// declared property getter: - (BOOL)hasTransitCost;	// 0x170e1
// declared property getter: - (BOOL)hasPhoneticName;	// 0x170c9
// declared property getter: - (BOOL)hasName;	// 0x170b1
- (id)stepAtIndex:(unsigned)index;	// 0x17091
- (unsigned)stepsCount;	// 0x17071
- (void)addStep:(id)step;	// 0x1700d
- (void)setStreetSegmentIDs:(long long *)ids count:(unsigned)count;	// 0x16ff5
- (long long)streetSegmentIDAtIndex:(unsigned)index;	// 0x16f4d
- (void)addStreetSegmentID:(long long)anId;	// 0x16f35
- (void)clearStreetSegmentIDs;	// 0x16f21
// declared property getter: - (long long *)streetSegmentIDs;	// 0x16f11
// declared property getter: - (unsigned)streetSegmentIDsCount;	// 0x16efd
// declared property getter: - (BOOL)hasLatLngVertices;	// 0x16ee5
- (void)dealloc;	// 0x16e2d
@end

@interface GEORoute (GEORouteExtras)
@property(readonly, assign, getter=isComplete) BOOL complete;	// G=0x1e925; 
@property(readonly, assign) unsigned pointCount;	// G=0x1e8fd; 
@property(readonly, assign) XXStruct_zYrK5D *points;	// G=0x1e8dd; 
- (id)debugDescription;	// 0x1ece1
- (id)description;	// 0x1ec71
- (void)ensureDataAlignment;	// 0x1eb9d
- (void)unpackLatLngVertices;	// 0x1e955
// declared property getter: - (BOOL)isComplete;	// 0x1e925
// declared property getter: - (unsigned)pointCount;	// 0x1e8fd
// declared property getter: - (XXStruct_zYrK5D *)points;	// 0x1e8dd
@end
