
        
          it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
      it 'writes each array element on a line when passes an array' do
    lambda {
      $VERBOSE = true
      warn(['line 1', 'line 2'])
    }.should output(nil, 'line 1\nline 2\n')
  end
    
        s = StringIO.new
    SystemConfig.dump_verbose_config s
    # Dummy summary file, asciibetically first, to control display title of gist
    files['# #{f.name} - #{timestamp}.txt'] = { content: brief_build_info(f) }
    files['00.config.out'] = { content: s.string }
    files['00.doctor.out'] = { content: Utils.popen_read('#{HOMEBREW_PREFIX}/bin/brew', 'doctor', err: :out) }
    unless f.core_formula?
      tap = <<~EOS
        Formula: #{f.name}
        Tap: #{f.tap}
        Path: #{f.path}
      EOS
      files['00.tap.out'] = { content: tap }
    end
    
          clear_cache
      super(new_user, new_repo)
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
          attr_reader :key, :default, :options