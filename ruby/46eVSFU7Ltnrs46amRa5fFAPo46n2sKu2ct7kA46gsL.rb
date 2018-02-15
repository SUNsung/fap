      https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
    class Bintray
  def self.package(formula_name)
    formula_name.to_s.tr('+', 'x')
  end
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      # True if a {Formula} is being built with {Formula.stable} instead of {Formula.devel} or {Formula.head}. This is the default.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def stable?
    !(head? || devel?)
  end
    
        if !Language::Python.in_sys_path?('python', homebrew_site_packages)
      s = <<-EOS.undent
        Python modules have been installed and Homebrew's site-packages is not
        in your Python sys.path, so you will not be able to import the modules
        this formula installed. If you plan to develop with these modules,
        please run:
      EOS
      s += instructions
    elsif keg.python_pth_files_installed?
      s = <<-EOS.undent
        This formula installed .pth files to Homebrew's site-packages and your
        Python isn't configured to process them, so you will not be able to
        import the modules this formula installed. If you plan to develop
        with these modules, please run:
      EOS
      s += instructions
    end
    s
  end
    
            if Pathname::BOTTLE_EXTNAME_RX === file.to_s
          version = bottle_resolve_version(file) rescue file.version
        else
          version = file.version
        end
        next unless version
        next unless (name = file.basename.to_s[/(.*)-(?:#{Regexp.escape(version)})/, 1])
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
          next unless dst.extname == '.rb'
      next unless paths.any? { |p| tap.formula_file?(p) }
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_tag_exists(tag: '1.2.0')
          end').runner.execute(:test)
        end
      end
    
        log = StringIO.new
    @dry_run_started_at = Time.zone.now
    @dry_run_logger = Logger.new(log).tap { |logger|
      logger.formatter = proc { |severity, datetime, progname, message|
        elapsed_time = '%02d:%02d:%02d' % 2.times.inject([datetime - @dry_run_started_at]) { |(x, *xs)|
          [*x.divmod(60), *xs]
        }
    }
    }
    
        def setup!(scheduler, mutex)
      @scheduler = scheduler
      @mutex = mutex
      setup if respond_to?(:setup)
    end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def test_help
    help = @opt.help
    assert_match(/--enable-foo/, help)
    assert_match(/--disable-bar/, help)
    assert_match(/--with-zot/, help)
    assert_not_match(/--disable-foo/, help)
    assert_not_match(/--enable-bar/, help)
    assert_not_match(/--without/, help)
  end
end

    
    
    
      def test_strptime_s_z
    t = Time.strptime('0 +0100', '%s %z')
    assert_equal(0, t.to_r)
    assert_equal(3600, t.utc_offset)
    t = Time.strptime('0 UTC', '%s %z')
    assert_equal(0, t.to_r)
    assert_equal(0, t.utc_offset)
    assert_equal(true, t.utc?)
  end
    
        # Read a REG_SZ(read_s), REG_DWORD(read_i), or REG_BINARY(read_bin)
    # registry value named name.
    #
    # If the values type does not match, TypeError is raised.
    def read_s(name)
      read(name, REG_SZ)[1]
    end
    
      self.each_test do |test, i|
    define_method('test_#{i}') do ||
      Tempfile.create('iotest.dat') do |fh|
        fh.print test[1]
        fh.rewind
        assert_equal(test[2], fh.scanf(test[0]))
      end
    end
  end
end

    
        assert_raise(IPAddr::InvalidAddressError) { IPAddr.new('192.168.0.256') }
    assert_raise(IPAddr::InvalidAddressError) { IPAddr.new('192.168.0.011') }
    assert_raise(IPAddr::InvalidAddressError) { IPAddr.new('fe80::1%fxp0') }
    assert_raise(IPAddr::InvalidAddressError) { IPAddr.new('[192.168.1.2]/120') }
    assert_raise(IPAddr::InvalidAddressError) { IPAddr.new('[2001:200:300::]\nINVALID') }
    assert_raise(IPAddr::InvalidAddressError) { IPAddr.new('192.168.0.1/32\nINVALID') }
    assert_raise(IPAddr::InvalidPrefixError) { IPAddr.new('::1/255.255.255.0') }
    assert_raise(IPAddr::InvalidPrefixError) { IPAddr.new('::1/129') }
    assert_raise(IPAddr::InvalidPrefixError) { IPAddr.new('192.168.0.1/33') }
    assert_raise(IPAddr::InvalidPrefixError) { IPAddr.new('192.168.0.1/255.255.255.1') }
    assert_raise(IPAddr::AddressFamilyError) { IPAddr.new(1) }
    assert_raise(IPAddr::AddressFamilyError) { IPAddr.new('::ffff:192.168.1.2/120', Socket::AF_INET) }
  end
    
        ELEMENT_INFOS = [['author'],
                     ['block', :yes_other],
                     ['explicit', :explicit_clean_other],
                     ['keywords', :csv],
                     ['subtitle'],
                     ['summary']]
  end