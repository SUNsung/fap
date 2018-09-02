
        
          it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
                scenario_import.merges = {
              '0' => {
                'name' => 'a new name',
                'schedule' => '6pm',
                'keep_events_for' => 2.days.to_i.to_s,
                'disabled' => 'true',
                'options' => weather_agent_options.merge('api_key' => 'foo').to_json
              }
            }
    
            agent_runner.stop
      end
    end
    
      def guid_order(agent_list, agent_name)
    agent_list.map{|a|a.guid}.sort.find_index(agents(agent_name).guid)
  end
end

    
        it 'work with set FAILED_JOBS_TO_KEEP env variable' do
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(-1)
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      expect(@keep.id).to eq(Delayed::Job.order(:failed_at)[0].id)
    end
    
          @log.level = -1
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      # Compress JavaScripts and CSS.
  config.assets.js_compressor = :uglifier
  # config.assets.css_compressor = :sass
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end
    
          # users should be able to set price when importing orders via api
      def permitted_line_item_attributes
        if @current_user_roles.include?('admin')
          super + [:price, :variant_id, :sku]
        else
          super
        end
      end
    
            def order
          @order ||= Spree::Order.find_by!(number: order_id)
          authorize! :read, @order
        end
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end