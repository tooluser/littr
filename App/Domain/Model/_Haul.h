// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Haul.h instead.

@import CoreData;

extern const struct HaulAttributes {
	__unsafe_unretained NSString *id;
	__unsafe_unretained NSString *latitude;
	__unsafe_unretained NSString *longitude;
	__unsafe_unretained NSString *photoURL;
	__unsafe_unretained NSString *tagString;
} HaulAttributes;

@interface HaulID : NSManagedObjectID {}
@end

@interface _Haul : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) HaulID* objectID;

@property (nonatomic, strong) NSString* id;

//- (BOOL)validateId:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSDecimalNumber* latitude;

//- (BOOL)validateLatitude:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSDecimalNumber* longitude;

//- (BOOL)validateLongitude:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* photoURL;

//- (BOOL)validatePhotoURL:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* tagString;

//- (BOOL)validateTagString:(id*)value_ error:(NSError**)error_;

@end

@interface _Haul (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSDecimalNumber*)primitiveLatitude;
- (void)setPrimitiveLatitude:(NSDecimalNumber*)value;

- (NSDecimalNumber*)primitiveLongitude;
- (void)setPrimitiveLongitude:(NSDecimalNumber*)value;

- (NSString*)primitivePhotoURL;
- (void)setPrimitivePhotoURL:(NSString*)value;

- (NSString*)primitiveTagString;
- (void)setPrimitiveTagString:(NSString*)value;

@end
