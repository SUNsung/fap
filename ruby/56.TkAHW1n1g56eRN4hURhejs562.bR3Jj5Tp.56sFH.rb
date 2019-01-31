
        
            it 'returns a correct icon tag for GitHub' do
      icon = omniauth_provider_icon(:github)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-github')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
              weather_agent = scenario_import.scenario.agents.find_by(:guid => 'a-weather-agent')
          trigger_agent = scenario_import.scenario.agents.find_by(:guid => 'a-trigger-agent')
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
        @opts = {
      'api_key' => '800deeaf-e285-9d62-bc90-j999c1973cc9',
      'path' => 'trackings'
    }
    
      @event = Event.new
  @event.agent = agents(:bob_weather_agent)
  @event.payload = { :body => 'Sample message' }
  @event.save!
  end
    
      respond_to :json
    
      def update
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
      def subscription_params
    @subscription_params ||= params.require(:subscription).permit(:endpoint, keys: [:auth, :p256dh])
  end
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
        def generate_temporary_path
      Stud::Temporary.pathname
    end
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end

    
        # Extracts the Geometry from a file (or path to a file)
    def self.from_file(file)
      GeometryDetector.new(file).make
    end
    
        def raise_because_imagemagick_missing
      raise Errors::CommandNotFoundError.new('Could not run the `identify` command. Please install ImageMagick.')
    end
  end
end
