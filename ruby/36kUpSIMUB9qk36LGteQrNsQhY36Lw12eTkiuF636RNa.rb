
        
          def self.headings
    @headings ||= [:likes_received,
                   :likes_given,
                   :topics_entered,
                   :topic_count,
                   :post_count,
                   :posts_read,
                   :days_visited]
  end
    
      describe '#<<' do
    it 'normalizes directive name' do
      builder << {
        script_src: ['symbol_underscore'],
        'script-src': ['symbol_dash'],
        'script_src' => ['string_underscore'],
        'script-src' => ['string_dash'],
      }
    
        Discourse.plugins.each(&:notify_before_auth)
    
        Extension.theme_extensions(theme_ids).each { |extension| builder << extension }
    Extension.plugin_extensions.each { |extension| builder << extension }
    builder << Extension.site_setting_extension
    
          return response unless html_response?(headers)
      ContentSecurityPolicy.base_url = request.host_with_port if Rails.env.development?
    
          expect(parse(theme_policy)['script-src']).to include('from-theme.com')
    
      def not_modified?
    cache_time =
      begin
        Time.rfc2822(request.env['HTTP_IF_MODIFIED_SINCE'])
      rescue ArgumentError
        nil
      end
    
        # doing this as early as possible so we have an
    # accurate counter
    if queue_start = env['HTTP_X_REQUEST_START']
      queue_start = queue_start.split('t=')[1].to_f
      queue_time = (Time.now.to_f - queue_start)
      env['REQUEST_QUEUE_SECONDS'] = queue_time
    end
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
          # The receiver of the method definition, if any.
      #
      # @return [Node, nil] the receiver of the method definition, or `nil`.
      def receiver
        node_parts[3]
      end
    
            def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
        end
    
          def part_of_ignored_node?(node)
        ignored_nodes.map(&:loc).any? do |ignored_loc|
          if ignored_loc.expression.begin_pos > node.source_range.begin_pos
            next false
          end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def js # custom js
        @js
      end
    
        get '/compare/A/fc66539528eb96f21b2bbdbf557788fe8a1196ac..b26b791cb7917c4f37dd9cb4d1e0efb24ac4d26f'
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end