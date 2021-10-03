#include "pch.h"
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <httplib.h>

extern Logger<stdio_commit> LOG;

void checkUpdate() {
    std::thread t([] {
        httplib::Client cli("https://liteldev.github.io");
        cli.set_connection_timeout(0, 300000);
        auto res = cli.Get("/update/version.json");     
        rapidjson::Document json;
        if (res) {
            json.Parse(res->body.c_str());
            if (json.HasParseError()) {
                LOG("Failed to get updates(1)");
                return;
            }
            auto arr                  = json.GetArray();
            std::string LatestRelease = arr[arr.Size() - 1]["name"].GetString();
            int latestVersionNum      = arr[arr.Size() - 1]["versionNum"].GetInt();
            if (latestVersionNum > LITELOADER_VERSION_NUMBER) {
                std::string content = arr[arr.Size() - 1]["content"].GetString();
                LOG("Found a new version: ", LatestRelease, " ", content);
            } else if (latestVersionNum < LITELOADER_VERSION_NUMBER) {
                LOG("Using preview version: ", LITELOADER_VERSION);
            }
        } else {
            LOG("Failed to get updates(0)");
        }
    });
    t.detach();
}