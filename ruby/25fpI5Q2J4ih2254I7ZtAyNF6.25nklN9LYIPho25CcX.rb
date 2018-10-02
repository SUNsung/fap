
        
            def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            grouping: '#{grouping}',
            build_number: #{specified_build_number},
          })
        end').runner.execute(:test)
    
          it 'adds no-skip-current flag to command if no_skip_current is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'build',
              no_skip_current: true
            )
          end').runner.execute(:test)
    
          it 'works with :path param' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            path: '/tmp/test.keychain',
            password: 'testpassword',
            default_keychain: true,
            unlock: true,
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
            add_to_search_list: false,
          })
        end').runner.execute(:test)
        expect(result.size).to eq(4)
        expect(result[0]).to eq('security create-keychain -p testpassword /tmp/test.keychain')
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0].shellescape} #{path[1].shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
          it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
    shellescape_testcases = [
  # baseline
  {
    'it' => '(#1) on simple string',
    'it_result' => {
      'windows' => 'doesn't change it',
      'other'   => 'doesn't change it'
    },
    'str' => 'normal_string_without_spaces',
    'expect' => {
      'windows' => 'normal_string_without_spaces',
      'other'   => 'normal_string_without_spaces'
    }
  },
  {
    'it' => '(#2) on empty string',
    'it_result' => {
      'windows' => 'wraps it in double quotes',
      'other'   => 'wraps it in single quotes'
    },
    'str' => '',
    'expect' => {
      'windows' => '''',
      'other'   => '\'\''
    }
  },
  # spaces
  {
    'it' => '(#3) on string with spaces',
    'it_result' => {
      'windows' => 'wraps it in double quotes',
      'other'   => 'escapes spaces with <backslash>'
    },
    'str' => 'string with spaces',
    'expect' => {
      'windows' => ''string with spaces'',
      'other'   => 'string\ with\ spaces'
    }
  },
  # double quotes
  {
    'it' => '(#4) on simple string that is already wrapped in double quotes',
    'it_result' => {
      'windows' => 'doesn't touch it',
      'other'   => 'escapes the double quotes with <backslash>'
    },
    'str' => ''normal_string_without_spaces'',
    'expect' => {
      'windows' => ''normal_string_without_spaces'',
      'other'   => '\'normal_string_without_spaces\''
    }
  },
  {
    'it' => '(#5) on string with spaces that is already wrapped in double quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and duplicates existing double quotes',
      'other'   => 'escapes the double quotes and spaces with <backslash>'
    },
    'str' => ''string with spaces already wrapped in double quotes'',
    'expect' => {
      'windows' => ''''string with spaces already wrapped in double quotes'''',
      'other'   => '\'string\ with\ spaces\ already\ wrapped\ in\ double\ quotes\''
    }
  },
  {
    'it' => '(#6) on string with spaces and double quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and duplicates existing double quotes',
      'other'   => 'escapes the double quotes and spaces with <backslash>'
    },
    'str' => 'string with spaces and 'double' quotes',
    'expect' => {
      'windows' => ''string with spaces and ''double'' quotes'',
      'other'   => 'string\ with\ spaces\ and\ \'double\'\ quotes'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L64-L65
  {
    'it' => '(#7) on simple int',
    'it_result' => {
      'windows' => 'doesn't change it',
      'other'   => 'doesn't change it'
    },
    'str' => 3,
    'expect' => {
      'windows' => '3',
      'other'   => '3'
    }
  },
  # single quotes
  {
    'it' => '(#8) on simple string that is already wrapped in single quotes',
    'it_result' => {
      'windows' => 'doesn't touch it',
      'other'   => 'escapes the single quotes with <backslash>'
    },
    'str' => ''normal_string_without_spaces'',
    'expect' => {
      'windows' => ''normal_string_without_spaces'',
      'other'   => '\\'normal_string_without_spaces\\''
    }
  },
  {
    'it' => '(#9) on string with spaces that is already wrapped in single quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the single quotes and spaces with <backslash>'
    },
    'str' => ''string with spaces already wrapped in single quotes'',
    'expect' => {
      'windows' => '\''string with spaces already wrapped in single quotes'\'',
      'other'   => '\\'string\\ with\\ spaces\\ already\\ wrapped\\ in\\ single\\ quotes\\''
    }
  },
  {
    'it' => '(#10) string with spaces and single quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and leaves single quotes',
      'other'   => 'escapes the single quotes and spaces with <backslash>'
    },
    'str' => 'string with spaces and 'single' quotes',
    'expect' => {
      'windows' => '\'string with spaces and 'single' quotes\'',
      'other'   => 'string\ with\ spaces\ and\ \\\'single\\\'\ quotes'
    }
  },
  {
    'it' => '(#11) string with spaces and <backslash>',
    'it_result' => {
      'windows' => 'wraps in double quotes and escapes the backslash with backslash',
      'other'   => 'escapes the spaces and the backslash (which in results in quite a lot of them)'
    },
    'str' => 'string with spaces and \\ in it',
    'expect' => {
      'windows' => '\'string with spaces and \\ in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\\\\\ in\\ it'
    }
  },
  {
    'it' => '(#12) string with spaces and <slash>',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces'
    },
    'str' => 'string with spaces and / in it',
    'expect' => {
      'windows' =>  '\'string with spaces and / in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ /\\ in\\ it'
    }
  },
  {
    'it' => '(#13) string with spaces and parens',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces and parens'
    },
    'str' => 'string with spaces and (parens) in it',
    'expect' => {
      'windows' => '\'string with spaces and (parens) in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\(parens\\)\\ in\\ it'
    }
  },
  {
    'it' => '(#14) string with spaces, single quotes and parens',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces, single quotes and parens'
    },
    'str' => 'string with spaces and 'quotes' (and parens) in it',
    'expect' => {
      'windows' => '\'string with spaces and 'quotes' (and parens) in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\'quotes\\'\\ \\(and\\ parens\\)\\ in\\ it'
    }
  }
]
    
    group :docs do
  gem 'typhoeus'
  gem 'nokogiri'
  gem 'html-pipeline'
  gem 'image_optim'
  gem 'image_optim_pack', platforms: :ruby
  gem 'progress_bar', require: false
  gem 'unix_utils', require: false
  gem 'tty-pager', require: false
end
    
      get '/' do
    return redirect '/#q=#{params[:q]}' if params[:q]
    return redirect '/' unless request.query_string.empty? # courtesy of HTML5 App Cache
    response.headers['Content-Security-Policy'] = settings.csp if settings.csp
    erb :index
  end
    
        def xpath(*args)
      doc.xpath(*args)
    end
    
        def initialize
      @pages = {}
    end
    
        def request_all(urls, &block)
      if options[:rate_limit]
        if @@rate_limiter
          @@rate_limiter.limit = options[:rate_limit]
        else
          @@rate_limiter = RateLimiter.new(options[:rate_limit])
          Typhoeus.before(&@@rate_limiter.to_proc)
        end
      end
    
            if h1 = at_css('h1')
          h1.prepend_child(css('.view-source', '.improve-docs'))
        end
    
    DEPRECATION
    
        def check_encoding!
      return if @checked_encoding
      @checked_encoding = true
      @template, @original_encoding = Sass::Util.check_sass_encoding(@template)
    end
    
        private
    
          output = input_path if @options[:in_place]
      write_output(out, output)
    rescue Sass::SyntaxError => e
      raise e if @options[:trace]
      file = ' of #{e.sass_filename}' if e.sass_filename
      raise 'Error on line #{e.sass_line}#{file}: #{e.message}\n  Use --trace for backtrace'
    rescue LoadError => err
      handle_load_error(err)
    end
    
          # A hash from file extensions to the syntaxes for those extensions.
      # The syntaxes must be `:sass` or `:scss`.
      #
      # This can be overridden by subclasses that want normal filesystem importing
      # with unusual extensions.
      #
      # @return [{String => Symbol}]
      def extensions
        {'sass' => :sass, 'scss' => :scss}
      end