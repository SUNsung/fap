
        
        def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
          def after_features(features)
        @io.puts
        print_worst_offenders
        print_summary(features)
      end
    
            def handle_websockets_event(websocket)
          websocket.onopen { |handshake| connect(websocket, handshake) }
          websocket.onclose { disconnect(websocket) }
          websocket.onmessage { |msg| print_message(msg) }
          websocket.onerror { |error| log_error(error) }
        end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        # test only
    def stopped?
      !@thread&.alive?
    end
    
        head :ok
  end
    
          expect(builder.build).to eq(previous)
    end
  end
    
      private
    
        RailsMultisite::ConnectionManagement.with_hostname(params[:hostname]) do
      theme_ids = params[:theme_ids].split(',').map(&:to_i)
    
            a_length = a_split.length
        b_length = b_split.length
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
            css('code code').each do |node|
          node.before(node.children).remove
        end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
          def response
        return @response if defined? @response
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
            def next
          authorize! :update, @order, order_token
          @order.next!
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        rescue StateMachines::InvalidTransition
          respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
        end
    
              @products = @products.distinct.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@products)
        end
    
      private
    
      option '--identifier-prefix', 'IDENTIFIER_PREFIX',
    'Reverse domain prefix prepended to package identifier, ' \
    'ie. 'org.great.my'. If this is omitted, the identifer ' \
    'will be the package name.'
  option '--payload-free', :flag, 'Define no payload, assumes use of script options.',
    :default => false
  option '--ownership', 'OWNERSHIP',
    '--ownership option passed to pkgbuild. Defaults to 'recommended'. ' \
    'See pkgbuild(1).', :default => 'recommended' do |value|
    if !OWNERSHIP_OPTIONS.include?(value)
      raise ArgumentError, 'osxpkg-ownership value of '#{value}' is invalid. ' \
        'Must be one of #{OWNERSHIP_OPTIONS.join(', ')}'
    end
    value
  end
    
      def iteration
    return @iteration ? @iteration : 1
  end
    
        output = ::Dir.chdir(setup_dir) do
      tmp = build_path('metadata.json')
      setup_cmd = 'env PYTHONPATH=#{pylib} #{attributes[:python_bin]} ' \
        'setup.py --command-packages=pyfpm get_metadata --output=#{tmp}'
    
      # Generate the proper tar flags based on the path name.
  def tar_compression_flag(path)
    case path
      when /\.tar\.bz2$/
        return '-j'
      when /\.tar\.gz$|\.tgz$/
        return '-z'
      when /\.tar\.xz$/
        return '-J'
      else
        return nil
    end
  end # def tar_compression_flag
end # class FPM::Package::Tar

    
        opts[:process] = false unless opts.include?(:process)
    opts[:stdin]   = true  unless opts.include?(:stdin)
    opts[:stdout]  = true  unless opts.include?(:stdout)
    opts[:stderr]  = true  unless opts.include?(:stderr)