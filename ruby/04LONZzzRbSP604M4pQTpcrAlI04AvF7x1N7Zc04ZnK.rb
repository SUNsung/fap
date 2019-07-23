
        
            it 'should return the right path' do
      optimized = Fabricate.build(:optimized_image, upload: upload, version: 1)
      expect(FileStore::BaseStore.new.get_path_for_optimized_image(optimized)).to eq(optimized_path)
    end
    
        before do
      RateLimiter.enable
      RateLimiter.clear_all_global!
    
          json = ::JSON.parse(response.body)
      expect(json['message']).to eq('2 users have been added to the group.')
      expect(json['users_not_added'][0]).to eq('doesnt_exist')
    end
  end
    
        if SiteSetting.tags_listed_by_group
      ungrouped_tags = Tag.where('tags.id NOT IN (SELECT tag_id FROM tag_group_memberships)')
      ungrouped_tags = ungrouped_tags.where('tags.topic_count > 0') unless show_all_tags
    
      def s3_client
    @s3_client ||= Aws::S3::Client.new(@s3_options)
  end
    
              @machine.communicate.tap do |comm|
            paths.each do |path|
              if windows?
                comm.sudo('mkdir ''#{path}'' -f')
              else
                comm.sudo('mkdir -p #{path}')
                comm.sudo('chown -h #{@machine.ssh_info[:username]} #{path}')
              end
            end
          end
        end
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
    # Create a temporary directory where test vagrant will run. The reason we save
# this to a constant is so we can clean it up later.
VAGRANT_TEST_CWD = Dir.mktmpdir('vagrant-test-cwd')
    
      describe '.usable?' do
    it 'returns true if usable' do
      allow(provider_config).to receive(:compose).and_return(false)
      allow(subject.driver).to receive(:execute).with('docker', 'version').and_return(true)
      expect(subject).to be_usable
    end
    
      describe 'comparison and ordering' do
    it 'should be equal if the name, provider, version match' do
      a = described_class.new('a', :foo, '1.0', directory)
      b = described_class.new('a', :foo, '1.0', directory)
    
          # Check if this machine has a local box metadata file
      # describing the existing guest. If so, load it and
      # set the box name and version to allow the actual
      # box in use to be discovered.
      if data_path
        meta_file = data_path.join('box_meta')
        if meta_file.file?
          box_meta = JSON.parse(meta_file.read)
          config.vm.box = box_meta['name']
          config.vm.box_version = box_meta['version']
        end
      end
    
        # @return [Pathname] The file to use to cache the search data.
    #
    def search_index_file
      cache_root + 'search_index.json'
    end
    
    if profile_filename = ENV['COCOAPODS_PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
          # @return [Bool] whether this resolved specification is by non-library targets.
      #
      attr_reader :used_by_non_library_targets_only
      alias used_by_non_library_targets_only? used_by_non_library_targets_only
    
          explicit_path = ::File.join(temp_path, LOGSTASH_DIR)
      dependencies_path = ::File.join(temp_path, DEPENDENCIES_DIR)
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end