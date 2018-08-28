
        
          def search_taps(rx)
    SEARCHABLE_TAPS.map do |user, repo|
      Thread.new { search_tap(user, repo, rx) }
    end.inject([]) do |results, t|
      results.concat(t.value)
    end
  end
    
          options[:minimum], options[:maximum] = range.begin, range.end
      options[:maximum] -= 1 if range.exclude_end?
    end
    
          attr_reader :request
    
            def initialize(project, ref, job = nil)
          @project = project
          @ref = ref
          @job = job
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
            it 'adds errors on validation when updated options are unparsable' do
          scenario_import.merges = {
            '0' => {
              'options' => '{'
            }
          }
          expect(scenario_import).not_to be_valid
          expect(scenario_import).to have(1).error_on(:base)
        end
      end
    end
    }
    
      describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def update
          authorize! :update, @product_property
    
              error =
            if @quantity < 0 && @target_shipment == @original_shipment
              '#{Spree.t(:negative_quantity, scope: 'api')}, \n#{Spree.t('wrong_shipment_target', scope: 'api')}'
            elsif @target_shipment == @original_shipment
              Spree.t(:wrong_shipment_target, scope: 'api')
            elsif @quantity < 0
              Spree.t(:negative_quantity, scope: 'api')
            end
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
            PluginManager.ui.debug('Looking if package named: #{plugin_name} exists at #{uri}')
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
      it 'returns the sorted config parts' do
    expect(subject.config_parts).to eq(ordered_config_parts)
  end