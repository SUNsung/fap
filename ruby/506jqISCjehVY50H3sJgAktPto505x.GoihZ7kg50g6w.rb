
        
          def option_defined?(name)
    @options.include? name
  end
end

    
        puts 'Your system is ready to brew.' unless Homebrew.failed?
  end
end

    
              # Method
          name = node.at_css('.header').content.split.first
    
        ret = set - [2,4,6]
    assert_not_same(set, ret)
    assert_equal(Set[1,3], ret)
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['',          [nil, nil, nil]],
      ['abcde',     [1684234849, nil, nil]],
      ['abcdefg',   [1684234849, nil, nil]],
      ['abcdefgh',  [1684234849, 1751606885, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      it 'ignores spaces between directives' do
    '\x01\x02'.unpack('U U').should == [1, 2]
  end
end

    
        def fonts_path
      File.join assets_path, 'fonts'
    end
    
        process_font_assets
    process_stylesheet_assets
    process_javascript_assets
    store_version
  end
    
        # replace in the top-level selector
    # replace_in_selector('a {a: {a: a} } a {}', /a/, 'b') => 'b {a: {a: a} } b {}'
    def replace_in_selector(css, pattern, sub)
      # scan for selector positions in css
      s        = CharStringScanner.new(css)
      prev_pos = 0
      sel_pos  = []
      while (brace = s.scan_next(RULE_OPEN_BRACE_RE))
        pos = s.pos
        sel_pos << (prev_pos .. pos - 1)
        s.pos    = close_brace_pos(css, s.pos - 1) + 1
        prev_pos = pos
      end
      replace_substrings_at(css, sel_pos) { |s| s.gsub(pattern, sub) }
    end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          spec['version'] = Bootstrap::VERSION
    
        def ensure_stage
      Rake::Task.define_task(:ensure_stage) do
        unless stage_set?
          puts t(:stage_not_set)
          exit 1
        end
      end
    end
    
        it 'retrieves properties for multiple roles as a set' do
      rps = dsl.role_properties(:app, :web)
      expect(rps).to eq(Set[{ hostname: 'example3.com', role: :app }, { hostname: 'example1.com', role: :web, port: 80 }, { hostname: 'example2.com', role: :web, port: 81 }])
    end