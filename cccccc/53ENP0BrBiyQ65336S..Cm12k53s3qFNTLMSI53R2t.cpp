
        
        private:
	QString string_;
	bool valid_ = true;
    
    For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once
    
    // Creates a file with license header and codegen warning.
class CppFile {
public:
	// If 'basepath' is empty the folder containing 'path' will be chosen.
	// File ending with .cpp will be treated as source, otherwise like header.
	CppFile(const QString &path, const ProjectInfo &project);
    }
    
    QString WorkingPath = '.';
    
    
    {
    {} // namespace lang
} // namespace codegen

    
    #include <QtCore/QDir>
#include <QtCore/QFileInfo>
#include 'codegen/common/cpp_file.h'
#include 'codegen/lang/parsed_file.h'
#include 'codegen/lang/generator.h'