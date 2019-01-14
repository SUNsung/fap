
        
                  content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
        def compact
      PathSet.new paths.compact
    end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        it 'should work with nested arrays' do
      @agent.options['array'] = ['one', '$.two']
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'array' => ['one', '{{two}}'], 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      describe 'down' do
    let :valid_options do
      super().merge('extract' => new_extract,
                    'template' => new_template)
    end
    
        it 'should require the basecamp project_id' do
      @checker.options['project_id'] = nil
      expect(@checker).not_to be_valid
    end
    
        for_each_gem do |gem_path|
      sh 'gem push '#{gem_path}''
    end
  end
end
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def destroy
          @stock_item = StockItem.accessible_by(current_ability, :destroy).find(params[:id])
          @stock_item.destroy
          respond_with(@stock_item, status: 204)
        end
    
            def create
          authorize! :create, Store
          @store = Store.new(store_params)
          @store.code = params[:store][:code]
          if @store.save
            respond_with(@store, status: 201, default_template: :show)
          else
            invalid_resource!(@store)
          end
        end
    
            private
    
            def create
          authorize! :create, Taxon
          @taxon = Spree::Taxon.new(taxon_params)
          @taxon.taxonomy_id = params[:taxonomy_id]
          taxonomy = Spree::Taxonomy.find_by(id: params[:taxonomy_id])
    
              @users = @users.result.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@users)
        end
    
            def show
          respond_with(zone)
        end
    
    run SinatraStaticServer

    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end