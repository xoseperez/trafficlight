/*

TRAFFICLIGHT MODULE

Copyright (C) 2018 by Xose Pérez <xose.perez@gmail.com>

*/

// -----------------------------------------------------------------------------
// MAIN
// -----------------------------------------------------------------------------

void tlLoop() {

}

void tlSetup() {

    DEBUG_MSG_P(PSTR("[TRAFFICLIGHT] Setup\n"));

    // Register loop
    espurnaRegisterLoop(tlLoop);

}

// -----------------------------------------------------------------------------
// HOOK
// -----------------------------------------------------------------------------

void extraSetup() {
    tlSetup();
}
