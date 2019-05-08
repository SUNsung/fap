
        
                  def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?