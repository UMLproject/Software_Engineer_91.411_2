/*
 * pebble pedometer
 * reference: https://github.com/jathusanT/pebble_pedometer
 */

#include <pebble.h>
#include <run.h>

int main(void) {
    handle_init();
    app_event_loop();
    handle_deinit();
}