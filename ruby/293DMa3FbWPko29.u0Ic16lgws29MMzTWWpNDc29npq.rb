
        
          # Processes the preview if it has not been processed yet. Returns the receiving Preview instance for convenience:
  #
  #   blob.preview(resize: '100x100').processed.service_url
  #
  # Processing a preview generates an image from its blob and attaches the preview image to the blob. Because the preview
  # image is stored with the blob, it is only generated once.
  def processed
    process unless processed?
    self
  end
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
            def allow_request_origin?
          return true if server.config.disable_request_forgery_protection
    
          # Calls this block after #reset is called on the instance. Used for resetting external collaborators, like Time.zone.
      def resets(&block)
        set_callback :reset, :after, &block
      end
    
        def mock_authorization_request(authorization)
      OpenStruct.new(authorization: authorization)
    end
    
        test 'head :no_content (204) does not return a content-type header' do
      headers = HeadController.action(:no_content).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
          # Adds a new delivery method through the given class using the given
      # symbol as alias and the default options supplied.
      #
      #   add_delivery_method :sendmail, Mail::Sendmail,
      #     location:  '/usr/sbin/sendmail',
      #     arguments: '-i'
      def add_delivery_method(symbol, klass, default_options = {})
        class_attribute(:'#{symbol}_settings') unless respond_to?(:'#{symbol}_settings')
        send(:'#{symbol}_settings=', default_options)
        self.delivery_methods = delivery_methods.merge(symbol.to_sym => klass).freeze
      end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
    
    {    def replace_escaping(less)
      less = less.gsub(/~'([^']+)'/, '\1').gsub(/~'([^']+)'/, '\1') # Get rid of ~'' escape
      less.gsub!(/\$\{([^}]+)\}/, '$\1') # Get rid of @{} escape
      less.gsub!(/'([^'\n]*)(\$[\w\-]+)([^'\n]*)'/, ''\1#{\2}\3'') # interpolate variable in string, e.g. url('$file-1x') => url('#{$file-1x}')
      less.gsub(/(\W)e\(%\('?([^']*)'?\)\)/, '\1\2') # Get rid of e(%('')) escape
    end
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(220\s*[^\r\n]+)/i,
      :user		=> /^USER\s+([^\s]+)/i,
      :pass		=> /^PASS\s+([^\s]+)/i,
      :login_pass => /^(230\s*[^\n]+)/i,
      :login_fail => /^(5\d\d\s*[^\n]+)/i,
      :bye      => /^221/
    }
  end
    
          case matched
      when :webhost
        sessions[s[:session]].merge!({k => matches})
        if(s[:get])
          print_status('HTTP GET: #{s[:session]} http://#{s[:webhost]}#{s[:get]}')
          sessions.delete(s[:session])
          return
        end
      when nil
        # No matches, no saved state
      end # end case matched
    end # end of each_key
  end # end of parse
end # end of URL sniffer
    
          opts.on(
        '--indent NUM',
        'How many spaces to use for each level of indentation. Defaults to 2.',
        ''t' means use hard tabs.'
      ) do |indent|
        if indent == 't'
          @options[:for_tree][:indent] = '\t'
        else
          @options[:for_tree][:indent] = ' ' * indent.to_i
        end
      end
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
            def assign(node)
          @assignments << Assignment.new(node, self)
        end
    
            def variables_in_simple_node(node)
          simple_double_comparison?(node) do |var1, var2|
            return [variable_name(var1), variable_name(var2)]
          end
          simple_comparison?(node) do |var|
            return [variable_name(var)]
          end
          []
        end