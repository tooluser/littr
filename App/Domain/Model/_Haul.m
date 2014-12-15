// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Haul.m instead.

#import "_Haul.h"

const struct HaulAttributes HaulAttributes = {
	.id = @"id",
	.latitude = @"latitude",
	.longitude = @"longitude",
	.photoURL = @"photoURL",
	.tagString = @"tagString",
};

@implementation HaulID
@end

@implementation _Haul

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Haul" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Haul";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Haul" inManagedObjectContext:moc_];
}

- (HaulID*)objectID {
	return (HaulID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];

	return keyPaths;
}

@dynamic id;

@dynamic latitude;

@dynamic longitude;

@dynamic photoURL;

@dynamic tagString;

@end

