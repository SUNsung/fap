
        
        def gemspec_file
  '#{name}.gemspec'
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
                Jekyll.logger.debug 'LiveReload:', 'Reloading #{p.url}'
            Jekyll.logger.debug '', json_message
            @websockets.each { |ws| ws.send(json_message) }
          end
        end
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
            def representation_class
          Representation::Note
        end
    
      it 'renders the import form' do
    visit new_scenario_imports_path
    expect(page).to have_text('Import a Public Scenario')
  end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
                weather_agent_diff = scenario_import.agent_diffs[0]
    
          agent_runner.stop
    end
  end
end
    
    
    it 'work without the FAILED_JOBS_TO_KEEP env variable' do
      old = ENV['FAILED_JOBS_TO_KEEP']
      ENV['FAILED_JOBS_TO_KEEP'] = nil
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      ENV['FAILED_JOBS_TO_KEEP'] = old
    end
  end
    
        it 'should work with nested hashes' do
      @agent.options['very'] = {'nested' => '$.value'}
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'very' => {'nested' => '{{value}}'}, 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
          @log.level = 5
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        private
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
    Given /^I add this snippet to config\/application.rb:$/ do |snippet|
  file_name = 'config/application.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') {|f| f << content.sub(/class Application < Rails::Application.*$/, 'class Application < Rails::Application\n#{snippet}\n')}
  end
end
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
        private