#ifndef PRODUCT_WRAPPER_H
#define PRODUCT_WRAPPER_H

#include "nlohmann/json.hpp"
#include "Product.h"
#include "db_dynamo.h"

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

class Product_wrapper {
public:
	static std::string get_product(const std::string& id_or_uuid);
	static bool delete_product(const std::string& id_or_uuid);
	static bool new_product(const nlohmann::json& json_req);
	static bool update_product(const std::string& id_or_uuid, const nlohmann::json& json_req);
};

#endif