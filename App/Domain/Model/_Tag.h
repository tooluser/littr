// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Tag.h instead.

@import CoreData;

extern const struct TagAttributes {
	__unsafe_unretained NSString *tagName;
} TagAttributes;

@interface TagID : NSManagedObjectID {}
@end

@interface _Tag : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) TagID* objectID;

@property (nonatomic, strong) NSString* tagName;

//- (BOOL)validateTagName:(id*)value_ error:(NSError**)error_;

@end

@interface _Tag (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveTagName;
- (void)setPrimitiveTagName:(NSString*)value;

@end
