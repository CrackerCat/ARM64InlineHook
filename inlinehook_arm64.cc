#include "inlinehook_arm64.h"


		
		Inlinehook::Inlinehook(void* hook_addr_, void* new_address_, void** orig_addr_)
		{
			using namespace std;
			
			this->hook_addr = hook_addr_;
			this->orig_addr = orig_addr_;
			this->new_addr = new_address_;
			this->hook_start();
			
		}
		void Inlinehook::hook_start()
		{
			using namespace std;
			cout<<"hook start!"<<endl;
			this->build = wfcpc::arm64::BuildCode(this->hook_addr, this->new_addr, this->orig_addr);
			this->build.hook_start();
		}

