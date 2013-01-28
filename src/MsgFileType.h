/*
 * Copyright 2012-2013 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBFALLTERGEIST_MSGFILETYPE_H
#define LIBFALLTERGEIST_MSGFILETYPE_H

#include <vector>

namespace libfalltergeist
{
class DatFileItem;
class MsgMessage;

class MsgFileType
{
protected:
    DatFileItem * _datFileItem;
    std::vector<MsgMessage *> * _messages;

public:
    MsgFileType(DatFileItem * datFileItem);
    ~MsgFileType();

    void open();

    DatFileItem * datFileItem();

    std::vector<MsgMessage *> * messages();

    MsgMessage * message(unsigned int number);

};

}
#endif // LIBFALLTERGEIST_MSGFILETYPE_H