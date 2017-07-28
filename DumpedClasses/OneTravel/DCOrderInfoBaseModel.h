//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCComplainInfoModel<Optional>, DCInviteConfigModel<Optional>, DCPriceDisplayDetailModel<Optional>, NSArray<DCColorText><Optional>, NSArray<DCTimeDescInfoModel><Optional>, NSString<Optional>;

@interface DCOrderInfoBaseModel : TRBaseModel
{
    NSString<Optional> *_carpool_id;
    NSString<Optional> *_order_id;
    NSString<Optional> *_route_id;
    NSString<Optional> *_status_txt;
    NSString<Optional> *_status_desc_color;
    NSString<Optional> *_iscan_delete;
    NSString<Optional> *_setup_time;
    NSString<Optional> *_from_lng;
    NSString<Optional> *_from_lat;
    NSString<Optional> *_from_name;
    NSString<Optional> *_from_address;
    NSString<Optional> *_starting_poi_id;
    NSString<Optional> *_dest_poi_id;
    NSString<Optional> *_to_lng;
    NSString<Optional> *_to_lat;
    NSString<Optional> *_to_name;
    NSString<Optional> *_to_address;
    NSString<Optional> *_free;
    NSString<Optional> *_business_area;
    NSString<Optional> *_departure_time;
    NSString<Optional> *_is_carpool;
    NSString<Optional> *_is_carpool_succeed;
    NSString<Optional> *_from_business_area;
    NSString<Optional> *_to_business_area;
    NSString<Optional> *_departure_distance;
    DCPriceDisplayDetailModel<Optional> *_price_display_detail;
    NSArray<DCTimeDescInfoModel><Optional> *_time_desc_info;
    NSString<Optional> *_arrival_distance;
    NSString<Optional> *_date_id;
    NSString<Optional> *_price_carpool;
    NSString<Optional> *_price_carpool_fail;
    NSString<Optional> *_total_price;
    NSString<Optional> *_detail_url;
    DCComplainInfoModel<Optional> *_complain_info;
    NSString<Optional> *_scene_msg;
    NSString<Optional> *_serial;
    NSString<Optional> *_from_area_id;
    NSString<Optional> *_to_area_id;
    NSString<Optional> *_passenger_num;
    DCInviteConfigModel<Optional> *_departure_config;
    NSArray<DCColorText><Optional> *_tags_list;
    NSString<Optional> *_model_type;
    NSString<Optional> *_order_new_status;
}

@property(copy, nonatomic) NSString<Optional> *order_new_status; // @synthesize order_new_status=_order_new_status;
@property(copy, nonatomic) NSString<Optional> *model_type; // @synthesize model_type=_model_type;
@property(copy, nonatomic) NSArray<DCColorText><Optional> *tags_list; // @synthesize tags_list=_tags_list;
@property(retain, nonatomic) DCInviteConfigModel<Optional> *departure_config; // @synthesize departure_config=_departure_config;
@property(copy, nonatomic) NSString<Optional> *passenger_num; // @synthesize passenger_num=_passenger_num;
@property(copy, nonatomic) NSString<Optional> *to_area_id; // @synthesize to_area_id=_to_area_id;
@property(copy, nonatomic) NSString<Optional> *from_area_id; // @synthesize from_area_id=_from_area_id;
@property(copy, nonatomic) NSString<Optional> *serial; // @synthesize serial=_serial;
@property(copy, nonatomic) NSString<Optional> *scene_msg; // @synthesize scene_msg=_scene_msg;
@property(retain, nonatomic) DCComplainInfoModel<Optional> *complain_info; // @synthesize complain_info=_complain_info;
@property(copy, nonatomic) NSString<Optional> *detail_url; // @synthesize detail_url=_detail_url;
@property(copy, nonatomic) NSString<Optional> *total_price; // @synthesize total_price=_total_price;
@property(copy, nonatomic) NSString<Optional> *price_carpool_fail; // @synthesize price_carpool_fail=_price_carpool_fail;
@property(copy, nonatomic) NSString<Optional> *price_carpool; // @synthesize price_carpool=_price_carpool;
@property(copy, nonatomic) NSString<Optional> *date_id; // @synthesize date_id=_date_id;
@property(copy, nonatomic) NSString<Optional> *arrival_distance; // @synthesize arrival_distance=_arrival_distance;
@property(retain, nonatomic) NSArray<DCTimeDescInfoModel><Optional> *time_desc_info; // @synthesize time_desc_info=_time_desc_info;
@property(retain, nonatomic) DCPriceDisplayDetailModel<Optional> *price_display_detail; // @synthesize price_display_detail=_price_display_detail;
@property(copy, nonatomic) NSString<Optional> *departure_distance; // @synthesize departure_distance=_departure_distance;
@property(copy, nonatomic) NSString<Optional> *to_business_area; // @synthesize to_business_area=_to_business_area;
@property(copy, nonatomic) NSString<Optional> *from_business_area; // @synthesize from_business_area=_from_business_area;
@property(copy, nonatomic) NSString<Optional> *is_carpool_succeed; // @synthesize is_carpool_succeed=_is_carpool_succeed;
@property(copy, nonatomic) NSString<Optional> *is_carpool; // @synthesize is_carpool=_is_carpool;
@property(copy, nonatomic) NSString<Optional> *departure_time; // @synthesize departure_time=_departure_time;
@property(copy, nonatomic) NSString<Optional> *business_area; // @synthesize business_area=_business_area;
@property(copy, nonatomic) NSString<Optional> *free; // @synthesize free=_free;
@property(copy, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *to_lat; // @synthesize to_lat=_to_lat;
@property(copy, nonatomic) NSString<Optional> *to_lng; // @synthesize to_lng=_to_lng;
@property(copy, nonatomic) NSString<Optional> *dest_poi_id; // @synthesize dest_poi_id=_dest_poi_id;
@property(copy, nonatomic) NSString<Optional> *starting_poi_id; // @synthesize starting_poi_id=_starting_poi_id;
@property(copy, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(copy, nonatomic) NSString<Optional> *from_lat; // @synthesize from_lat=_from_lat;
@property(copy, nonatomic) NSString<Optional> *from_lng; // @synthesize from_lng=_from_lng;
@property(copy, nonatomic) NSString<Optional> *setup_time; // @synthesize setup_time=_setup_time;
@property(copy, nonatomic) NSString<Optional> *iscan_delete; // @synthesize iscan_delete=_iscan_delete;
@property(copy, nonatomic) NSString<Optional> *status_desc_color; // @synthesize status_desc_color=_status_desc_color;
@property(copy, nonatomic) NSString<Optional> *status_txt; // @synthesize status_txt=_status_txt;
@property(copy, nonatomic) NSString<Optional> *route_id; // @synthesize route_id=_route_id;
@property(copy, nonatomic) NSString<Optional> *order_id; // @synthesize order_id=_order_id;
@property(copy, nonatomic) NSString<Optional> *carpool_id; // @synthesize carpool_id=_carpool_id;
- (void).cxx_destruct;
- (id)originOrderStatus;
- (id)orderLiftStatus;
@property(readonly, nonatomic, getter=orderStatus) long long orderStatus;

@end
