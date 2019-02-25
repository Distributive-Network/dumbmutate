//
// Created by Christoffer Wärnbring on 2019-02-24.
//

#ifndef DUMBMUTATE_HTMLEXPORTER_H
#define DUMBMUTATE_HTMLEXPORTER_H
#include <string>
#include <vector>
#include "SourceFile.h"

class HTMLExporter {
public:
	static void WriteHTML(std::string HTMLFileName,
		                     std::vector<std::pair<std::string, SourceFile::MutationResult>> Results);
};


#endif //DUMBMUTATE_HTMLEXPORTER_H
