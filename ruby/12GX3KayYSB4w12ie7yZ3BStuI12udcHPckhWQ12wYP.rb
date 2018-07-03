
        
          def test_capture2e_stdin_data_io
    IO.pipe {|r, w|
      w.write 'i'
      w.close
      oe, s = Open3.capture2e(RUBY, '-e', 'i=STDIN.read; print i+'o'; STDOUT.flush; STDERR.print i+'e'', :stdin_data=>r)
      assert_equal('ioie', oe)
      assert(s.success?)
    }
  end
    
    def grammar(f, out)
  while line = f.gets
    case line
    when %r</\*% *ripper(?:\[(.*?)\])?: *(.*?) *%\*/>
      out << DSL.new($2, ($1 || '').split(',')).generate << $/
    when %r</\*%%%\*/>
      out << '#if 0' << $/
    when %r</\*%>
      out << '#endif' << $/
    when %r<%\*/>
      out << $/
    when /\A%%/
      out << '%%' << $/
      return
    else
      out << line
    end
  end
end
    
      it 'returns result of then-body evaluation if expression is true' do
    if true
      123
    end.should == 123
  end
    
      def assert_constant_reassignment_toplevel(preset, op, expected, err = [], bug = '[Bug #5449]')
    [
     ['p ', ''],                # no-pop
     ['', 'p ::Bar'],           # pop
    ].each do |p1, p2|
      src = <<-EOM.gsub(/^\s*\n/, '')
      #{'Bar = ' + preset if preset}
      class Foo
        #{p1}::Bar #{op}= 42
        #{p2}
      end
      EOM
      msg = '\# #{bug}\n#{src}'
      assert_valid_syntax(src, caller_locations(1, 1)[0].path, msg)
      assert_in_out_err([], src, expected, err, msg)
    end
  end
    
        # test4; recursion
    set2 = Set[]
    set1 = Set[1, set2]
    set2.add(set1)
    
      Ruby = Struct.new(:version, :platform)
    
        def replace_asset_url(rule, type)
      replace_all rule, /url\((.*?)\)/, 'url(if($bootstrap-sass-asset-helper, twbs-#{type}-path(\\1), \\1))'
    end
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
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

    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
          concat(before_string_or_interp, concat(mid_string_or_interp, after_string_or_interp))
    end