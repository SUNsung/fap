
        
            it 'understands hl=1,3-4,9' do
      stub(params).[](:hl) { '1,3-4,9' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [1, 3, 4, 9]
    end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
    end

    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      describe '#complete_project_id' do
    it 'should return a array of hashes' do
      expect(@checker.complete_project_id).to eq [{text: 'test (1234)', id: 1234}, {text: 'test1 (1235)', id: 1235}]
    end
  end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
        def routes
      @routes ||= ROUTES.values_at(*self.modules).compact.uniq
    end
    
          # A string to print at the WARN level
      #
      # @return [String]
      attr_accessor :warn
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
            it 'should install plugin' do
          expect(instance.ui).to receive(:ask).and_return('y')
          expect(plugin_manager).to receive(:installed_plugins).and_return({})
          expect(plugin_manager).to receive(:install_plugin).and_return(double('spec', 'name' => 'vagrant', 'version' => '1'))
          instance.send(:process_configured_plugins)
        end
    
          it 'should flag threads as being parallel actions' do
        parallel = nil
        subject.custom(machine) { |m| parallel = Thread.current[:batch_parallel_action] }
        subject.custom(machine) { |*_| }
        subject.run
        expect(parallel).to eq(true)
      end
    
      # This returns the path to the ~/.vagrant.d folder where Vagrant's
  # per-user state is stored.
  #
  # @return [Pathname]
  def self.user_data_path
    # Use user specified env var if available
    path = ENV['VAGRANT_HOME']
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
        not_matching_pipeline = described_class.new(source, pipeline_id, [], settings)
    expect(subject).not_to eq(not_matching_pipeline)
    
          puts user_feedback_string_for('bootstrapping', args[:platform], machines, {'experimental' => experimental})
    
          attr_reader :page, :diff, :versions, :message, :allow_editing
    
          def next_link
        label = 'Next &raquo;'
        if @versions.size == Gollum::Page.per_page
          link = '/history/#{@page.name}?page=#{@page_num+1}'
          %(<a href='#{link}' hotkey='l'>#{label}</a>)
        else
          %(<span class='disabled'>#{label}</span>)
        end
      end
    end
  end
end

    
    def normal(text)
  text.gsub!(' ', '')
  text.gsub!('\n', '')
  text
end
    
        assert_no_match /Delete this Page/, last_response.body, ''Delete this Page' link not blocked in page template'
    assert_no_match /New/,              last_response.body, ''New' button not blocked in page template'
    assert_no_match /Upload/,           last_response.body, ''Upload' link not blocked in page template'
    assert_no_match /Rename/,           last_response.body, ''Rename' link not blocked in page template'
    assert_no_match /Edit/,             last_response.body, ''Edit' link not blocked in page template'
    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
end

    
            page_dir = settings.wiki_options[:page_file_dir].to_s
        redirect to('/#{clean_url(::File.join(encodeURIComponent(page_dir), encodeURIComponent(path), encodeURIComponent(name)))}')
      rescue Gollum::DuplicatePageError => e
        @message = 'Duplicate page: #{e.message}'
        mustache :error
      end
    end