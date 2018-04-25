
        
                expect(result).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['\xff\x00\xff\x00\xff\x00\xff',  [nil, nil, nil]],
      ['\xb8\x1e\x85\xebQ\xb8\xf6?abc', [1.42, nil, nil]],
      ['333333\x07@ffffff\xf6?abcd',    [2.9, 1.4, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      it 'decodes UTF-8 max codepoints' do
    [ ['\xf0\x90\x80\x80', [0x10000]],
      ['\xf3\xbf\xbf\xbf', [0xfffff]],
      ['\xf4\x80\x80\x80', [0x100000]],
      ['\xf4\x8f\xbf\xbf', [0x10ffff]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        # extracts rule immediately after it's parent, and adjust the selector
    # .x { textarea& { ... }}
    # to:
    # .x { ... }
    # textarea.x { ... }
    def extract_nested_rule(file, selector, new_selector = nil)
      matches = []
      # first find the rules, and remove them
      file    = replace_rules(file, '\s*#{selector}', comments: true) { |rule, pos, css|
        new_sel = new_selector || '#{get_selector(rule).gsub(/&/, selector_for_pos(css, pos.begin))}'
        matches << [rule, pos, new_sel]
        indent '// [converter] extracted #{get_selector(rule)} to #{new_sel}'.tr('\n', ' ').squeeze(' '), indent_width(rule)
      }
      raise 'extract_nested_rule: no such selector: #{selector}' if matches.empty?
      # replace rule selector with new_selector
      matches.each do |m|
        m[0].sub! /(#{COMMENT_RE}*)^(\s*).*?(\s*){/m, '\\1\\2#{m[2]}\\3{'
        log_transform selector, m[2]
      end
      replace_substrings_at file,
                            matches.map { |_, pos| close_brace_pos(file, pos.begin, 1) + 1 },
                            matches.map { |rule, _| '\n\n' + unindent(rule) }
    end
    }
    }
    
    
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')
    
    module Jekyll
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)