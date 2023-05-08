/**
 * @brief the "MIT/X Consortium License", (adapted for EXPARX.COM)
 *
 * Copyright (C) November 22, 2021 EXPARX INCORPORATED
 *
 * Permission is hereby  granted,  free of charge,  to  any  person
 * obtaining a copy of this software and  associated  documentation
 * files   (the  "Software"),  to deal  in   the  Software  without
 * restriction, including  without  limitation the rights  to  use,
 * copy,  modify, merge,  publish,  distribute,  sublicense, and/or
 * sell copies of the  Software, and to permit persons  to whom the
 * Software  is  furnished to  do  so,  subject  to  the  following
 * conditions:
 *
 * (See LICENSE.md for complete details)
 *
 */

#include <iostream>
#include <extras_cpp/game/clazz.hpp>

#include "../../vendor/catch.hpp"

using namespace std;
using namespace extras;
using namespace extras::cpp;

SCENARIO("test game::constructs", "[JIRA-1440]")
{
    /**
     *
     *    test various constructors
     *    with various parameters
     *
     */
    cpp::game::ChessGame game(1, 2);

    REQUIRE_THROWS_AS(
        cpp::game::ChessGame(0, 0), game::EndOfGameReachedException);

}
