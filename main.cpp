#include <iostream>
#include <iomanip>
#include <mqtt_client_cpp.hpp>


int main(int, char**){

    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};

    std::cout << std::setprecision(20);
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;




    // MQTT_NS::setup_log();

    // std::uint16_t pid_sub;

    // boost::asio::io_context ioc;
    // auto c = MQTT_NS::make_sync_client(ioc, "192.168.110.13", "1883", MQTT_NS::protocol_version::v3_1_1);
    
    // using packet_id_t = typename std::remove_reference_t<decltype(*c)>::packet_id_t;

    // // Setup client
    // c->set_client_id("cid1");
    // c->set_clean_session(true);
    // c->set_keep_alive_sec(5);

    // c->set_connack_handler(
    //     [&c, &pid_sub]
    //     (bool sp, MQTT_NS::connect_return_code connack_return_code){
    //         std::cout << "Connack handler called" << std::endl;
    //         std::cout << "Session Present: " << std::boolalpha << sp << std::endl;
    //         std::cout << "Connack Return Code: "
    //                   << MQTT_NS::connect_return_code_to_str(connack_return_code) << std::endl;
    //         if (connack_return_code == MQTT_NS::connect_return_code::accepted) {
    //             pid_sub = c->subscribe("mqtt_client_cpp/topic1", MQTT_NS::qos::at_least_once);
    //             // pid_sub2 = c->subscribe(
    //             //     std::vector<std::tuple<MQTT_NS::string_view, MQTT_NS::subscribe_options>>
    //             //     {
    //             //         { "mqtt_client_cpp/topic2_1", MQTT_NS::qos::at_least_once },
    //             //         { "mqtt_client_cpp/topic2_2", MQTT_NS::qos::exactly_once }
    //             //     }
    //             // );
    //         }
    //         return true;
    //     });
    // c->set_suback_handler(
    //     [&]
    //     (packet_id_t packet_id, std::vector<MQTT_NS::suback_return_code> results){
    //         std::cout << "suback received. packet_id: " << packet_id << std::endl;
    //         for (auto const& e : results) {
    //             std::cout << "[client] subscribe result: " << e << std::endl;
    //         }
    //         c->publish("mqtt_client_cpp/topic1", "test1", MQTT_NS::qos::at_least_once);
    //         return true;
    //     });
    // c->set_puback_handler(
    //     [&]
    //     (packet_id_t packet_id){
    //         std::cout << "puback received. packet_id: " << packet_id << std::endl;
    //         c->unsubscribe("mqtt_client_cpp/topic1");
    //         c->disconnect();
    //         return true;
    //     });
    // c->set_unsuback_handler(
    //     [&]
    //     (packet_id_t packet_id){
    //         std::cout << "unsuback received. packet_id: " << packet_id << std::endl;
    //         return true;
    //     });

    // c->connect();

    // ioc.run();
}




$account="VKVYCH_PC\vkvych"
$npipe = "\\.\pipe\docker_engine"                                                                                 
$dInfo = New-Object "System.IO.DirectoryInfo" -ArgumentList $npipe                                               
$dSec = $dInfo.GetAccessControl()                                                                                 
$fullControl =[System.Security.AccessControl.FileSystemRights]::FullControl                                       
$allow =[System.Security.AccessControl.AccessControlType]::Allow                                                  
$rule = New-Object "System.Security.AccessControl.FileSystemAccessRule" -ArgumentList $account,$fullControl,$allow
$dSec.AddAccessRule($rule)                                                                                        
$dInfo.SetAccessControl($dSec)














