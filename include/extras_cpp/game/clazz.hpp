/**
 * @file ChessGame.hpp
 * @author Perry Anderson (perry@exparx.com)
 * @brief Sample Header file
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright (C) November 22, 2021 EXPARX INCORPORATED
 *
 */

#ifndef _EXTRAS_CPP_CHESSGAME_CLAZZ_HPP
#define _EXTRAS_CPP_CHESSGAME_CLAZZ_HPP

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
#include <extras_cpp/game/interface.hpp>

namespace extras {
    namespace cpp {
        namespace game
        {

            /**
             * @brief ChessGame
             *
             */
            concrete class ChessGame implements Interface
            {

                int _x = 0, _y = 0;

            public:

                /**
                 * construct ChessGame
                 */
                ChessGame(int x, int y);

                /**
                 * @brief moves()
                 * @return all the chess moves of the given chess game
                 */
                virtual void moves() const override;
                virtual bool exists() const override;
                virtual bool piece(int row, int col) const override;
                virtual bool zone(int row, int col) const override;

            };

        }
    } // end namespace 
}

#endif // _EXTRAS_CPP_CHESSGAME_CLAZZ_HPP
