﻿#pragma once

#include <jwt-cpp/jwt.h>

#include <openssl/sha.h>

#include "config.h"

class Auth {
public:
	std::string username;
	std::string password;

	static std::string hash_password(const std::string& plain_password, const std::string& salt);
	static std::string generate_token(const std::string& username, const std::string& password);
	static bool validate_token(const std::string& token_header);
};
