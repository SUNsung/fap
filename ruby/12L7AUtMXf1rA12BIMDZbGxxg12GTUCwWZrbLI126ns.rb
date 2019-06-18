
        
            it 'does not send previously configured control targets when the current agent does not support them' do
      select_agent_type('Commander Agent')
      select2('SF Weather', from: 'Control targets')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No control targets')
      click_on 'Save'
      expect(page).to have_content('No control targets')
      agent = Agent.find_by(name: 'No control targets')
      expect(agent.control_targets).to eq([])
    end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
            context 'when the schema_version is less than 1' do
          before do
            valid_parsed_weather_agent_data[:keep_events_for] = 2
            valid_parsed_data.delete(:schema_version)
          end
    
        Thread.abort_on_exception = @taoe
    $stdout, $stderr = @oso, @ose
  end
    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
      config.vm.define 'debian6' do |debian6|
    debian6.vm.box = 'puppetlabs/debian-6.0.10-64-puppet'
  end
    
      # Execute this command. See Clamp::Command#execute and Clamp's documentation
  def execute
    logger.level = :warn
    logger.level = :info if verbose? # --verbose
    logger.level = :debug if debug? # --debug
    if log_level
      logger.level = log_level.to_sym
    end
    
      public(:input, :output, :identifier, :to_s)
    
      # Sanitize package name.
  # Some PyPI packages can be named 'python-foo', so we don't want to end up
  # with a package named 'python-python-foo'.
  # But we want packages named like 'pythonweb' to be suffixed
  # 'python-pythonweb'.
  def fix_name(name)
    if name.start_with?('python')
      # If the python package is called 'python-foo' strip the 'python-' part while
      # prepending the package name prefix.
      return [attributes[:python_package_name_prefix], name.gsub(/^python-/, '')].join('-')
    else
      return [attributes[:python_package_name_prefix], name].join('-')
    end
  end # def fix_name
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
        # Write the scripts, too.
    write_scripts
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar
