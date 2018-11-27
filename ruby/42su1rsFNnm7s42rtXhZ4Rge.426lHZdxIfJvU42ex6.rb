
        
        Dir.glob('rake/**.rake').each { |f| import f }
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            def preload_pipeline_warnings
          # This preloads the number of warnings for every pipeline, ensuring
          # that Ci::Pipeline#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.number_of_warnings
        end
    
            def representation_class
          Representation::DiffNote
        end
    
              new(hash)
        end
    
            # Builds a new note using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
    
        def check_confirmation
      if @user.confirmed?
        flash[:error] = I18n.t('admin.accounts.resend_confirmation.already_confirmed')
        redirect_to admin_accounts_path
      end
    end
  end
end

    
        def index
      authorize :custom_emoji, :index?
      @custom_emojis = filtered_custom_emojis.eager_load(:local_counterpart).page(params[:page])
    end
    
      # staged_path not available in Installer/Uninstall Stanza, workaround by nesting with preflight/postflight
  # see https://github.com/Homebrew/homebrew-cask/pull/8887
  # and https://github.com/Homebrew/homebrew-cask-versions/pull/296
    
      # The global load paths for Sass files. This is meant for plugins and
  # libraries to register the paths to their Sass stylesheets to that they may
  # be `@imported`. This load path is used by every instance of {Sass::Engine}.
  # They are lower-precedence than any load paths passed in via the
  # {file:SASS_REFERENCE.md#load_paths-option `:load_paths` option}.
  #
  # If the `SASS_PATH` environment variable is set,
  # the initial value of `load_paths` will be initialized based on that.
  # The variable should be a colon-separated list of path names
  # (semicolon-separated on Windows).
  #
  # Note that files on the global load path are never compiled to CSS
  # themselves, even if they aren't partials. They exist only to be imported.
  #
  # @example
  #   Sass.load_paths << File.dirname(__FILE__ + '/sass')
  # @return [Array<String, Pathname, Sass::Importers::Base>]
  def self.load_paths
    @load_paths ||= if ENV['SASS_PATH']
                      ENV['SASS_PATH'].split(Sass::Util.windows? ? ';' : ':')
                    else
                      []
                    end
  end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
              def is_#{name}_global?(name)
            return !@parent if @#{name}s && @#{name}s.has_key?(name)
            @parent && @parent.is_#{name}_global?(name)
          end
        RUBY
      end
    
          output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]