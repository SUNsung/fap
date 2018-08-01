
        
            BOOKS = %w(apache apc apcu array bc bzip2 calendar csprng classobj ctype curl
      datetime dba dir dom ds eio errorfunc ev event exec exif fileinfo filesystem filter
      ftp funchand gearman geoip gettext gmagick gmp hash ibase iconv iisfunc image
      imagick imap info inotify intl json judy ldap libevent libxml lua mail mailparse
      math mbstring mcrypt memcached misc mysqli network oauth openssl
      outcontrol password pcntl pcre pdo pgsql phar posix proctitle pthreads quickhash regex runkit
      reflection sca session sem session-pgsql shmop simplexml soap sockets solr sphinx spl
      spl-types sqlite3 sqlsrv ssh2 stats stream strings sync taint tidy tokenizer uodbc url
      v8js var varnish weakref xml xmlreader xmlrpc xmlwriter xsl yaf yar yaml zip zlib)
    
        version 'Guide' do
      self.base_url = 'https://www.tensorflow.org/'
      self.root_path = 'get_started/get_started'
      self.initial_paths = %w(
        programmers_guide/reading_data
        tutorials/mandelbrot
        performance/performance_guide
        deploy/hadoop
        extend/architecture)
    
        attr_accessor :name, :type, :path
    
        def subpath_from(url, options = nil)
      self.class.parse(url).subpath_to(self, options)
    end
    
            css('.toplang', '#quickview', '.top').remove
    
                  # An IO::WaitReadable means there may be more IO but this
              # IO object is not ready to be read from yet. No problem,
              # we read as much as we can, so we break.
              breakable = true
            elsif e.is_a?(Errno::EAGAIN)
              # Otherwise, we just look for the EAGAIN error which should be
              # all that IO::WaitReadable does in Ruby 1.9.
              breakable = true
            end
    
            # Success, exit status 0
        0
      end
    end
  end
end

    
        def account
      scoped_accounts.order(id: :asc).take
    end
    
      def short_name
    object.site_title
  end
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
    puts '* Closing socket'
    
          private
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
      def transform_r(source, target)
    Dir.entries(source).each do |entry|
      next if [ '.', '..' ].include?(entry)
      source_entry = File.join(source, entry)
      target_entry = File.join(target, entry)
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
        i0, s0 = index, []
    r1 = _nt_rvalue
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        r3 = _nt_in_operator
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            r5 = _nt_rvalue
            s0 << r5
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::InExpression,input, i0...index, s0)
      r0.extend(InExpression0)
    else
      @index = i0
      r0 = nil
    end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end
    
            return if (value.nil? && options[:allow_nil]) || (value.blank? && options[:allow_blank])
    
          def check_validity!
        unless options.has_key?(:matches) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :matches or :not to the validator'
        end
      end
    end