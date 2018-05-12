    A binary installer is available:
      https://www.haskell.org/platform/mac.html
    EOS
  when 'mysqldump-secure' then <<-EOS.undent
    The creator of mysqldump-secure tried to game our popularity metrics.
    EOS
  when 'ngrok' then <<-EOS.undent
    Upstream sunsetted 1.x in March 2016 and 2.x is not open-source.
    
    def bottle_tag
  if MacOS.version >= :lion
    MacOS.cat
  elsif MacOS.version == :snow_leopard
    Hardware::CPU.is_64_bit? ? :snow_leopard : :snow_leopard_32
  else
    # Return, e.g., :tiger_g3, :leopard_g5_64, :leopard_64 (which is Intel)
    if Hardware::CPU.type == :ppc
      tag = '#{MacOS.cat}_#{Hardware::CPU.family}'.to_sym
    else
      tag = MacOS.cat
    end
    MacOS.prefer_64_bit? ? '#{tag}_64'.to_sym : tag
  end
end
    
      def <<(o)
    @settings << o
    self
  end
    
        puts 'Your system is ready to brew.' unless Homebrew.failed?
  end
end

    
      def print_remaining_files(files, root, other = '')
    case files.length
    when 0
      # noop
    when 1
      puts files
    else
      puts '#{root}/ (#{files.length} #{other}files)'
    end
  end
end

    
      describe :split_keywords do
    context 'only commas' do
      let(:keywords) { 'One,Two, Three, Four Token,' }
    
          # Run a certain action
      def trigger(task: nil, flags: nil, serial: nil, print_command: true, print_command_output: true)
        android_serial = (serial != '') ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, escaped_gradle_path, task, flags].compact.join(' ')
        Action.sh(command, print_command: print_command, print_command_output: print_command_output)
      end
    
          it 'returns the new version as return value' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
        attr_reader :filters
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
      def test_strftime_invalid_modifier
    t2000 = get_t2000
    t = t2000.getlocal('+09:00')
    assert_equal('%:y', t.strftime('%:y'), 'invalid conversion after : modifier')
    assert_equal('%:0z', t.strftime('%:0z'), 'flag after : modifier')
    assert_equal('%:10z', t.strftime('%:10z'), 'prec after : modifier')
    assert_equal('%Ob', t.strftime('%Ob'), 'invalid conversion after locale modifier')
    assert_equal('%Eb', t.strftime('%Eb'), 'invalid conversion after locale modifier')
    assert_equal('%O0y', t.strftime('%O0y'), 'flag after locale modifier')
    assert_equal('%E0y', t.strftime('%E0y'), 'flag after locale modifier')
    assert_equal('%O10y', t.strftime('%O10y'), 'prec after locale modifier')
    assert_equal('%E10y', t.strftime('%E10y'), 'prec after locale modifier')
  end
    
      it 'decodes the remaining floats when passed the '*' modifier' do
    array = '@9\x99\x9a?\xb333A\x0333'.unpack(unpack_format('*'))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end
    
      class SubclassX < Struct
  end
    
      def self.critical_thread1
    Thread.critical = true
    Thread.current.key?(:thread_specs).should == false
  end
    
      with_feature :fiber do
    it 'kills the entire thread when a fiber is active' do
      t = Thread.new do
        Fiber.new do
          sleep
        end.resume
        ScratchPad.record :fiber_resumed
      end
      Thread.pass while t.status and t.status != 'sleep'
      t.send(@method)
      t.join
      ScratchPad.recorded.should == nil
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

    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end