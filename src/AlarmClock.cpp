/* 
 * File:   LynxTimer.cpp
 * Author: Craig Cogdill
 * Created: October 15, 2015 10:45am
 */

//#include "LynxTimer.h"
//#include <thread>
//#include <iostream>

//template<typename Duration, int duration_value> 
//LynxTimer<Duration, duration_value>::LynxTimer() {
//   std::this_thread::sleep_for(Duration(duration_value));
//   std::cout << "Hello world" << std::endl;
   // static_assert(std::chrono::steady_clock::is_steady, "Serious OS/C++ library issues. Steady clock is not steady");
   // FYI:  This would fail  static_assert(std::chrono::high_resolution_clock::is_steady(), "High Resolution Clock is NOT steady on CentOS?!");
//}

// LynxTimer::LynxTimer(const LynxTimer& other): mStart(other.mStart) { 
// }

// /// @return LynxTimer::LynxTimer&  - assignment operator.
// LynxTimer& LynxTimer::operator=(const LynxTimer& rhs) {
//       mStart = rhs.mStart;
//       return *this;
// }

// /// @return the elapsed microseconds since start
// uint64_t LynxTimer::ElapsedUs() const {
//    return std::chrono::duration_cast<microseconds>(clock::now() - mStart).count();
// }

// /// @return the elapsed milliseconds since start
// uint64_t LynxTimer::ElapsedMs() const {
//    return std::chrono::duration_cast<milliseconds>(clock::now() - mStart).count();
// }

// /// @return the elapsed seconds since start
// uint64_t LynxTimer::ElapsedSec() const {
//    return std::chrono::duration_cast<seconds>(clock::now() - mStart).count();
// }
// /**
//  * Resets the start point
//  * @return the updated start point
//  */
// std::chrono::steady_clock::time_point LynxTimer::Restart() {
//    mStart = clock::now();
//    return mStart;
// }

