
        
            # The stdlib recorded in the install receipt is used during dependency
    # compatibility checks, so we only care about the stdlib that libraries
    # link against.
    keg.detect_cxx_stdlibs(:skip_executables => true)
  end
    
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
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
      def dump_formula_report(key, title)
    formulae = select_formula(key).sort.map do |name, new_name|
      # Format list items of renamed formulae
      if key == :R
        name = pretty_installed(name) if installed?(name)
        new_name = pretty_installed(new_name) if installed?(new_name)
        '#{name} -> #{new_name}'
      else
        installed?(name) ? pretty_installed(name) : name
      end
    end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
    puts '\nDone.'

    
            private
    
            # NOTE: feed_token was renamed from rss_token but both needs to be supported because
        #       users might have already added the feed to their RSS reader before the rename
        token = current_request.params[:feed_token].presence || current_request.params[:rss_token].presence
        return unless token
    
            scope :latest, -> { where(retried: [false, nil]) }
        scope :created, -> { where(status: 'created') }
        scope :running, -> { where(status: 'running') }
        scope :pending, -> { where(status: 'pending') }
        scope :success, -> { where(status: 'success') }
        scope :failed, -> { where(status: 'failed')  }
        scope :canceled, -> { where(status: 'canceled')  }
        scope :skipped, -> { where(status: 'skipped')  }
        scope :manual, -> { where(status: 'manual')  }
    
          def to_markdown
        '[![#{title}](#{image_url})](#{link_url})'
      end
    
    
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end