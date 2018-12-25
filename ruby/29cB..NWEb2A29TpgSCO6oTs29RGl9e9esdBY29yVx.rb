
        
          require ARGV.shift
  exit_status = LogStash::Runner.run('bin/logstash', ARGV)
  exit(exit_status || 0)
end

    
      def target_file
    target_file = File.join(LogStash::Environment::LOGSTASH_HOME, 'plugins_package')
    '#{target_file}#{file_extension}'
  end
end

    
            PluginManager.ui.debug('Looking if package named: #{plugin_name} exists at #{uri}')
    
      it 'returns the pipeline id' do
    expect(subject.pipeline_id).to eq(pipeline_id)
  end