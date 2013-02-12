/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEORoute, MKDate, MKRouteStep, NSArray, NSDictionary, NSMutableArray, NSString;

@interface MKRoute : NSObject <MKOverlay> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _boundingMapRect;
    } _coordinate;
    float _coordinateOffset;
    BOOL _displaysDistanceInMetric;
    double *_distancesFromEnd;
    double *_distancesFromStart;
    MKRouteStep *_highlightedStep;
    NSString *_key;
    struct { double x1; double x2; } *_mapPoints;
    int _mode;
    int _orientation;
    unsigned int _pointCount;
    } _preferredCoordinate;
    int _preferredOrientation;
    MKRouteStep *_previousStep;
    GEORoute *_route;
    NSMutableArray *_segmentBoundingPolygons;
    unsigned int _simplifiedPointCount;
    unsigned int *_simplifiedPointIndexes;
    struct { double x1; double x2; } *_simplifiedPoints;
    NSMutableArray *_simplifiedSteps;
    MKRouteStep *_step;
    NSMutableArray *_steps;
    } _uniqueRange;
    NSArray *_viaWaypoints;
}

@property(readonly) NSString * abbreviatedTravelTime;
@property(readonly) NSString * abbreviatedTravelTimeWithTraffic;
@property(readonly) MKDate * arrivalDate;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property struct { double x1; double x2; } coordinate;
@property float coordinateOffset;
@property(readonly) NSString * cost;
@property(readonly) MKDate * departureDate;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) BOOL displaysDistanceInMetric;
@property(readonly) double* distancesFromEnd;
@property(readonly) double* distancesFromStart;
@property(readonly) int durationSeconds;
@property(readonly) struct { double x1; double x2; } endCoordinate;
@property(readonly) NSString * expandedDistance;
@property(readonly) NSString * expandedTravelTime;
@property(readonly) NSString * expandedTravelTimeWithTraffic;
@property(readonly) MKRouteStep * firstMiddleStep;
@property(readonly) BOOL hasTraffic;
@property(retain) MKRouteStep * highlightedStep;
@property(readonly) BOOL isComplete;
@property(readonly) NSString * key;
@property(readonly) MKRouteStep * lastMiddleStep;
@property(readonly) struct { double x1; double x2; }* mapPoints;
@property(readonly) struct { double x1; double x2; } midPoint;
@property(readonly) int mode;
@property(readonly) NSString * name;
@property int orientation;
@property(readonly) unsigned int pointCount;
@property(readonly) struct { double x1; double x2; }* points;
@property struct { double x1; double x2; } preferredCoordinate;
@property int preferredOrientation;
@property(readonly) MKRouteStep * previousStep;
@property(readonly) unsigned int simplifiedPointCount;
@property(readonly) unsigned int* simplifiedPointIndexes;
@property(readonly) struct { double x1; double x2; }* simplifiedPoints;
@property(readonly) unsigned int simplifiedSegmentCount;
@property(readonly) NSArray * simplifiedSteps;
@property(readonly) struct { double x1; double x2; } startCoordinate;
@property(retain) MKRouteStep * step;
@property(readonly) NSArray * steps;
@property(readonly) NSString * subtitle;
@property(readonly) NSString * title;
@property struct _NSRange { unsigned int x1; unsigned int x2; } uniqueRange;
@property(retain) NSArray * viaWaypoints;

+ (id)_nameForMode:(int)arg1;

- (id)GEORoute;
- (void)_createSteps;
- (BOOL)_createTransitStepsWithEndInstructions:(id)arg1 forResponse:(id)arg2;
- (id)_initWithResponse:(id)arg1 routeIndex:(unsigned int)arg2 startInstructions:(id)arg3 endInstructions:(id)arg4;
- (id)_timeForSeconds:(unsigned int)arg1 withTraffic:(BOOL)arg2 abbreviated:(BOOL)arg3;
- (id)abbreviatedTravelTime;
- (id)abbreviatedTravelTimeForInterval:(int)arg1;
- (id)abbreviatedTravelTimeWithTraffic;
- (id)arrivalDate;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (id)boundingPolygonForSimplifiedSegmentIndex:(unsigned int)arg1;
- (id)boundingPolygonForStep:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForStep:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (float)coordinateOffset;
- (id)cost;
- (void)dealloc;
- (id)departureDate;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)displaysDistanceInMetric;
- (double*)distancesFromEnd;
- (double*)distancesFromStart;
- (int)durationSeconds;
- (struct { double x1; double x2; })endCoordinate;
- (id)expandedDistance;
- (id)expandedTravelTime;
- (id)expandedTravelTimeWithTraffic;
- (id)firstMiddleStep;
- (BOOL)hasTraffic;
- (id)highlightedStep;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isComplete;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)lastMiddleStep;
- (struct { double x1; double x2; }*)mapPoints;
- (struct { double x1; double x2; })midPoint;
- (int)mode;
- (id)name;
- (int)orientation;
- (unsigned int)pointCount;
- (struct { double x1; double x2; }*)points;
- (struct { double x1; double x2; })preferredCoordinate;
- (int)preferredOrientation;
- (id)previousStep;
- (void)resetStep;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCoordinateOffset:(float)arg1;
- (void)setHighlightedStep:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPreferredCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPreferredOrientation:(int)arg1;
- (void)setStep:(id)arg1;
- (void)setUniqueRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setViaWaypoints:(id)arg1;
- (double)shortestMapPointDistanceToMapPoint:(struct { double x1; double x2; })arg1;
- (unsigned int)simplifiedPointCount;
- (unsigned int*)simplifiedPointIndexes;
- (struct { double x1; double x2; }*)simplifiedPoints;
- (unsigned int)simplifiedSegmentCount;
- (id)simplifiedSteps;
- (struct { double x1; double x2; })startCoordinate;
- (id)step;
- (id)steps;
- (id)title;
- (struct _NSRange { unsigned int x1; unsigned int x2; })uniqueRange;
- (id)viaWaypoints;

@end