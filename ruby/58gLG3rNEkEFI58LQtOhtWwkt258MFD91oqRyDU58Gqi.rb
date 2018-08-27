
        
                private
    
              builder = LabelBuilder.new(@template_object, @object_name, @method_name, @object, tag_value)
    
        def render_template(event)
      info do
        message = '  Rendered #{from_rails_root(event.payload[:identifier])}'.dup
        message << ' within #{from_rails_root(event.payload[:layout])}' if event.payload[:layout]
        message << ' (#{event.duration.round(1)}ms)'
      end
    end
    
        %w(<< concat push insert unshift).each do |method|
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{method}(*args)
          paths.#{method}(*typecast(args))
        end
      METHOD
    end
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
      def self.bottle_sha1(*)
  end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
        def comments
      'comments'
    end
    
            def uid
          @uid ||= Gitlab::Utils.force_utf8(auth_hash.uid.to_s)
        end
    
          def find_sessionless_user
        find_user_from_access_token || find_user_from_feed_token
      rescue Gitlab::Auth::AuthenticationError
        nil
      end
    
          private
    
            def value_text
          @status ? ('%.2f%%' % @status) : 'unknown'
        end
    
      def index
    @filters = current_account.custom_filters
  end
    
        Pubsubhubbub::UnsubscribeWorker.perform_async(signed_request_account.id) if signed_request_account.subscribed?
    DeliveryFailureTracker.track_inverse_success!(signed_request_account)
  end
    
        private
    
        def paginated_instances
      filtered_instances.page(params[:page])
    end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      #
  # Updates the various parts of the HTTP response command string.
  #
  def update_cmd_parts(str)
    if (md = str.match(/HTTP\/(.+?)\s+(\d+)\s?(.+?)\r?\n?$/))
      self.message = md[3].gsub(/\r/, '')
      self.code    = md[2].to_i
      self.proto   = md[1]
    else
      raise RuntimeError, 'Invalid response command string', caller
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

    
        # Render the template to CSS and return the source map.
    #
    # @param sourcemap_uri [String] The sourcemap URI to use in the
    #   `@sourceMappingURL` comment. If this is relative, it should be relative
    #   to the location of the CSS file.
    # @return [(String, Sass::Source::Map)] The rendered CSS and the associated
    #   source map
    # @raise [Sass::SyntaxError] if there's an error in the document, or if the
    #   public URL for this document couldn't be determined.
    # @raise [Encoding::UndefinedConversionError] if the source encoding
    #   cannot be converted to UTF-8
    # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
    def render_with_sourcemap(sourcemap_uri)
      return _render_with_sourcemap(sourcemap_uri) unless @options[:quiet]
      Sass::Util.silence_sass_warnings {_render_with_sourcemap(sourcemap_uri)}
    end
    
      def execute
    signal_deprecation_warning_for_pack
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
      it 'returns the source' do
    expect(subject.source).to eq(source)
  end