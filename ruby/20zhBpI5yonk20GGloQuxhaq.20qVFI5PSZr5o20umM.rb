
        
                  new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
        # Public: Read configuration and return merged Hash
    #
    # file - the path to the YAML file to be read in
    #
    # Returns this configuration, overridden by the values in the file
    def read_config_file(file)
      next_config = safe_load_file(file)
      check_config_is_hash!(next_config, file)
      Jekyll.logger.info 'Configuration file:', file
      next_config
    rescue SystemCallError
      if @default_config_file ||= nil
        Jekyll.logger.warn 'Configuration file:', 'none'
        {}
      else
        Jekyll.logger.error 'Fatal:', 'The configuration file '#{file}'
          could not be found.'
        raise LoadError, 'The Configuration file '#{file}' could not be found.'
      end
    end
    
    puts '\nDone.'

    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          if argv.empty? || argv.length > 2
            raise Vagrant::Errors::CLIInvalidUsage,
              help: opts.help.chomp
          end
    
      describe 'RTYPEDATA' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_rdata(a).should == 1024
    end
    
          Process.kill('TERM', pid)
      Process.wait.should == pid
    end
    
      def self.parse_zdump_line(line)
    return nil if /\A\#/ =~ line || /\A\s*\z/ =~ line
    if /\A(\S+)\s+
        \S+\s+(\S+)\s+(\d+)\s+(\d\d):(\d\d):(\d\d)\s+(\d+)\s+UTC?
        \s+=\s+
        \S+\s+(\S+)\s+(\d+)\s+(\d\d):(\d\d):(\d\d)\s+(\d+)\s+\S+
        \s+isdst=\d+\s+gmtoff=(-?\d+)\n
        \z/x !~ line
      raise 'unexpected zdump line: #{line.inspect}'
    end
    tz, u_mon, u_day, u_hour, u_min, u_sec, u_year,
      l_mon, l_day, l_hour, l_min, l_sec, l_year, gmtoff = $~.captures
    u_year = u_year.to_i
    u_mon = MON2NUM[u_mon]
    u_day = u_day.to_i
    u_hour = u_hour.to_i
    u_min = u_min.to_i
    u_sec = u_sec.to_i
    l_year = l_year.to_i
    l_mon = MON2NUM[l_mon]
    l_day = l_day.to_i
    l_hour = l_hour.to_i
    l_min = l_min.to_i
    l_sec = l_sec.to_i
    gmtoff = gmtoff.to_i
    [tz,
     [u_year, u_mon, u_day, u_hour, u_min, u_sec],
     [l_year, l_mon, l_day, l_hour, l_min, l_sec],
     gmtoff]
  end
    
      def test_realpath_taintedness
    Dir.mktmpdir('rubytest-realpath') {|tmpdir|
      dir = File.realpath(tmpdir).untaint
      File.write(File.join(dir, base = 'test.file'), '')
      base.taint
      dir.taint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.untaint
      dir.taint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.taint
      dir.untaint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.untaint
      dir.untaint
      assert_not_predicate(File.realpath(base, dir), :tainted?)
      assert_predicate(Dir.chdir(dir) {File.realpath(base)}, :tainted?)
    }
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['abc',                  [nil, nil, nil]],
      ['\x8f\xc2\xb5?abc',     [1.4199999570846558, nil, nil]],
      ['\x9a\x999@33\xb3?abc', [2.9000000953674316, 1.399999976158142, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
        inp.attributes.keys.each do |ikey|
      if (ikey.downcase == 'value')
        inp[ikey] = ''
        next
      end
    
      self.include_root_in_json = false