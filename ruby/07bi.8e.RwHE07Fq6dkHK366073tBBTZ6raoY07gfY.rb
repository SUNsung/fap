
        
        describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
        it 'outputs a structure containing name, description, the date, all agents & their links' do
      data = exporter.as_json
      expect(data[:name]).to eq(name)
      expect(data[:description]).to eq(description)
      expect(data[:source_url]).to eq(source_url)
      expect(data[:guid]).to eq(guid)
      expect(data[:schema_version]).to eq(1)
      expect(data[:tag_fg_color]).to eq(tag_fg_color)
      expect(data[:tag_bg_color]).to eq(tag_bg_color)
      expect(data[:icon]).to eq(icon)
      expect(Time.parse(data[:exported_at])).to be_within(2).of(Time.now.utc)
      expect(data[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent)}])
      expect(data[:control_links]).to eq([])
      expect(data[:agents]).to eq(agent_list.sort_by{|a| a.guid}.map { |agent| exporter.agent_as_json(agent) })
      expect(data[:agents].all? { |agent_json| agent_json[:guid].present? && agent_json[:type].present? && agent_json[:name].present? }).to be_truthy
    
      context '#if_present' do
    it 'returns nil when passed nil' do
      expect(Utils.if_present(nil, :to_i)).to be_nil
    end
    
            expect(@checker.last_check_at).to be_nil
        Agents::SomethingSource.async_check(@checker.id)
        expect(@checker.reload.last_check_at).to be_within(2).of(Time.now)
        expect(@checker.reload.options[:new]).to be_truthy # Show that we save options
      end
    
              hosts
        end
    
            # Defines additional configuration keys to be available in the
        # Vagrantfile. The configuration class should be returned by a
        # block passed to this method. This is done to ensure that the class
        # is lazy loaded, so if your class inherits from any classes that
        # are specific to Vagrant 1.0, then the plugin can still be defined
        # without breaking anything in future versions of Vagrant.
        #
        # @param [String] name Configuration key.
        # @param [Boolean] upgrade_safe If this is true, then this configuration
        #   key is safe to load during an upgrade, meaning that it depends
        #   on NO Vagrant internal classes. Do _not_ set this to true unless
        #   you really know what you're doing, since you can cause Vagrant
        #   to crash (although Vagrant will output a user-friendly error
        #   message if this were to happen).
        def self.config(name=UNSET_VALUE, upgrade_safe=false, &block)
          data[:config] ||= Registry.new
    
              name = name.to_s
          name = name[0...-1] if name.end_with?('=')
    
        # Get a value by the given key.
    #
    # This will evaluate the block given to `register` and return the
    # resulting value.
    def get(key)
      return nil if !@items.key?(key)
      return @results_cache[key] if @results_cache.key?(key)
      @results_cache[key] = @items[key].call
    end
    alias :[] :get
    
            when Packet::ParseCode::Error
          close_client(cli)
      end
    rescue EOFError
      if (cli.request.completed?)
        dispatch_request(cli, cli.request)
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
              # Retrieves the element class fields
          #
          # @return [Array]
          def self.attributes
            @attributes
          end
    
                seq.to_der
          end
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
    module Gollum
end
Gollum::GIT_ADAPTER = ENV['GIT_ADAPTER'] if ENV['GIT_ADAPTER']
    
        assert body.include?('Bilbo Baggins'), '/pages should include the page 'Bilbo Baggins''
    assert body.include?('Gondor'), '/pages should include the folder 'Gondor''
    assert !body.include?('Boromir'), '/pages should NOT include the page 'Boromir''
    assert body.include?('Mordor'), '/pages should include the folder 'Mordor''
    assert !body.include?('Eye Of Sauron'), '/pages should NOT include the page 'Eye Of Sauron''
    assert !body.match(/(Zamin).+(roast\-mutton)/m), '/pages should be sorted alphabetically'
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
      # determine file list from git ls-files
  files = `git ls-files`.
    split('\n').
    sort.
    reject { |file| file =~ /^\./ }.
    reject { |file| file =~ /^(rdoc|pkg|test|Home\.md|\.gitattributes)/ }.
    map { |file| '    #{file}' }.
    join('\n')
    
      s.add_development_dependency 'rack-test', '~> 0.6.2'
  s.add_development_dependency 'shoulda', '~> 3.5.0'
  s.add_development_dependency 'minitest-reporters', '~> 0.14.16'
  s.add_development_dependency 'twitter_cldr', '~> 3.2.0'
  s.add_development_dependency 'mocha', '~> 1.1.0'
  s.add_development_dependency 'test-unit', '~> 3.1.0'
  s.add_development_dependency 'webrick', '~> 1.3.1'