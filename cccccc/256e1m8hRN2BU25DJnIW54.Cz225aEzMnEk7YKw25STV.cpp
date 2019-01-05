void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    // Get the Java Class style full name of a message.
string ClassNameResolver::GetJavaClassFullName(
    const string& name_without_package,
    const FileDescriptor* file,
    bool immutable) {
  string result;
  if (MultipleJavaFiles(file, immutable)) {
    result = FileJavaPackage(file, immutable);
    if (!result.empty()) result += '.';
  } else {
    result = GetClassName(file, immutable);
    if (!result.empty()) result += '$';
  }
  result += StringReplace(name_without_package, '.', '$', true);
  return result;
}
    
    
    {
    {
    {    printer->Print(
        '  }\n'
        '  return registry;\n'
        '}\n');
  } else {
    if (file_->dependency_count() > 0) {
      printer->Print(
          '// No extensions in the file and none of the imports (direct or indirect)\n'
          '// defined extensions, so no need to generate +extensionRegistry.\n');
    } else {
      printer->Print(
          '// No extensions in the file and no imports, so no need to generate\n'
          '// +extensionRegistry.\n');
    }
  }
    
    
    {  string comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    comments = BuildCommentsString(location, true);
  } else {
    comments = '';
  }
  variables_['comments'] = comments;
}
    
    
    {  void DoReads(int n);
};
    
    namespace leveldb {
    }
    
      fname = CurrentFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kCurrentFile, type);
    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
    
    {  // No copying allowed
  Writer(const Writer&);
  void operator=(const Writer&);
};
    
    
    {  Status status = OpenWithStatus();
  ASSERT_TRUE(status.IsCorruption());
}
    
            void AllocateSmoothedGradients(const std::vector<Parameter>& parameters, size_t factor, size_t fp16Factor = 1);
    
        std::shared_ptr<MatrixBase> NDArrayView::GetWritableMatrixBase(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/)
    {
        switch (m_dataType)
        {
        case DataType::Float:
            return GetMatrixImpl<float>(GetWritableTensorView<float>(), rowColSplitPoint);
        case DataType::Double:
            return GetMatrixImpl<double>(GetWritableTensorView<double>(), rowColSplitPoint);
        case DataType::Float16:
            return GetMatrixImpl<half>(GetWritableTensorView<half>(), rowColSplitPoint);
        case DataType::Int8:
            return GetMatrixImpl<char>(GetWritableTensorView<char>(), rowColSplitPoint);
        case DataType::Int16:
            return GetMatrixImpl<short>(GetWritableTensorView<short>(), rowColSplitPoint);
        default:
            LogicError('Unknown m_dataType %d', (int)m_dataType);
        }
        return nullptr;
    }
    
        private:
        bool ShouldWriteUpdate(size_t update) const
        {
            if (m_frequency == 0)
            {
                // Geometric schedule - write at every 2^(i) steps, with i = 1, 2, 3, ...
                return ((update + 1) & update) == 0;
            }
    }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
    
    {
    {            if (m_unpackedShape != m_data->Shape())
                LogicError('The computed unpacked shape '%S' of the PackedValue object does not match the actual Data NDArrayView's shape '%S' after unpacking.',
                           m_unpackedShape.AsString().c_str(), m_data->Shape().AsString().c_str());
        }
    }
    
            bool IsPacked() const { return m_isPacked; }
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }
    
            // also 'edit' all nodes that have updated *inputs*
        // All nodes that take inputs that have been edited must have their inputs updated.
        // Since we do not update the model in-place, we must also create replacements for these.
        // That is achieved by recursively including all parents of edits into the set of edits.
        let parents = net.CreateParentsMap();
        deque<ComputationNodeBasePtr> workList; // work list for recursion
        for (let& replacement : replacements)
            workList.push_back(replacement.first);
        while (!workList.empty())
        {
            let node = workList.front();
            workList.pop_front();
            // loop over the node's parents
            for (let& parent : parents.find(node)->second)
            {
                // 'edit' (clone) the parent if not yet
                if (replacements.find(parent) != replacements.end())
                    continue; // already a known replacement
                // we must 'edit' the parent since it depends on a replaced input
                replacements[parent] = parent->Duplicate();
                // and put this parent into the workList, so that we will gets its parent in turn, etc.
                workList.push_back(parent);
#if 0 //def _DEBUG
                fprintf(stderr, '\t%ls = %ls() --> relink %ls\n', parent->NodeName().c_str(), parent->OperationName().c_str(), replacements[parent]->NodeName().c_str());
#endif
            }
        }
        if (TraceLevel() > 0)
            fprintf(stderr, 'Edit: %d out of %d nodes were either edited or need to be relinked.\n', (int)replacements.size(), (int)net.GetTotalNumberOfNodes());
        // Now the keys of replacements[] define the set of all nodes that must be relinked.
    
            if (modelVersion >= CNTK_MODEL_VERSION_8)
        { 
            unsigned int nrAxes;
            fstream >> nrAxes;
            if (nrAxes == 1)
                fstream >> m_dynamicAxisNodeName;
            else if (nrAxes > 1)
                RuntimeError('Input node: This version only supports a single dynamic axis. Please update your bits.');
        }
        else
            m_dynamicAxisNodeName = L''; // Use default
    
    void DHTReplaceNodeTask::onTimeout(const std::shared_ptr<DHTNode>& node)
{
  ++numRetry_;
  if (numRetry_ >= MAX_RETRY) {
    A2_LOG_INFO(fmt('ReplaceNode: Ping failed %d times. Replace %s with %s.',
                    numRetry_, node->toString().c_str(),
                    newNode_->toString().c_str()));
    node->markBad();
    bucket_->addNode(newNode_);
    setFinished(true);
  }
  else {
    A2_LOG_INFO(fmt('ReplaceNode: Ping reply timeout from %s. Try once more.',
                    node->toString().c_str()));
    sendMessage();
  }
}
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    #include 'common.h'
    
        receiver->setMessageFactory(factory.get());
    receiver->setRoutingTable(routingTable.get());
    
      ~DHTSetup();
    
    #include <vector>
#include <deque>
#include <memory>
    
      bool validateToken(const std::string& token, const unsigned char* infoHash,
                     const std::string& ipaddr, uint16_t port) const;
    
    #include <cstring>
#include <cstdlib>