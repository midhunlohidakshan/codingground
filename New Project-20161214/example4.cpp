#include<iostream>
using namespace std;

#define NUM_FM_DEVICES 10

class GlobalFMDeviceClass{
    static GlobalFMDeviceClass *s_instance;
    int m_num_fm_devices_found;
    int  m_device_handle_list[NUM_FM_DEVICES];
    bool m_b_device_with_invalid_slice[NUM_FM_DEVICES];
    mutable int m_curr_fm_device_number;

public:
        GlobalFMDeviceClass() : m_num_fm_devices_found(0), m_curr_fm_device_number(0) {
                for (int i = 0; i < NUM_FM_DEVICES; i++) {
                        cout << "Value of i=" << i << "\n";
                }
        }
};
int main(void)
{
    
    
    
}