  </body>
</html>
HTML
    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
            context 'when the schema_version is less than 1' do
          it 'translates keep_events_for from days to seconds' do
            valid_parsed_data.delete(:schema_version)
            valid_parsed_data[:agents] = [valid_parsed_weather_agent_data.merge(keep_events_for: 5)]
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
        it 'has a default when options[:name] is nil' do
      expect(AgentsExporter.new(:name => nil).filename).to eq('exported-agents.json')
    end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        attr_reader :filters
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
            css('.file').each do |node|
          node.content = node.content.strip
        end
    
      def set_account
    @account = Account.find(params[:id])
  end
end

    
        web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data,
      user_id: active_session.user_id,
      access_token_id: active_session.access_token_id
    )
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
      included do
    before_action :set_rate_limit_headers, if: :rate_limited_request?
  end
    
    require 'builder'
require 'feedbag'
require 'json'
require 'nokogiri'
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
            private