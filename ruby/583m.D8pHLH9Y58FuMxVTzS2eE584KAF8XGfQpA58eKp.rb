
        
              def test_declare_missing_helper
        e = assert_raise AbstractController::Helpers::MissingHelperError do
          AbstractHelpers.helper :missing
        end
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
      describe '#metadata_url' do
    subject { super().metadata_url }
    it { should be_nil }
  end
    
      describe '#state' do
    it 'returns not_created if no ID' do
      allow(machine).to receive(:id).and_return(nil)
      allow(machine).to receive(:data_dir).and_return('.vagrant')
    
          expect(Process).to receive(:exit!).with(3)
      subject.send(:trigger_abort, 3)
    end
    
        def generate_temporary_path
      Stud::Temporary.pathname
    end
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
        desc 'new [PROJECT] [SESSION]', COMMANDS[:new]
    map 'open' => :new
    map 'edit' => :new
    map 'o' => :new
    map 'e' => :new
    map 'n' => :new
    method_option :local, type: :boolean,
                          aliases: ['-l'],
                          desc: 'Create local project file at ./.tmuxinator.yml'
    
        include_examples :unsupported_version_message, :stop, :foo
  end
    
        context 'tmux_command is not specified' do
      it 'returns the default' do
        expect(project.tmux_command).to eq 'tmux'
      end
    end
  end
    
      def attributes_match
    expect(@actual).to have_attributes(@expected_attrs)
  end
    
    describe Tmuxinator::WemuxSupport do
  let(:klass) { Class.new }
  let(:instance) { klass.new }