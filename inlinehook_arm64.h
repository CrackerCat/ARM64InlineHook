#pragma once
#ifndef INLINEHOOK_ARM64_H_
#define INLINEHOOK_ARM64_H_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include <errno.h>
#include <unistd.h>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <iomanip>

#include "build_code.h"

		class Inlinehook
		{
			
		private: 
			void* hook_addr;
			void* new_addr;
			void** orig_addr;
			uint64_t normal_args[8] = { 0 };
			void hook_start();
			wfcpc::arm64::BuildCode build;
		public:
			Inlinehook(void* hook_addr_,void *new_address_,void** orig_addr_);
			void check();
			
		};




#endif // !INLINEHOOK_ARM64_H_
