
        
            # Returns source file path.
    def path
      # Static file is from a collection inside custom collections directory
      if !@collection.nil? && !@site.config['collections_dir'].empty?
        File.join(*[@base, @site.config['collections_dir'], @dir, @name].compact)
      else
        File.join(*[@base, @dir, @name].compact)
      end
    end
    
        should 'acceptable limit post is 0' do
      clear_dest
      assert(
        fixture_site('limit_posts' => 0),
        'Couldn't create a site with limit_posts=0.'
      )
    end
  end
end

    
            @config.delete('highlighter')
        @config['kramdown'].delete('syntax_highlighter')
        markdown = Converters::Markdown.new(Utils.deep_merge_hashes(@config, override))
        result = nokogiri_fragment(markdown.convert(<<~MARKDOWN))
          ~~~ruby
          puts 'Hello World'
          ~~~
        MARKDOWN
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
          s = noninterned_name
      assert_nothing_raised(NameError, bug10985) {m = c.public_method(s.to_sym)}
      assert_raise_with_message(NoMethodError, /#{s}/) {m.call}
    
    
class ScanError < StandardError; end
    
      before :each do
    @data = 'firstline\nsecondline\n\nforthline'
    @zip = [31, 139, 8, 0, 244, 125, 128, 88, 2, 255, 75, 203, 44, 42, 46, 201,
            201, 204, 75, 229, 42, 78, 77, 206, 207, 75, 1, 51, 185, 210,242,
            139, 74, 50, 64, 76, 0, 180, 54, 61, 111, 31, 0, 0, 0].pack('C*')
    
      namespace :package do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build #{gem} packages'
      task gem => %w[.gem .tar.gz].map { |e| package(gem, e) }
    end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
    task :gemspec => 'rack-protection.gemspec'
task :default => :spec
task :test    => :spec

    
          def self.random_token
        SecureRandom.base64(TOKEN_LENGTH)
      end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          get '/', {}, 'HTTP_COOKIE' => '_session=EVIL_SESSION_TOKEN; _session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
  end
end

    
            def on_send(node)
          return unless node.arguments? && node.parenthesized?
    
            context 'when explicitly specified as toplevel constant' do
          let(:source) { '1.is_a?(::#{klass})' }
    
    
    {      # Checks whether the `block` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `block` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end