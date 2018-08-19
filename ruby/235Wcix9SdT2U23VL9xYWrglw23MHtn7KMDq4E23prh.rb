
        
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
    
        html_filters.push 'tensorflow/entries', 'tensorflow/clean_html'
    
        delegate :empty?, :blank?, to: :pages
    
        # #gradient > { @mixin horizontal ... }
    # to:
    # @mixin gradient-horizontal
    def flatten_mixins(file, container, prefix)
      log_transform container, prefix
      replace_rules file, Regexp.escape(container) do |mixins_css|
        unindent unwrap_rule_block(mixins_css).gsub(/@mixin\s*([\w-]+)/, '@mixin #{prefix}-\\1')
      end
    end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
      def post_to_facebook(url, body)
    Faraday.post(url, body)
  end
    
        it 'sets the backend ssh_options' do
      expect(backend.ssh_options[:keys]).to eq %w(/home/user/.ssh/id_rsa)
      expect(backend.ssh_options[:forward_agent]).to eq false
      expect(backend.ssh_options[:auth_methods]).to eq %w(publickey password)
    end
  end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
          unless file.file?
        return 'File #{file} could not be found'
      end