#include "codes_arm64.h"
namespace wfcpc
{
	namespace arm64
	{
		Codes::Codes(int size_)
		{
			this->size = size_;
			this->code =(uint8_t*)malloc(sizeof(uint8_t)*size_) ;//new uint8_t(size_);
			this->code_address=(void*)this->code;
		}
		Codes::Codes()
		{}
		void Codes::emit(uint32_t c)
		{
			// using namespace std;
			// cout<<"got uint32_t ins!"<<endl;
			// cout<<setw(2)<<setfill('0')<<hex<<(uint64_t)c<<endl;
			memcpy(this->code+this->position, &c, sizeof(c));
			this->position += 4;
			// cout<<"now codes"<<endl;
			// for(int i=0;i<this->size;i++)
			// {
			// 	cout<<setw(2)<<setfill('0')<<hex<<(uint64_t)this->code[i]<<" ";
			// }
			// cout<<endl;
			// cout<<"----------end---------"<<endl;
		}
		void Codes::emit(uint64_t c)
		{
			memcpy(this->code + this->position, &c, sizeof(c));
			this->position += 8;
		}
		void Codes::show_code_addr()
		{
			using namespace std;
			cout<<hex<<(uint64_t)(void *)this->code<<" ";

			
		}
	}
}