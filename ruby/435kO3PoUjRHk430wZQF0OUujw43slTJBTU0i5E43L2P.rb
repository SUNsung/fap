
        
        end

    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          protected
    
        def default_defaults(options)
      @defaults = Hash.new
      @defaults.merge!(options[:defaults]) if options[:defaults]
    end
    
          html_filters.push 'coffeescript/clean_html_v1', 'coffeescript/entries_v1', 'title'
    
        version do
      self.links = {
        home: 'https://haxe.org',
        code: 'https://github.com/HaxeFoundation/haxe'
      }
    
        def parse(response)
      unless response.url == root_url || self.class.version == 'Guide'
        response.body.sub!(/<nav class='devsite-nav-responsive-sidebar.+?<\/nav>/m, '')
        response.body.gsub!(/<li class='devsite-nav-item'>.+?<\/li>/m, '')
      end
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        def add(path, content)
      @pages[path] = content
    end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
    load_extension('typed_data')
    
      it 'adds the directory at the front of $LOAD_PATH' do
    dir = tmp('rubylib/incl_front')
    ENV['RUBYLIB'] = @pre + dir
    paths = ruby_exe('puts $LOAD_PATH').lines.map(&:chomp)
    if PlatformGuard.implementation? :ruby
      # In a MRI checkout, $PWD and some extra -I entries end up as
      # the first entries in $LOAD_PATH. So just assert that it's not last.
      idx = paths.index(dir)
      idx.should < paths.size-1
    else
      paths[0].should == dir
    end
  end
    
      DIGEST_ALGORITHM =
    if defined?(OpenSSL::Digest::SHA256) then
      OpenSSL::Digest::SHA256
    elsif defined?(OpenSSL::Digest::SHA1) then
      OpenSSL::Digest::SHA1
    else
      require 'digest'
      Digest::SHA512
    end
    
        File.open gemspec_file, 'w' do |gs|
      gs.write @gem.to_ruby
    end
    
      def test_document
    @cmd.handle_options %w[--document]
    
      # I don't know Ruby's spec about 'unlink-before-close' exactly.
  # This test asserts current behaviour.
  def test_unlink_before_close
    Dir.mktmpdir('rubytest-file') {|tmpdir|
      filename = tmpdir + '/' + File.basename(__FILE__) + '.#{$$}'
      w = File.open(filename, 'w')
      w << 'foo'
      w.close
      r = File.open(filename, 'r')
      begin
        if /(mswin|bccwin|mingw|emx)/ =~ RUBY_PLATFORM
          assert_raise(Errno::EACCES) {File.unlink(filename)}
        else
          assert_nothing_raised {File.unlink(filename)}
        end
      ensure
        r.close
        File.unlink(filename) if File.exist?(filename)
      end
    }
  end
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg
    
    ; TODO make this stricter if possible
(allow network-outbound)
    
          def run
        UI.puts report
      end
    
            def self.options
          [
            ['--only-errors', 'Lint presents only the errors'],
          ].concat(super)
        end