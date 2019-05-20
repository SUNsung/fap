
        
            def fragment_url_string?(str)
      str[0] == '#'
    end
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
        def process_response?(response)
      raise NotImplementedError
    end
    
            css('a[id]:empty').each do |node|
          node.next_element['id'] = node['id'] if node.next_element
        end
    
      def warn_local_gems(plugins_with_path)
    puts('Update is not supported for manually defined plugins or local .gem plugin installations, skipping: #{plugins_with_path.join(', ')}')
  end
    
    task :spec    => 'spec:all'
task :default => :spec
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
      def perform(msg='lulz you forgot a msg!')
    $redis.lpush('sinkiq-example-messages', msg)
  end
end