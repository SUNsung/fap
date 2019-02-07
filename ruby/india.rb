
        
        # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
        def explicitly_declared_plugins_specs
      @plugins_to_package.collect do |plugin_pattern|
        specs = SpecificationHelpers.find_by_name_with_wildcards(plugin_pattern)
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
                it 'does not autocorrect the closing brace' do
              new_source = autocorrect_source(source)
              expect(new_source).to eq(source)
            end
          end