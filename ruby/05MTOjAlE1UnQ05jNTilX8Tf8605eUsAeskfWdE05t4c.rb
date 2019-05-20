
        
            def root_url
      context[:root_url]
    end
    
        def parse(response)
      parser = Parser.new(response.body)
      [parser.html, parser.title]
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
            # Remove examples
        css('.runnable-example').each do |node|
          node.parent.remove
        end
    
        streams = {
      liked:         Stream::Likes,
      mentioned:     Stream::Mention,
      followed_tags: Stream::FollowedTag,
      activity:      Stream::Activity
    }
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
        context 'without a specific plugin' do
      it 'display a list of plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
      desc 'Release all gems to rubygems'
  task release: :build do
    sh 'git tag -a -m \'Version #{version}\' v#{version}'