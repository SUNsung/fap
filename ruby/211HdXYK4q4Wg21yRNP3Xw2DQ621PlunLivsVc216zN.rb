
        
        module LogStash
  module PluginManager
  end
end
    
    require 'logstash-core-plugin-api/version'
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end