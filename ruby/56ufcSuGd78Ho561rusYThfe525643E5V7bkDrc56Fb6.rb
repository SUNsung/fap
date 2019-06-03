
        
            let!(:bob_weather_agent) {
      agents(:bob_weather_agent)
    }
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      describe 'migrating a hash' do
    it 'should convert every attribute' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'})).to eq(
                                  {'a' => '$.data', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should work with leading_dollarsign_is_jsonpath' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'}, leading_dollarsign_is_jsonpath: true)).to eq(
                                  {'a' => '{{data}}', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should use the corresponding *_path attributes when using merge_path_attributes'do
      expect(LiquidMigrator.convert_hash({'a' => 'default', 'a_path' => '$.data'}, {leading_dollarsign_is_jsonpath: true, merge_path_attributes: true})).to eq(
                                  {'a' => '{{data}}'}
      )
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_hash({'b' => 'This is <$.complex[2]>'}) }.
        to raise_error('JSONPath '$.complex[2]' is too complex, please check your migration.')
    end
  end
    
      describe '#check' do
    it 'should not emit events on its first run' do
      expect { @checker.check }.to change { Event.count }.by(0)
      expect(@checker.memory[:last_event]).to eq '2014-04-17T10:25:31.000+02:00'
    end
    it 'should check that initial run creates an event' do
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
    
        SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
    module Docs
  class Filter < ::HTML::Pipeline::Filter
    def css(*args)
      doc.css(*args)
    end
    
        def root?
      path == 'index'
    end
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
      def app
    Rails.application
  end
end

    
            warden.logout
        expire_data_after_sign_out!
        warden.clear_strategies_cache!
        warden.lock! if lock
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
    module Jekyll
    
        def poster
      'poster='#{@poster}'' if @poster
    end
    
      # Convenience method for 'write_control_scripts' to register control scripts
  # if they exist.
  def register_script(key, value, hash)
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html