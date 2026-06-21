// kstuff pause/restore automation disabled — new kstuff does not require pausing.
#include "sm_kstuff.h"

void     sm_kstuff_init(void)                                              {}
void     sm_kstuff_shutdown(void)                                          {}
bool     sm_kstuff_is_supported(void)                                      { return false; }
bool     sm_kstuff_is_enabled(void)                                        { return false; }
bool     sm_kstuff_set_enabled(bool enabled, bool notify_user)             { (void)enabled; (void)notify_user; return false; }
bool     sm_kstuff_game_feature_enabled(void)                              { return false; }
void     sm_kstuff_game_on_exec(pid_t pid, const char *title_id,
                                uint32_t app_id, uint64_t exec_time_us)    { (void)pid; (void)title_id; (void)app_id; (void)exec_time_us; }
void     sm_kstuff_note_app_focus(uint32_t app_id)                        { (void)app_id; }
uint64_t sm_kstuff_game_next_wake_us(uint64_t now_us)                     { (void)now_us; return 0; }
void     sm_kstuff_game_on_exit(pid_t pid)                                 { (void)pid; }
void     sm_kstuff_game_poll(void)                                         {}
void     sm_kstuff_game_shutdown(void)                                     {}
void     sm_kstuff_sleep_enter(void)                                       {}
void     sm_kstuff_sleep_leave(void)                                       {}
void     sm_kstuff_on_config_reload(void)                                  {}
