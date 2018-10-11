
        
                array.flatten.map! { |i| ERB::Util.unwrapped_html_escape(i) }.join(sep).html_safe
      end
    
    require 'action_view/helpers/tags/collection_helpers'
    
            conditions.each { |k, v| conditions[k] = Array(v).map(&:to_s) }
        self._layout_conditions = conditions
    
        You can install it using Cask:
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
        it 'sends escape characters correctly to the backend' do
      emitter.events << Event.new(payload: {data: 'Line 1\nLine 2\nLine 3'})
      formatting_agent.sources << emitter
      formatting_agent.options.merge!('instructions' => {'data' => '{{data | newline_to_br | strip_newlines | split: '<br />' | join: ','}}'})
      formatting_agent.save!
    
      it 'renders the import form' do
    visit new_scenario_imports_path
    expect(page).to have_text('Import a Public Scenario')
  end
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
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
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
      def post_path_by_content(text)
    p = Post.find_by_text(text)
    post_path(p)
  end
    
        get '/history/A'
    
        get page
    # good html:
    # <pre><code>one\ntwo\nthree\nfour\n</code></pre>\n
    # broken html:
    # <pre>\n  <code>one\ntwo\nthree\nfour\n</code>\n</pre>
    assert_match /<pre><code>one\ntwo\nthree\nfour\n<\/code><\/pre>\n/m, last_response.body
  end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
      test 'creates korean page which contains korean content' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
      end
end

    
            def update
          authorize! :update, @order, order_token
    
            def find_product
          super(params[:id])
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def load_transfer_params
          @original_shipment         = Spree::Shipment.find_by!(number: params[:original_shipment_number])
          @variant                   = Spree::Variant.find(params[:variant_id])
          @quantity                  = params[:quantity].to_i
          authorize! :read, @original_shipment
          authorize! :create, Shipment
        end
    
            def update
          @stock_item = StockItem.accessible_by(current_ability, :update).find(params[:id])