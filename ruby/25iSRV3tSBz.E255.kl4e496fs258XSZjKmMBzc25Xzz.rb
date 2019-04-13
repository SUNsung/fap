
        
                  expect(weather_agent.name).to eq('a weather agent')
          expect(weather_agent.schedule).to eq('5pm')
          expect(weather_agent.keep_events_for).to eq(14.days)
          expect(weather_agent.propagate_immediately).to be_falsey
          expect(weather_agent).to be_disabled
          expect(weather_agent.memory).to be_empty
          expect(weather_agent.options).to eq(weather_agent_options)
    
        it 'should convert the 'escape' method correctly' do
      expect(LiquidMigrator.convert_string('Escaped: <escape $.content.name>\nNot escaped: <$.content.name>')).to eq(
                                    'Escaped: {{content.name | uri_escape}}\nNot escaped: {{content.name}}'
      )
    end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
    describe Agents::AftershipAgent do
  before do
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
    namespace :bower do
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
        it 'returns an array of likes for a post' do
      bob.like!(@message)
      get :index, params: {post_id: @message.id}
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@message.likes.map(&:id))
    end
    
        it 'succeeds for notification dropdown' do
      Timecop.travel(6.seconds.ago) do
        @notification.touch
      end
      get :index, format: :json
      expect(response).to be_success
      response_json = JSON.parse(response.body)
      note_html = Nokogiri::HTML(response_json['notification_list'][0]['also_commented']['note_html'])
      timeago_content = note_html.css('time')[0]['data-time-ago']
      expect(response_json['unread_count']).to be(1)
      expect(response_json['unread_count_by_type']).to eq(
        'also_commented'       => 1,
        'comment_on_post'      => 0,
        'contacts_birthday'    => 0,
        'liked'                => 0,
        'mentioned'            => 0,
        'mentioned_in_comment' => 0,
        'reshared'             => 0,
        'started_sharing'      => 0
      )
      expect(timeago_content).to include(@notification.updated_at.iso8601)
      expect(response.body).to match(/note_html/)
    end
    
        def self.find_by_name_with_wildcards(pattern)
      re = transform_pattern_into_re(pattern)
      ::Gem::Specification.find_all.select do |specification|
        specification.name =~ re
      end
    end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end

    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
            def delta(first, second, alignment = :left)
          case alignment
          when :left
            first.column - second.column
          when :right
            first.last_column - second.last_column
          else
            0
          end
        end
    
        def each_directive
      return if processed_source.comments.nil?