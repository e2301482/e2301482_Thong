/*
#pragma comment(lib, "libcurl.lib")
#include <stdio.h>
#include <curl/curl.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    CURL* req = curl_easy_init();
    CURLcode res;
    if (req) {
        curl_easy_setopt(req, CURLOPT_URL, "http://www.cc.puv.fi/~gc/chinese/chinese/index.html");
        curl_easy_setopt(req, CURLOPT_FOLLOWLOCATION, 1L);
        res = curl_easy_perform(req);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_operation() failed : %s\n",
                curl_easy_strerror(res));
        }
    }
    curl_easy_cleanup(req);

    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>
#include "appdev.h"

int main(void)
{
    CURL* curl;
    CURLcode res;
    char poststring[200], name[100], proj[100];
    /*
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your project: ");
    scanf("%s", proj);
    */
    
    combo c = minmax();
    
    //sprintf(poststring, "name=%s&project=%s", name, proj);
    sprintf(poststring, "min=%d&max=%d", c.min, c.max);
    
    curl = curl_easy_init();
    if (curl) {
        //curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~gc/echo.php");
        //curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=daniel&project=curl");
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2301482/echo.php");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststring);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}