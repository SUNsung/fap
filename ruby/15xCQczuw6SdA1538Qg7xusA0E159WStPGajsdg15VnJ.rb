def source_dir(*subdirs)
  test_dir('source', *subdirs)
end
    
        # Public: Setup the plugin search path
    #
    # Returns an Array of plugin search paths
    def plugins_path
      if site.config['plugins_dir'].eql? Jekyll::Configuration::DEFAULTS['plugins_dir']
        [site.in_source_dir(site.config['plugins_dir'])]
      else
        Array(site.config['plugins_dir']).map { |d| File.expand_path(d) }
      end
    end
    
          topic.feature_topic_users(args)
    end
    
    # This is the script used to automatically convert all of twbs/bootstrap LESS to Sass.
#
# Most differences are fixed by regexps and other forms of string substitution.
# There are Bootstrap-specific workarounds for the lack of parent selectors, recursion, mixin namespaces, extend within @media, etc in Sass 3.2.
class Converter
  module LessConversion
    # Some regexps for matching bits of SCSS:
    SELECTOR_CHAR               = '\[\]$\w\-{}#,.:&>@'
    # 1 selector (the part before the {)
    SELECTOR_RE                 = /[#{SELECTOR_CHAR}]+[#{SELECTOR_CHAR}\s]*/
    # 1 // comment
    COMMENT_RE                  = %r((?:^[ \t]*//[^\n]*\n))
    # 1 {, except when part of @{ and #{
    RULE_OPEN_BRACE_RE          = /(?<![@#\$])\{/
    # same as the one above, but in reverse (on a reversed string)
    RULE_OPEN_BRACE_RE_REVERSE  = /\{(?![@#\$])/
    # match closed brace, except when \w precedes }, or when }[.'']. a heurestic to exclude } that are not selector body close }
    RULE_CLOSE_BRACE_RE         = /(?<!\w)\}(?![.''])/
    RULE_CLOSE_BRACE_RE_REVERSE = /(?<![.''])\}(?!\w)/
    # match any brace that opens or closes a properties body
    BRACE_RE                    = /#{RULE_OPEN_BRACE_RE}|#{RULE_CLOSE_BRACE_RE}/m
    BRACE_RE_REVERSE            = /#{RULE_OPEN_BRACE_RE_REVERSE}|#{RULE_CLOSE_BRACE_RE_REVERSE}/m
    # valid characters in mixin definitions
    SCSS_MIXIN_DEF_ARGS_RE      = /[\w\-,\s$:#%()]*/
    LESS_MIXIN_DEF_ARGS_RE      = /[\w\-,;.\s@:#%()]*/
    
        alias log puts
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
    Bundler.require(
    *Rails.groups(
        coverage: [:test],
        db: all_environments,
        pcap: all_environments
    )
)
    
    lib_path = root.join('lib').to_path
    
          when :login
        s[:user]=$1
        s[:pass]=$2
    
    classNames = [ 'HelloWorld1', 'HelloWorld2' ]
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
      # rspec-expectations config goes here. You can use an alternate
  # assertion/expectation library such as wrong or the stdlib/minitest
  # assertions if you prefer.
  config.expect_with :rspec do |expectations|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://myronmars.to/n/dev-blog/2012/06/rspecs-new-expectation-syntax
    expectations.syntax = :expect
  end