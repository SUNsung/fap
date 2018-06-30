
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          if site.theme && site.theme.layouts_path.eql?(base)
        @base_dir = site.theme.root
        @path = site.in_theme_dir(base, name)
      else
        @base_dir = site.source
        @path = site.in_source_dir(base, name)
      end
      @relative_path = @path.sub(@base_dir, '')
    
            self
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
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
      def clang
    @clang ||= MacOS.clang_version if MacOS.has_apple_developer_tools?
  end
    
    module Homebrew
  def doctor
    checks = Diagnostic::Checks.new
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
        def initial_urls
      [ 'https://hexdocs.pm/elixir/#{self.class.release}/api-reference.html',
        'https://hexdocs.pm/eex/#{self.class.release}/EEx.html',
        'https://hexdocs.pm/ex_unit/#{self.class.release}/ExUnit.html',
        'https://hexdocs.pm/iex/#{self.class.release}/IEx.html',
        'https://hexdocs.pm/logger/#{self.class.release}/Logger.html',
        'https://hexdocs.pm/mix/#{self.class.release}/Mix.html',
        'https://elixir-lang.org/getting-started/introduction.html' ]
    end
    
        BOOKS = %w(apache apc apcu array bc bzip2 calendar csprng classobj ctype curl
      datetime dba dir dom ds eio errorfunc ev event exec exif fileinfo filesystem filter
      ftp funchand gearman geoip gettext gmagick gmp hash ibase iconv iisfunc image
      imagick imap info inotify intl json judy ldap libevent libxml lua mail mailparse
      math mbstring mcrypt memcached misc mysqli network oauth openssl
      outcontrol password pcntl pcre pdo pgsql phar posix proctitle pthreads quickhash regex runkit
      reflection sca session sem session-pgsql shmop simplexml soap sockets solr sphinx spl
      spl-types sqlite3 sqlsrv ssh2 stats stream strings sync taint tidy tokenizer uodbc url
      v8js var varnish weakref xml xmlreader xmlrpc xmlwriter xsl yaf yar yaml zip zlib)
    
        def length
      @entries.length
    end
    
        def root?
      path == 'index'
    end
    
        def subpath_to(url, options = nil)
      url = self.class.parse(url)
      return unless origin == url.origin
    
    def load_apps
  out, err, status = Open3.capture3('/usr/bin/osascript', '-e', 'tell application 'System Events' to get (name, bundle identifier, unix id) of every process')
  if status.exitstatus > 0
    puts err
    exit status.exitstatus
  end
  out = out.split(', ')
  one_third   = out.length / 3
  @app_names  = out.shift(one_third)
  @bundle_ids = out.shift(one_third)
  @unix_ids   = out.shift(one_third)
end
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
            def show
          respond_with(stock_location)
        end