
        
        #############################################################################
#
# Standard tasks
#
#############################################################################
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
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
    
          def background_name(keyword, name, source_line, indent)
        print_feature_element_name(
          keyword, name, source_line, indent
        )
      end
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
            # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
      def std?
    @settings.include? :std
  end
    
      private
    
            next unless path.file?
        file = path
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
      def select_formula(key)
    @hash.fetch(key, [])
  end
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
        def set_filter_params
      @filter_params = filter_params.to_hash.symbolize_keys
    end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
    class Api::SalmonController < Api::BaseController
  include SignatureVerification
    
        $Kernel_trace_var_global = nil
    $Kernel_trace_var_extra  = nil
  end
    
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
    
        # Return the first {Sass::Selector::Simple} in a {Sass::Tree::RuleNode},
    # unless the rule begins with a combinator.
    #
    # @param rule [Sass::Tree::RuleNode]
    # @return [Sass::Selector::Simple?]
    def first_simple_sel(rule)
      sseq = first_sseq(rule)
      return unless sseq.is_a?(Sass::Selector::SimpleSequence)
      sseq.members.first
    end
  end
end

    
          Sass::Plugin.on_template_modified do |template|
        puts '>>> Change detected to: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_created do |template|
        puts '>>> New template detected: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_deleted do |template|
        puts '>>> Deleted template detected: #{template}'
        STDOUT.flush
      end
    
      class VagrantSSHCommandError < RuntimeError; end
    
          class Properties
        def initialize
          @properties = {}
        end
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          # Returns the keyword of the `if` statement as a string. Returns an empty
      # string for ternary operators.
      #
      # @return [String] the keyword of the `if` statement
      def keyword
        ternary? ? '' : loc.keyword.source
      end