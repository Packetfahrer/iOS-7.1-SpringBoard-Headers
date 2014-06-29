/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBPolygon : XXUnknownSuperclass {
	int m_pointCount;
	CGPoint m_points[5];
	unsigned m_pathIDs[5];
	float m_weights[5];
	CGPoint m_centroid;
	CGPoint m_weightedCentroid;
	unsigned m_baseLeftVertex;
	unsigned m_bottomRightVertex;
}
@property(assign, nonatomic) CGPoint centroid;
@property(readonly, assign, nonatomic) BOOL isLeftHanded;
@property(readonly, assign, nonatomic) int pointCount;
@property(assign, nonatomic) CGPoint weightedCentroid;
+ (BOOL)candidate:(id)candidate matchesTemplate:(id)aTemplate transforms:(int)transforms acceptFactor:(float)factor;
- (void)addPoint:(CGPoint)point;
- (void)addPoint:(CGPoint)point pathIndex:(unsigned)index;
- (float)baseOrientation;
- (void)beginPointUpdate;
- (CGPoint)calculateCentroid;
- (CGPoint)calculateWeightedCentroid;
- (void)clear;
- (void)commonInit;
- (void)endPointUpdate;
- (float)findLongestOutsideEdge;
- (void)flipHorizontally;
- (float)height;
- (void)makeLike:(id)like;
- (float)meanFingertipRowAngle;
- (float)meanRadius;
- (void)rotate:(float)rotate;
- (void)scale:(float)scale;
- (void)sortAlongOutsideEdge;
- (unsigned)thumbIndex;
- (float)weightAtIndex:(int)index;
- (float)width;
@end

