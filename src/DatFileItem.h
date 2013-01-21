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

#ifndef LIBFALLTERGEIST_DATFILEITEM_H
#define LIBFALLTERGEIST_DATFILEITEM_H

namespace libfalltergeist
{
class DatFile;

class DatFileItem
{
protected:
    DatFile * _datFile; // DAT file object
    char * _filename; // filename with path (path/to/file.ext)
    unsigned int _dataOffset; // data offset in the DAT file
    unsigned int _unpackedSize; // unpacked data size
    unsigned int _packedSize; // packed data size
    bool _isCompressed; // is packed?
public:

    char * data; // file data

    DatFileItem(DatFile * datFile);
    ~DatFileItem();

    void setFilename(char * filename);
    char * getFilename();

    void setDataOffset(unsigned int offset);
    unsigned int getDataOffset();

    void setUnpackedSize(unsigned int size);
    unsigned int getUnpackedSize();

    void setPackedSize(unsigned int size);
    unsigned int getPackedSize();

    void setIsCompressed(bool compressed);
    bool isCompressed();
};

}
#endif //LIBFALLTERGEIST_DATFILEITEM_H
