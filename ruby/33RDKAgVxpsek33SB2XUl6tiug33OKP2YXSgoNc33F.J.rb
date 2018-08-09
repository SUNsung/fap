
        
            version '3' do
      self.release = '3.3.7'
      self.base_url = 'https://getbootstrap.com/docs/3.3/'
      self.root_path = 'getting-started/'
    
        def as_json
      @pages
    end
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          raise Vagrant::Errors::CLIInvalidUsage, help: opts.help.chomp if argv.length != 3
    
        if true then 123; else 456; end.should == 123
  end
    
      def test_hidden_key
    bug6899 = '[ruby-core:47253]'
    foo = 'foor'
    bar = 'bar'
    assert_nothing_raised(NotImplementedError, bug6899) do
      2000.times {eval %[(foo..bar) ? 1 : 2]}
    end
    foo = bar
  end
    
        # This spec is probably system-dependent.
    it 'waits for a child whose process group ID is that of the calling process' do
      pid1 = Process.spawn(ruby_cmd('exit'), pgroup: true)
      pid2 = Process.spawn(ruby_cmd('exit'))
    
      after :each do
    ENV['RUBYLIB'] = @rubylib
  end
    
        @io.write header
    
        assert_equal 'hello', File.read(path)
  end
    
            htdigest = WEBrick::HTTPAuth::Htdigest.new(tmpfile.path)
        users = []
        htdigest.each{|user, pass| users << user }
        assert_equal(2, users.size, log.call)
        assert(users.member?('webrick'), log.call)
        assert(users.member?('foo'), log.call)
    
        assert_in_out_err(%w(-00 -e) + ['p gets, gets'], 'foo\nbar\n\n\n\nbaz\n', %w('foo\nbar\n\n' 'baz\n'), [])
  end
    
          s.delete(IRB::Context) if defined?(IRB::Context)
    
        Thread.new do
      assert_raise(ThreadError) {condvar.wait(mutex)}
    end.join
  end
    
      def self.hangul_comp_one(string)
    length = string.length
    if length>1 and 0 <= (lead =string[0].ord-LBASE) and lead  < LCOUNT and
                    0 <= (vowel=string[1].ord-VBASE) and vowel < VCOUNT
      lead_vowel = SBASE + (lead * VCOUNT + vowel) * TCOUNT
      if length>2 and 0 < (trail=string[2].ord-TBASE) and trail < TCOUNT
        (lead_vowel + trail).chr(Encoding::UTF_8) + string[3..-1]
      else
        lead_vowel.chr(Encoding::UTF_8) + string[2..-1]
      end
    else
      string
    end
  end
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
          def markdown_podfile
        UI::ErrorReport.markdown_podfile
      end
    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC