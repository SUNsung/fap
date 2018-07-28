
        
          [name, full_name]
end
    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
        if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
        raise SEARCH_ERROR_QUEUE.pop unless SEARCH_ERROR_QUEUE.empty?
  end
    
          options[:only_patterns] = [/\Agetting-started\//, /\Alayout\//, /\Acontent\//, /\Acomponents\//, /\Autilities\//, /\Amigration\//]
    end
    
          options[:fix_urls] = ->(url) do
        url.sub! %r{/blob/master/readme.md}i, ''
        url
      end
    end
    
        options[:container] = '.span9'
    
      def test_capture3_stdin_data_io
    IO.pipe {|r, w|
      w.write 'i'
      w.close
      o, e, s = Open3.capture3(RUBY, '-e', 'i=STDIN.read; print i+'o'; STDOUT.flush; STDERR.print i+'e'', :stdin_data=>r)
      assert_equal('io', o)
      assert_equal('ie', e)
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
    
      it 'uses 'main' as self' do
    ruby_exe('puts self', escape: false).chomp.should == 'main'
  end
    
      it 'wraps and unwraps data' do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct(a).should == 1024
  end
    
      it 'adds the directory after directories added by -I' do
    dash_i_dir = tmp('dash_I_include')
    rubylib_dir = tmp('rubylib_include')
    ENV['RUBYLIB'] = @pre + rubylib_dir
    paths = ruby_exe('puts $LOAD_PATH', options: '-I #{dash_i_dir}').lines.map(&:chomp)
    paths.should include(dash_i_dir)
    paths.should include(rubylib_dir)
    paths.index(dash_i_dir).should < paths.index(rubylib_dir)
  end
    
        assert_equal 'some_gem', spec.name
    assert_equal 'this is a summary', spec.summary
  end
    
    describe :string_unpack_16bit_le_unsigned, shared: true do
  it 'decodes a short with most significant bit set as a positive number' do
    '\x00\xff'.unpack(unpack_format()).should == [65280]
  end
end
    
        if test_conf['database']&.present?
      ActiveRecord::Base.establish_connection(:test)
      yield
      ActiveRecord::Base.establish_connection(Rails.env.to_sym)
    end
  end
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description