
        
                fields = object.preferences.keys.map do |key|
          if object.has_preference?(key)
            form.label('preferred_#{key}', Spree.t(key) + ': ') +
              preference_field_for(form, 'preferred_#{key}', type: object.preference_type(key))
          end
        end
        safe_join(fields, '<br />'.html_safe)
      end
    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :show)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :show).load
                     end
        end
    
            def new; end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end
    
            def show
          respond_with(taxonomy)
        end
    
            def taxon
          @taxon ||= taxonomy.taxons.accessible_by(current_ability, :show).find(params[:id])
        end
    
            # The lazyloaded associations here are pretty much attached to which nodes
        # we render on the view so we better update it any time a node is included
        # or removed from the views.
        def index
          @variants = scope.includes(*variant_includes).for_currency_and_available_price_amount.
                      ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@variants)
        end
    
            def update
          authorize! :update, zone
          if zone.update(zone_params)
            respond_with(zone, status: 200, default_template: :show)
          else
            invalid_resource!(zone)
          end
        end
    
    end
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
        context 'as number' do
      it 'will gracefully handle a name given as a number' do
        rendered = project_with_number_as_name
        expect(rendered.name.to_i).to_not equal 0
      end
    end
    
    formatters = [
  SimpleCov::Formatter::HTMLFormatter,
  Coveralls::SimpleCov::Formatter
]
SimpleCov.formatter = SimpleCov::Formatter::MultiFormatter.new(formatters)
SimpleCov.start do
  add_filter 'vendor/cache'
end
    
          it 'should load and validate the project' do
        project_config = File.join(fixtures_dir, 'sample.yml')
        expect(described_class.validate(project_config: project_config)).to \
          be_a Tmuxinator::Project
      end
    
          it 'returns false' do
        expect(described_class.shell?).to be_falsey
      end
    end
  end
end

    
        context 'command is a string' do
      before do
        yaml['editor'] = 'vim'
      end