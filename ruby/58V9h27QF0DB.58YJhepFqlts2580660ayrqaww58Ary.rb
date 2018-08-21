
        
          spec.add_dependency('slack-notifier', '>= 2.0.0', '< 3.0.0') # Slack notifications
  spec.add_dependency('xcodeproj', '>= 1.5.7', '< 2.0.0') # Needed for commit_version_bump action and gym code_signing_mapping
  spec.add_dependency('xcpretty', '~> 0.2.8') # prettify xcodebuild output
  spec.add_dependency('terminal-notifier', '>= 1.6.2', '< 2.0.0') # macOS notifications
  spec.add_dependency('terminal-table', '>= 1.4.5', '< 2.0.0') # Actions documentation
  spec.add_dependency('plist', '>= 3.1.0', '< 4.0.0') # Needed for set_build_number_repository and get_info_plist_value actions
  spec.add_dependency('CFPropertyList', '>= 2.3', '< 4.0.0') # Needed to be able to read binary plist format
  spec.add_dependency('addressable', '>= 2.3', '< 3.0.0') # Support for URI templates
  spec.add_dependency('multipart-post', '~> 2.0.0') # Needed for uploading builds to appetize
  spec.add_dependency('word_wrap', '~> 1.0.0') # to add line breaks for tables with long strings
    
          File.expand_path(current_output_path) # to make sure we commit the change
    end
    
          path = File.join(containing, '#{apk_listing.apk_version_code}.txt')
      UI.message('Writing to #{path}...')
      File.write(path, apk_listing.recent_changes)
    end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'get HG build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
            get_build_number_repository
        end').runner.execute(:test)
    
        i0 = index
    s1, i1 = [], index
    loop do
      if has_terminal?('\G[A-Za-z0-9_-]', true, index)
        r2 = true
        @index += 1
      else
        r2 = nil
      end
      if r2
        s1 << r2
      else
        break
      end
    end
    if s1.empty?
      @index = i1
      r1 = nil
    else
      r1 = instantiate_node(LogStash::Config::AST::Name,input, i1...index, s1)
    end
    if r1
      r0 = r1
    else
      r3 = _nt_string
      if r3
        r0 = r3
      else
        @index = i0
        r0 = nil
      end
    end