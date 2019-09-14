
        
            it 'works when default_locale is English' do
      SiteSetting.default_locale = :en
    
      describe '#list' do
    it 'creates the prefix correctly' do
      {
        'some/bucket' => 'bucket/testing',
        'some' => 'testing'
      }.each do |bucket_name, prefix|
        s3_helper = S3Helper.new(bucket_name, '', client: client)
        Aws::S3::Bucket.any_instance.expects(:objects).with(prefix: prefix)
        s3_helper.list('testing')
      end
    end
  end
    
              entries << [name, link['href'].remove('#')] if link['href'].start_with?('#') && name != self.name
        end
      end
    
            css('pre > code').each do |node|
          node.parent['data-language'] = node['class'][/language-(\w+)/, 1] if node['class']
          node.parent.content = node.parent.content
        end
    
            css('pre').each do |node|
          # Remove nested nodes inside pre tags
          node.content = node.content
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
        # Verify the metadata
    expect(subject.metadata).to eq(data)
  end
    
          # The proc below loads the box and provider overrides. This is
      # in a proc because it may have to recurse if the provider override
      # changes the box.
      load_box_proc = lambda do
        local_keys = keys.dup
    
    describe VagrantPlugins::ProviderVirtualBox::Provider do
  let(:driver){ double('driver') }
  let(:provider){ double('provider', driver: driver) }
  let(:provider_config){ double('provider_config') }
  let(:uid) { '1000' }
  let(:machine){ double('machine', uid: uid, provider: provider, provider_config: provider_config) }
    
        it 'should run the actions on the machines in order' do
      subject.action(machine, 'up')
      subject.action(machine2, 'destroy')
      subject.run
    
      # This is the default endpoint of the Vagrant Cloud in
  # use. API calls will be made to this for various functions
  # of Vagrant that may require remote access.
  #
  # @return [String]
  DEFAULT_SERVER_URL = 'https://vagrantcloud.com'.freeze
    
              columns.each do |_, method|
            # Skip the id
            next if method == :id
    
    Then(/^the current directory will be a symlink to the release$/) do
  run_vagrant_command(exists?('e', TestApp.current_path))
end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
        it 'enables inline testing in a block' do
      Sidekiq::Testing.disable!
      assert Sidekiq::Testing.disabled?
      refute Sidekiq::Testing.fake?
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end