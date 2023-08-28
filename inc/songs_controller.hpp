#ifndef SONGS_CONTROLLER_HPP
#define SONGS_CONTROLLER_HPP
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>


namespace m_player{

class SongsController{

public:
SongsController();
~SongsController() = default;
std::vector<std::string> get_songs_urls(const std::vector<std::string>& queries);
std::string get_song_list(const std::string& query);

private:
    web::http::client::http_client m_client;

};

}//namespace m_player

#endif //SONGS_CONTROLLER_HPP