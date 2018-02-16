          def listen(conn)
            conn.without_reconnect do
              original_client = conn.respond_to?(:_client) ? conn._client : conn.client
    
            def test_url_memory_db_for_sqlite3
          spec = resolve 'sqlite3::memory:'
          assert_equal(':memory:', spec['database'])
        end
    
          def beat
        transmit type: ActionCable::INTERNAL[:message_types][:ping], message: Time.now.to_i
      end
    
    class HelpersTypoControllerTest < ActiveSupport::TestCase
  def setup
    @autoload_paths = ActiveSupport::Dependencies.autoload_paths
    ActiveSupport::Dependencies.autoload_paths = Array(HelpersTypoController.helpers_path)
  end
    
      test 'token_and_options returns nil with no value after the equal sign' do
    actual = ActionController::HttpAuthentication::Token.token_and_options(malformed_request).first
    assert_nil actual
  end
    
        def call(env)
      result = @app.call(env)
      result[1]['Middleware-Order'] += '!'
      result
    end
  end
    
          def handle_exception_with_mailer_class(exception)
        if klass = mailer_class
          klass.handle_exception exception
        else
          raise exception
        end
      end
  end
end

    
          debug { event.payload[:mail] }
    end
    
      # This allows generic Altivec PPC bottles to be supported in some
  # formulae, while also allowing specific bottles in others; e.g.,
  # sometimes a formula has just :tiger_altivec, other times it has
  # :tiger_g4, :tiger_g5, etc.
  def find_altivec_tag(tag)
    if tag.to_s =~ /(\w+)_(g4|g4e|g5)$/
      altivec_tag = '#{$1}_altivec'.to_sym
      altivec_tag if key?(altivec_tag)
    end
  end
    
      def <<(o)
    @settings << o
    self
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
    
      UNBREWED_EXCLUDE_FILES = %w[.DS_Store]
  UNBREWED_EXCLUDE_PATHS = %w[
    .github/*
    bin/brew
    lib/gdk-pixbuf-2.0/*
    lib/gio/*
    lib/node_modules/*
    lib/python[23].[0-9]/*
    lib/pypy/*
    lib/pypy3/*
    lib/ruby/gems/[12].*
    lib/ruby/site_ruby/[12].*
    lib/ruby/vendor_ruby/[12].*
    share/pypy/*
    share/pypy3/*
    share/doc/homebrew/*
    share/info/dir
    share/man/man1/brew.1
    share/man/whatis
  ]
    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          encoding_option(opts)
    
          opts.on('-l', '--line-numbers', '--line-comments',
              'Emit comments in the generated CSS indicating the corresponding source line.') do
        @options[:for_engine][:line_numbers] = true
      end
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end